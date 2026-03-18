/*
 * XREFs of EtwTraceBeginCallback @ 0x1400FCD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceBeginCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = PsGetCurrentThreadWin32Thread(a1, a2);
  if ( result )
    ++*(_BYTE *)(*(_QWORD *)result + 1456LL);
  else
    ++MEMORY[0x5B0];
  return result;
}
