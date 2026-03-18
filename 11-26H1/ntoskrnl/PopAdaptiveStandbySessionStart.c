/*
 * XREFs of PopAdaptiveStandbySessionStart @ 0x1407E03B4
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407DF44C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407DFFD0 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x14046F440 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x140610F34 (PopAdaptiveStandbyQueryReserveConfiguration.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryRegion @ 0x1407DE7E0 (PopAdaptiveStandbyCalculateBatteryRegion.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407DF44C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 */

NTSTATUS __fastcall PopAdaptiveStandbySessionStart(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdi
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // ecx
  char v8; // al
  struct _LIST_ENTRY *ActivityIdThread; // rax
  NTSTATUS result; // eax
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+44h] [rbp-C4h] BYREF
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 *v21; // [rsp+88h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-78h]
  int *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  __int64 *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  int *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  int *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  int *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  int *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  __int64 *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]

  v4 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v5 = *(_OWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 192) = MEMORY[0xFFFFF78000000014];
  v6 = *(_DWORD *)(a1 + 152);
  *(_OWORD *)(a1 + 156) = v5;
  *(_DWORD *)(a1 + 172) = v6;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_DWORD *)(a1 + 200) = PopAdaptiveStandbyCalculateBatteryRegion(*(_DWORD *)(a1 + 152));
    *(_QWORD *)(a1 + 208) = *(_QWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 216) = v7;
  }
  if ( (unsigned int)dword_140E08090 > 5 && tlgKeywordOn((__int64)&dword_140E08090, 0x400000000000LL) )
  {
    v17 = v4;
    v21 = &v17;
    v23 = &v12;
    v18 = *(_QWORD *)(a1 + 224);
    v25 = &v18;
    v8 = *(_BYTE *)(a1 + 156) & 1;
    v22 = 8LL;
    LOBYTE(v11) = v8;
    v27 = &v11;
    v13 = *(_DWORD *)(a1 + 160);
    v29 = &v13;
    v14 = *(_DWORD *)(a1 + 164);
    v31 = &v14;
    v15 = *(_DWORD *)(a1 + 168);
    v33 = &v15;
    v16 = *(_DWORD *)(a1 + 172);
    v35 = &v16;
    v37 = &v19;
    v12 = a2;
    v24 = 4LL;
    v26 = 8LL;
    v28 = 1LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v19 = 0x1000000LL;
    v38 = 8LL;
    ActivityIdThread = IoGetActivityIdThread();
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F9D9,
      (const GUID *)ActivityIdThread,
      0LL,
      0xBu,
      &v20);
  }
  result = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( !result )
    return PopAdaptiveStandbyQueryReserveConfiguration(a1);
  if ( *(_BYTE *)a1 )
    return PopAdaptiveStandbyHandleBatteryUpdate(a1, 0LL);
  return result;
}
