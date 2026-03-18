/*
 * XREFs of PopPowerAdapterAdd @ 0x1407D94D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x1403EEB48 (_tlgCreate1Sz_char.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IoSynchronousCallDriver @ 0x1404B2910 (IoSynchronousCallDriver.c)
 *     Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline @ 0x14060C6E4 (Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopPowerAdapterTraceFailure @ 0x14077A9EC (PopPowerAdapterTraceFailure.c)
 *     PopPrepareIoctl @ 0x140AFBC84 (PopPrepareIoctl.c)
 *     PopPowerAdapterQueryStatus @ 0x140B71E04 (PopPowerAdapterQueryStatus.c)
 */

void __fastcall PopPowerAdapterAdd(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  char v7; // al
  int updated; // edx
  const CHAR *v9; // rdx
  int v10; // ecx
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v13; // [rsp+45h] [rbp-BBh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+5Ch] [rbp-A4h] BYREF
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+64h] [rbp-9Ch] BYREF
  int v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+80h] [rbp-80h] BYREF
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  _BYTE v27[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  int *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  int *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  int *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  int *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  int *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  __int64 *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+150h] [rbp+50h] BYREF
  char *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  __int16 *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  char *v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  int *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]

  v11 = 0;
  if ( !stru_140F10070.ApcState.ApcListHead[0].Blink )
  {
    IsEnabledDeviceUsageNoInline = Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline();
    KeInitializeEvent(
      (PRKEVENT)(a1 + 104),
      (EVENT_TYPE)(IsEnabledDeviceUsageNoInline == 0),
      IsEnabledDeviceUsageNoInline != 0);
    *(_OWORD *)(a1 + 132) = 0LL;
    *(_OWORD *)(a1 + 148) = 0LL;
    *(_QWORD *)(a1 + 164) = 0LL;
    *(_DWORD *)(a1 + 172) = 0;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703472, 0, a1 + 132, 0, 44);
    v3 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
    if ( v3 >= 0 )
    {
      *(_DWORD *)(a1 + 128) = 1;
      PopAcquireRwLockExclusive((unsigned __int64 *)&qword_140F0FE60, v4, v5, v6);
      v7 = BYTE2(v11);
      stru_140F10070.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)a1;
      if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
        v7 = 1;
      *(_BYTE *)(a1 + 216) = 0;
      BYTE2(v11) = v7;
      LOWORD(v11) = 256;
      updated = ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, (__int64)&v11);
      if ( (unsigned int)dword_140E07598 > 5 )
      {
        v47 = &v12;
        v12 = v11;
        v49 = &v13;
        v51 = (char *)&v13 + 1;
        v53 = &v14;
        v13 = *(_WORD *)((char *)&v11 + 1);
        v14 = updated;
        v48 = 1LL;
        v50 = 1LL;
        v52 = 1LL;
        v54 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07598,
          (unsigned __int8 *)byte_14004E145,
          0LL,
          0LL,
          6u,
          &v46);
      }
      PopPowerAdapterQueryStatus(a1, 0LL);
      PopReleaseRwLock((struct _KTHREAD *)&qword_140F0FE60);
      if ( (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
      {
        v9 = "REC Supported";
        v14 = *(_DWORD *)(a1 + 136);
        v26 = 4LL;
        v25 = &v14;
        if ( (*(_DWORD *)(a1 + 140) & 1) == 0 )
          v9 = "-";
        tlgCreate1Sz_char((__int64)v27, v9);
        v10 = *(_DWORD *)(a1 + 144);
        v28 = &v15;
        v16 = *(_DWORD *)(a1 + 148);
        v15 = v10;
        v30 = &v16;
        v17 = *(_DWORD *)(a1 + 152);
        v32 = &v17;
        v18 = *(_DWORD *)(a1 + 156);
        v34 = &v18;
        v19 = *(_DWORD *)(a1 + 160);
        v36 = &v19;
        v20 = *(_DWORD *)(a1 + 164);
        v38 = &v20;
        v21 = *(_DWORD *)(a1 + 168);
        v40 = &v21;
        v22 = *(_DWORD *)(a1 + 172);
        v42 = &v22;
        v44 = &v23;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v23 = 0x1000000LL;
        v45 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07598,
          (unsigned __int8 *)word_14004E1B2,
          0LL,
          0LL,
          0xDu,
          &v24);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 128) = 2;
      *(_DWORD *)(a1 + 220) = 1;
      *(_DWORD *)(a1 + 228) = 0;
      PopPowerAdapterTraceFailure((_DWORD *)a1, 1, v3);
    }
  }
}
