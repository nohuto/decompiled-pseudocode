/*
 * XREFs of IopCloseIoCompletion @ 0x140ABE010
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x1403DF3CC (IopDeleteIoCompletionInternal.c)
 */

void __fastcall IopCloseIoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rax

  v4 = a2;
  if ( a4 == 1 )
  {
    LOBYTE(a2) = 1;
    IopDeleteIoCompletionInternal(v4, a2);
  }
}
