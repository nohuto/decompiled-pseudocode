/*
 * XREFs of ?HandleProcessSpinning@@YAHXZ @ 0x140159D80
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall HandleProcessSpinning(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v2; // r8
  __int64 v3; // rax
  _BOOL8 v4; // rdx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v2 = *CurrentThreadWin32Thread;
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(v2 + 512);
  v4 = *(_QWORD *)(v3 + 8) >= 0x64uLL;
  if ( *(_QWORD *)(v3 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(*(_QWORD *)(v2 + 512) + 8LL) = 0LL;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 520), 0, 0) & 0x400) == 0 )
      *(_DWORD *)(*(_QWORD *)(v2 + 512) + 28LL) = _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)(v2 + 520),
                                                    0,
                                                    0) | 0x400;
  }
  if ( v4 && (_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 520), 0, 0) & 0x400) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v2 + 520), 0x400u);
    ForegroundBoost::UpdateProcessPriorityForSpinning((ForegroundBoost *)v2, (struct tagTHREADINFO *)v4);
  }
  return 1LL;
}
