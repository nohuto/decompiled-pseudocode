/*
 * XREFs of rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400F977C
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimProcessMissingPointerDeviceContacts @ 0x140071E80 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x140074E60 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1400F9A08 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1400F9BCC (RIMStartPointerDeviceFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1400FA16C (rimProcessPointerDeviceButtonContact.c)
 */

__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        struct RawInputManagerObject *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 result; // rax
  int v15; // edx
  int v16; // r8d
  bool v17; // bl
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // bl
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  _DWORD v27[4]; // [rsp+40h] [rbp-28h] BYREF

  v27[0] = 0;
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      34,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  result = RIMStartPointerDeviceFrame(a1, a2, a5);
  if ( (_DWORD)result )
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, a3, a4, v27);
    rimProcessPointerDeviceButtonContact(a1, a2, a3, a4, v27[0]);
    rimProcessMissingPointerDeviceContacts((int)a1, a2, 0);
    RIMAbArbitratePointerDeviceFrame(a1, a2);
    result = RIMCompletePointerDeviceFrame(a1, a2, 1u);
  }
  else
  {
    v22 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      result = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v22 = 1;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      result = WPP_RECORDER_AND_TRACE_SF_(
                 *((_QWORD *)WPP_GLOBAL_Control + 3),
                 v26,
                 v25,
                 *(_QWORD *)(v24 + 19368),
                 4,
                 1,
                 35,
                 (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
  }
  v17 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v17 = 1;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v21,
             v20,
             *(_QWORD *)(v19 + 19368),
             4,
             1,
             36,
             (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  return result;
}
