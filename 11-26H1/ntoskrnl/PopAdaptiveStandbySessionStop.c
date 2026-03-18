/*
 * XREFs of PopAdaptiveStandbySessionStop @ 0x1407E05F8
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407DF44C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407DFFD0 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x14046F440 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PopAdaptiveStandbySessionStop(__int64 a1, int a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  struct _LIST_ENTRY *ActivityIdThread; // rax
  int v9; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-41h] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 *v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  int *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  __int64 *v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]
  __int64 *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]

  v4 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_OWORD *)(a1 + 156) = 0LL;
  v5 = v4 / 0x989680;
  *(_DWORD *)(a1 + 172) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 532) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  IsEnabledDeviceUsageNoInline = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    *(_DWORD *)(a1 + 200) = 2;
    *(_DWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 208) = 0LL;
    if ( *(_BYTE *)a1 )
    {
      *(_BYTE *)(a1 + 308) = 0;
      LOBYTE(IsEnabledDeviceUsageNoInline) = KeCancelTimer2(a1 + 320);
    }
  }
  if ( (unsigned int)dword_140E08090 > 5 )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = tlgKeywordOn((__int64)&dword_140E08090, 0x400000000000LL);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      v10 = v5;
      v14 = &v10;
      v16 = &v9;
      v11 = *(_QWORD *)(a1 + 224);
      v18 = &v11;
      v20 = &v12;
      v15 = 8LL;
      v9 = a2;
      v17 = 4LL;
      v19 = 8LL;
      v12 = 0x1000000LL;
      v21 = 8LL;
      ActivityIdThread = IoGetActivityIdThread();
      LOBYTE(IsEnabledDeviceUsageNoInline) = tlgWriteTransfer_EtwWriteTransfer(
                                               (__int64)&dword_140E08090,
                                               (unsigned __int8 *)&byte_14004F517,
                                               (const GUID *)ActivityIdThread,
                                               0LL,
                                               6u,
                                               &v13);
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
