/*
 * XREFs of EtwTraceAcquireSharedUserCrit @ 0x1400DB020
 * Callers:
 *     _lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_ @ 0x1401CE590 (_lambda_5b4fd5b3c990349c66a8ee94c55a5de4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwTraceAcquireSharedUserCrit(int a1, __int64 a2, int a3)
{
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx

  if ( dword_1402A9F58
    && (v3 = 0, (qword_1402A9F68 & 0x400000000000LL) != 0)
    && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70
    || (v3 = W32kEtwEnabledKeyword, a3 = 0x10000000, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x8000002010000000uLL) != 0
    && (qword_1402A9DC8 & 0x8000002010000000uLL) == qword_1402A9DC8
    || (a3 = 0x10000000, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x200000010000000LL) != 0
    && (qword_1402A9DC8 & 0x200000010000000LL) == qword_1402A9DC8 )
  {
    if ( W32GetUserSessionState(a1, v3, a3) != -36488 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
  }
}
