/*
 * XREFs of PopAdaptiveStandbySessionStop @ 0x1407E5384
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407E4A18 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopAdaptiveStandbySessionStop(__int64 a1, int a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rcx
  struct _LIST_ENTRY *ActivityIdThread; // r8
  struct _LIST_ENTRY *v11; // r8
  int v13; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+38h] [rbp-61h] BYREF
  __int64 v15; // [rsp+40h] [rbp-59h] BYREF
  __int64 v16; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  int *v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  __int64 *v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]
  __int64 *v25; // [rsp+B0h] [rbp+17h]
  __int64 v26; // [rsp+B8h] [rbp+1Fh]
  __int64 *v27; // [rsp+C0h] [rbp+27h]
  __int64 v28; // [rsp+C8h] [rbp+2Fh]

  v4 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_OWORD *)(a1 + 176) = 0LL;
  v5 = v4 / 0x989680;
  *(_DWORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 548) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  IsEnabledDeviceUsageNoInline = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    *(_DWORD *)(a1 + 216) = 3;
    *(_DWORD *)(a1 + 232) = 0;
    *(_QWORD *)(a1 + 224) = 0LL;
    if ( *(_BYTE *)a1 )
    {
      *(_BYTE *)(a1 + 324) = 0;
      LOBYTE(IsEnabledDeviceUsageNoInline) = KeCancelTimer2(a1 + 336);
    }
    if ( (unsigned int)dword_140E08138 > 5 )
    {
      LOBYTE(IsEnabledDeviceUsageNoInline) = tlgKeywordOn((__int64)&dword_140E08138, 0x400000000000LL);
      if ( (_BYTE)IsEnabledDeviceUsageNoInline )
      {
        v7 = *(_QWORD *)(a1 + 240);
        v8 = *(_DWORD *)(a1 + 248) == 2;
        v19 = (__int64 *)&v17;
        v21 = &v13;
        v23 = &v14;
        v9 = v7 - 1;
        v17 = v5;
        v25 = &v15;
        if ( !v8 )
          v9 = v7;
        v20 = 8LL;
        v27 = &v16;
        v13 = a2;
        v22 = 4LL;
        v14 = v7;
        v24 = 8LL;
        v15 = v9;
        v26 = 8LL;
        v16 = 0x1000000LL;
        v28 = 8LL;
        ActivityIdThread = IoGetActivityIdThread();
        LOBYTE(IsEnabledDeviceUsageNoInline) = tlgWriteTransfer_EtwWriteTransfer(
                                                 (__int64)&dword_140E08138,
                                                 (unsigned __int8 *)byte_14004F9C8,
                                                 (const GUID *)ActivityIdThread,
                                                 0LL,
                                                 7u,
                                                 v18);
      }
    }
  }
  else if ( (unsigned int)dword_140E08138 > 5 )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = tlgKeywordOn((__int64)&dword_140E08138, 0x400000000000LL);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      v16 = v5;
      v19 = &v16;
      v21 = &v13;
      v15 = *(_QWORD *)(a1 + 240);
      v23 = &v15;
      v25 = &v14;
      v20 = 8LL;
      v13 = a2;
      v22 = 4LL;
      v24 = 8LL;
      v14 = 0x1000000LL;
      v26 = 8LL;
      v11 = IoGetActivityIdThread();
      LOBYTE(IsEnabledDeviceUsageNoInline) = tlgWriteTransfer_EtwWriteTransfer(
                                               (__int64)&dword_140E08138,
                                               (unsigned __int8 *)byte_14004FA35,
                                               (const GUID *)v11,
                                               0LL,
                                               6u,
                                               v18);
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
