/*
 * XREFs of PopFxStaticWorkPoolThread @ 0x140608550
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     PopFxProcessWorkPool @ 0x140397FE8 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxStaticWorkPoolThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16LL, a3);
  v4 = 0LL;
  do
  {
    if ( !_InterlockedCompareExchange64(
            (volatile signed __int64 *)(a1 + 8 * v4 + 264),
            (signed __int64)KeGetCurrentThread(),
            0LL) )
      break;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( !(_DWORD)v4 );
  return PopFxProcessWorkPool(a1, v4);
}
