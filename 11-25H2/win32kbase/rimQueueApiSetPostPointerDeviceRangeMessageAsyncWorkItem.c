/*
 * XREFs of rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1401154CC
 * Callers:
 *     RIMAddToActiveDevices @ 0x14017F910 (RIMAddToActiveDevices.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E4710 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x140199F14 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E4E20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EFAA0 (RIMAllocateAsyncInputWorkItem.c)
 */

_UNKNOWN **__fastcall rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(
        struct RawInputManagerObject *a1,
        __int64 a2,
        int a3)
{
  struct RIMAsyncWorkItem *v5; // rax
  __int64 v6; // rdx
  _UNKNOWN **result; // rax
  char v8; // r14
  bool v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // [rsp+28h] [rbp-60h]

  v5 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, *(PVOID *)(a2 + 32), 0LL, 0LL, a3, 4);
  if ( v5 )
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, v5);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (v8 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v8 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *((_QWORD *)a1 + 5);
    v11 = *((_QWORD *)a1 + 4);
    v12 = *((_QWORD *)a1 + 9);
    v13 = *(_QWORD *)(a2 + 200);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
    LOBYTE(v15) = v9;
    LOBYTE(v16) = v8;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v16,
                          v15,
                          *(_QWORD *)(UserSessionState + 19336),
                          2,
                          v17,
                          49,
                          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids,
                          v12,
                          v11,
                          v10,
                          4,
                          v13,
                          23);
  }
  return result;
}
