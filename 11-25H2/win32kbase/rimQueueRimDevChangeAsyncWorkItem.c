/*
 * XREFs of rimQueueRimDevChangeAsyncWorkItem @ 0x140132014
 * Callers:
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1401D5330 (RIMFreeSpecificDev.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x140199F14 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E4E20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EFAA0 (RIMAllocateAsyncInputWorkItem.c)
 */

_UNKNOWN **__fastcall rimQueueRimDevChangeAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2, int a3)
{
  char v3; // r12
  struct RIMAsyncWorkItem *v6; // rax
  __int64 v7; // rdx
  _UNKNOWN **result; // rax
  char v9; // r14
  bool v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // [rsp+28h] [rbp-60h]

  v3 = a3;
  v6 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, *(PVOID *)(a2 + 32), 0LL, 0LL, a3, 2);
  if ( v6 )
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, v6);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (v9 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v9 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = *((_QWORD *)a1 + 5);
    v12 = *((_QWORD *)a1 + 4);
    v13 = *((_QWORD *)a1 + 9);
    v14 = *(_QWORD *)(a2 + 200);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v16) = v10;
    LOBYTE(v17) = v9;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v17,
                          v16,
                          *(_QWORD *)(UserSessionState + 19336),
                          2,
                          v18,
                          17,
                          (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
                          v13,
                          v12,
                          v11,
                          v3,
                          v14,
                          23);
  }
  return result;
}
