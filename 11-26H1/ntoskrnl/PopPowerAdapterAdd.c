/*
 * XREFs of PopPowerAdapterAdd @ 0x1407DCEF0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IoSynchronousCallDriver @ 0x1404ABE20 (IoSynchronousCallDriver.c)
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1406066D8 (Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline @ 0x14060F844 (Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopPowerAdapterTraceFailure @ 0x14077D91C (PopPowerAdapterTraceFailure.c)
 *     PopPrepareIoctl @ 0x140AFD904 (PopPrepareIoctl.c)
 *     PopPowerAdapterQueryStatus @ 0x140B76DFC (PopPowerAdapterQueryStatus.c)
 */

void __fastcall PopPowerAdapterAdd(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  char v7; // al
  NTSTATUS updated; // edx
  const CHAR *v9; // rdx
  int v10; // ecx
  char *v11; // rdx
  NTSTATUS *v12; // rax
  char v13; // al
  NTSTATUS v14; // edx
  const CHAR *v15; // rdx
  int v16; // ecx
  int Buffer; // [rsp+40h] [rbp-C0h] BYREF
  char v18; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v19; // [rsp+45h] [rbp-BBh] BYREF
  NTSTATUS v20; // [rsp+48h] [rbp-B8h] BYREF
  NTSTATUS v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+64h] [rbp-9Ch] BYREF
  int v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+80h] [rbp-80h] BYREF
  NTSTATUS *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  _BYTE v33[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  NTSTATUS *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  __int64 *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v52[2]; // [rsp+150h] [rbp+50h] BYREF
  char *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  __int16 *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  char *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  NTSTATUS *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]

  Buffer = 0;
  if ( !qword_140F108D0 )
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
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 128) = 2;
      *(_DWORD *)(a1 + 220) = 1;
      *(_DWORD *)(a1 + 228) = 0;
      PopPowerAdapterTraceFailure((_DWORD *)a1, 1, v3);
      return;
    }
    *(_DWORD *)(a1 + 128) = 1;
    if ( (unsigned int)Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !PopBatteryTestExemptPolicy )
      {
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB, v4, v5, v6);
        v7 = BYTE2(Buffer);
        qword_140F108D0 = a1;
        if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
          v7 = 1;
        *(_BYTE *)(a1 + 216) = 0;
        BYTE2(Buffer) = v7;
        LOWORD(Buffer) = 256;
        updated = ZwUpdateWnfStateData(&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, &Buffer, 4u, 0LL, 0LL, 0, 0);
        if ( (unsigned int)dword_140E07560 > 5 )
        {
          v53 = &v18;
          v18 = Buffer;
          v55 = &v19;
          v57 = (char *)&v19 + 1;
          v59 = &v20;
          v19 = *(_WORD *)((char *)&Buffer + 1);
          v20 = updated;
          v54 = 1LL;
          v56 = 1LL;
          v58 = 1LL;
          v60 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07560,
            (unsigned __int8 *)word_14004ED8A,
            0LL,
            0LL,
            6u,
            v52);
        }
        PopPowerAdapterQueryStatus(a1, 0LL);
        PopReleaseRwLock((struct _KTHREAD *)&PopCB);
        if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
        {
          v9 = "REC Supported";
          v20 = *(_DWORD *)(a1 + 136);
          v32 = 4LL;
          v31 = &v20;
          if ( (*(_DWORD *)(a1 + 140) & 1) == 0 )
            v9 = "-";
          tlgCreate1Sz_char((__int64)v33, v9);
          v10 = *(_DWORD *)(a1 + 144);
          v34 = &v22;
          v11 = &byte_14004EDF7;
          v23 = *(_DWORD *)(a1 + 148);
          v36 = &v23;
          v24 = *(_DWORD *)(a1 + 152);
          v38 = &v24;
          v25 = *(_DWORD *)(a1 + 156);
          v40 = &v25;
          v26 = *(_DWORD *)(a1 + 160);
          v42 = &v26;
          v27 = *(_DWORD *)(a1 + 164);
          v44 = &v27;
          v28 = *(_DWORD *)(a1 + 168);
          v46 = &v28;
          v21 = *(_DWORD *)(a1 + 172);
          v12 = &v21;
          v22 = v10;
LABEL_24:
          v48 = v12;
          v35 = 4LL;
          v50 = &v29;
          v41 = 4LL;
          v39 = 4LL;
          v37 = 4LL;
          v43 = 4LL;
          v45 = 4LL;
          v47 = 4LL;
          v49 = 4LL;
          v29 = 0x1000000LL;
          v51 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)v11, 0LL, 0LL, 0xDu, &v30);
        }
      }
    }
    else
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB, v4, v5, v6);
      v13 = BYTE2(Buffer);
      qword_140F108D0 = a1;
      if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
        v13 = 1;
      *(_BYTE *)(a1 + 216) = 0;
      BYTE2(Buffer) = v13;
      LOWORD(Buffer) = 256;
      v14 = ZwUpdateWnfStateData(&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, &Buffer, 4u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140E07560 > 5 )
      {
        v53 = (char *)&v19 + 1;
        HIBYTE(v19) = Buffer;
        v55 = &v19;
        v18 = BYTE2(Buffer);
        v57 = &v18;
        v59 = &v21;
        LOBYTE(v19) = BYTE1(Buffer);
        v21 = v14;
        v54 = 1LL;
        v56 = 1LL;
        v58 = 1LL;
        v60 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07560,
          (unsigned __int8 *)byte_14004EC68,
          0LL,
          0LL,
          6u,
          v52);
      }
      PopPowerAdapterQueryStatus(a1, 0LL);
      PopReleaseRwLock((struct _KTHREAD *)&PopCB);
      if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
      {
        v15 = "REC Supported";
        v21 = *(_DWORD *)(a1 + 136);
        v32 = 4LL;
        v31 = &v21;
        if ( (*(_DWORD *)(a1 + 140) & 1) == 0 )
          v15 = "-";
        tlgCreate1Sz_char((__int64)v33, v15);
        v16 = *(_DWORD *)(a1 + 144);
        v34 = &v28;
        v11 = byte_14004ECD5;
        v27 = *(_DWORD *)(a1 + 148);
        v36 = &v27;
        v26 = *(_DWORD *)(a1 + 152);
        v38 = &v26;
        v25 = *(_DWORD *)(a1 + 156);
        v40 = &v25;
        v24 = *(_DWORD *)(a1 + 160);
        v42 = &v24;
        v23 = *(_DWORD *)(a1 + 164);
        v44 = &v23;
        v22 = *(_DWORD *)(a1 + 168);
        v46 = &v22;
        v20 = *(_DWORD *)(a1 + 172);
        v12 = &v20;
        v28 = v16;
        goto LABEL_24;
      }
    }
  }
}
