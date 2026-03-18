/*
 * XREFs of rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400303D4
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimProcessPointerDeviceButtonContact @ 0x14002FD24 (rimProcessPointerDeviceButtonContact.c)
 *     RIMStartPointerDeviceFrame @ 0x140030008 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x14003034C (RIMStoreRawDataInPointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x14003065C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1400320D4 (rimProcessMissingPointerDeviceContacts.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        struct RawInputManagerObject *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 result; // rax
  __int64 v15; // rdx
  bool v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  bool v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26[4]; // [rsp+40h] [rbp-28h] BYREF

  v26[0] = 0;
  v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      34,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
  }
  result = RIMStartPointerDeviceFrame((__int64)a1, a2, a5);
  if ( (_DWORD)result )
  {
    RIMStoreRawDataInPointerDeviceFrame((__int64)a1, a2, a3, a4, v26);
    rimProcessPointerDeviceButtonContact(a1, a2, a3, a4, v26[0]);
    rimProcessMissingPointerDeviceContacts(a1, a2, 0LL);
    RIMAbArbitratePointerDeviceFrame(a1, a2);
    result = RIMCompletePointerDeviceFrame(a1);
  }
  else
  {
    v21 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      result = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v21 = 1;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      result = WPP_RECORDER_AND_TRACE_SF_(
                 *((_QWORD *)WPP_GLOBAL_Control + 3),
                 v25,
                 v24,
                 *(_QWORD *)(v23 + 19336),
                 4,
                 1,
                 35,
                 (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
  }
  v16 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v16 = 1;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v16;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v20,
             v19,
             *(_QWORD *)(v18 + 19336),
             4,
             1,
             36,
             (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
  }
  return result;
}
