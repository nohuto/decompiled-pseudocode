/*
 * XREFs of ?WaitMaskIncludesUserInput@@YA_NI@Z @ 0x140155F90
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

bool __fastcall WaitMaskIncludesUserInput(__int64 a1)
{
  _QWORD *CurrentThreadWin32Thread; // rax

  if ( (a1 & 7) == 7 )
    return 1;
  if ( (a1 & 6) == 0 )
    return 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
  return *(_QWORD *)(CurrentThreadWin32Thread[58] + 112LL) != 0LL;
}
