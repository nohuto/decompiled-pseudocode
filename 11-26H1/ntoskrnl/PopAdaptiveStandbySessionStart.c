/*
 * XREFs of PopAdaptiveStandbySessionStart @ 0x1407E4FE4
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407E4A18 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryRegion @ 0x1407E2E60 (PopAdaptiveStandbyCalculateBatteryRegion.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x1407E4E04 (PopAdaptiveStandbyQueryReserveConfiguration.c)
 */

char __fastcall PopAdaptiveStandbySessionStart(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdi
  __int128 v5; // xmm0
  int v6; // eax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rcx
  char v12; // al
  struct _LIST_ENTRY *ActivityIdThread; // r8
  char v14; // al
  struct _LIST_ENTRY *v15; // r8
  _BYTE v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  __int64 *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]

  v4 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  *(_QWORD *)(a1 + 200) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v5 = *(_OWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 208) = MEMORY[0xFFFFF78000000014];
  v6 = *(_DWORD *)(a1 + 152);
  *(_OWORD *)(a1 + 176) = v5;
  *(_DWORD *)(a1 + 192) = v6;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_DWORD *)(a1 + 216) = PopAdaptiveStandbyCalculateBatteryRegion(*(_DWORD *)(a1 + 152));
    v7 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 224) = v7;
    *(_DWORD *)(a1 + 232) = v8;
    if ( *(_BYTE *)a1 )
      LOBYTE(v7) = PopAdaptiveStandbyHandleBatteryUpdate(a1, 0LL);
    if ( (unsigned int)dword_140E08138 > 5 )
    {
      LOBYTE(v7) = tlgKeywordOn((__int64)&dword_140E08138, 0x400000000000LL);
      if ( (_BYTE)v7 )
      {
        v9 = *(_QWORD *)(a1 + 240);
        v10 = *(_DWORD *)(a1 + 248) == 2;
        v28 = (__int64 *)&v26;
        v30 = &v18;
        v32 = &v23;
        v11 = v9 - 1;
        v26 = v4;
        v34 = &v24;
        if ( !v10 )
          v11 = v9;
        v12 = *(_BYTE *)(a1 + 176) & 1;
        v29 = 8LL;
        v17[0] = v12;
        v36 = (int *)v17;
        v19 = *(_DWORD *)(a1 + 180);
        v38 = &v19;
        v20 = *(_DWORD *)(a1 + 184);
        v40 = &v20;
        v21 = *(_DWORD *)(a1 + 188);
        v42 = &v21;
        v22 = *(_DWORD *)(a1 + 192);
        v44 = (__int64 *)&v22;
        v46 = &v25;
        v18 = a2;
        v31 = 4LL;
        v23 = v9;
        v33 = 8LL;
        v24 = v11;
        v35 = 8LL;
        v37 = 1LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        v25 = 0x1000000LL;
        v47 = 8LL;
        ActivityIdThread = IoGetActivityIdThread();
        LOBYTE(v7) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E08138,
                       (unsigned __int8 *)byte_14004F7FB,
                       (const GUID *)ActivityIdThread,
                       0LL,
                       0xCu,
                       v27);
      }
    }
  }
  else
  {
    LOBYTE(v7) = PopAdaptiveStandbyQueryReserveConfiguration(a1);
    if ( (unsigned int)dword_140E08138 > 5 )
    {
      LOBYTE(v7) = tlgKeywordOn((__int64)&dword_140E08138, 0x400000000000LL);
      if ( (_BYTE)v7 )
      {
        v25 = v4;
        v28 = &v25;
        v30 = &v22;
        v24 = *(_QWORD *)(a1 + 240);
        v32 = &v24;
        v14 = *(_BYTE *)(a1 + 176) & 1;
        v29 = 8LL;
        v17[0] = v14;
        v34 = (__int64 *)v17;
        v21 = *(_DWORD *)(a1 + 180);
        v36 = &v21;
        v20 = *(_DWORD *)(a1 + 184);
        v38 = &v20;
        v19 = *(_DWORD *)(a1 + 188);
        v40 = &v19;
        v18 = *(_DWORD *)(a1 + 192);
        v42 = &v18;
        v44 = &v23;
        v22 = a2;
        v31 = 4LL;
        v33 = 8LL;
        v35 = 1LL;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v23 = 0x1000000LL;
        v45 = 8LL;
        v15 = IoGetActivityIdThread();
        LOBYTE(v7) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E08138,
                       (unsigned __int8 *)byte_14004F8E5,
                       (const GUID *)v15,
                       0LL,
                       0xBu,
                       v27);
      }
    }
  }
  return v7;
}
