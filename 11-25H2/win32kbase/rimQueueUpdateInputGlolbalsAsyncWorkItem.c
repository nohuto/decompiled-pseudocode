/*
 * XREFs of rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140118F68
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x140199F14 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E4E20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EFAA0 (RIMAllocateAsyncInputWorkItem.c)
 */

_UNKNOWN **__fastcall rimQueueUpdateInputGlolbalsAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2)
{
  struct RIMAsyncWorkItem *v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
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

  v4 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, *(PVOID *)(a2 + 32), 0LL, 0LL, 0, 5);
  if ( v4 )
  {
    v6 = *((_DWORD *)a1 + 277) + 1;
    *((_DWORD *)a1 + 277) = v6;
    if ( v6 > *((_DWORD *)a1 + 278) )
      *((_DWORD *)a1 + 278) = v6;
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, v4);
  }
  else
  {
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
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v15) = v9;
      LOBYTE(v16) = v8;
      return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v16,
                            v15,
                            *(_QWORD *)(UserSessionState + 19336),
                            2,
                            v17,
                            60,
                            (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
                            v12,
                            v11,
                            v10,
                            5,
                            v13,
                            23);
    }
  }
  return result;
}
