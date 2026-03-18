/*
 * XREFs of ?Reset@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x140208464
 * Callers:
 *     ?InvalidateInputQueues@CInputQueueProp@@IEAAXXZ @ 0x1402083DC (-InvalidateInputQueues@CInputQueueProp@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDynamicArray<IInputQueue *,2003858261>::Reset(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
