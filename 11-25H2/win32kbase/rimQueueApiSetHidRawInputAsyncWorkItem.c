/*
 * XREFs of rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1400D7374
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D6900 (RIMProcessAnyPointerDeviceInput.c)
 *     rimProcessHidInput @ 0x1401F11FC (rimProcessHidInput.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x140199F14 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E4E20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EFAA0 (RIMAllocateAsyncInputWorkItem.c)
 */

_UNKNOWN **__fastcall rimQueueApiSetHidRawInputAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2)
{
  struct RIMAsyncWorkItem *v4; // rax
  __int64 v5; // rdx
  _UNKNOWN **result; // rax
  char v7; // r14
  bool v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // [rsp+28h] [rbp-60h]

  v4 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, *(PVOID *)(a2 + 32), 0LL, 0LL, 0, 3);
  if ( v4 )
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, v4);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (v7 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v7 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *((_QWORD *)a1 + 5);
    v10 = *((_QWORD *)a1 + 4);
    v11 = *((_QWORD *)a1 + 9);
    v12 = *(_QWORD *)(a2 + 200);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
    LOBYTE(v14) = v8;
    LOBYTE(v15) = v7;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v15,
                          v14,
                          *(_QWORD *)(UserSessionState + 19336),
                          2,
                          v16,
                          72,
                          (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
                          v11,
                          v10,
                          v9,
                          3,
                          v12,
                          23);
  }
  return result;
}
