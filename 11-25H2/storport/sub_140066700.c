/*
 * XREFs of sub_140066700 @ 0x140066700
 * Callers:
 *     <none>
 * Callees:
 *     sub_140059080 @ 0x140059080 (sub_140059080.c)
 */

void __fastcall sub_140066700(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rcx

  v4 = DeferredContext[8];
  if ( v4 && *(_DWORD *)v4 == 1094997074 && *(_DWORD *)(v4 + 88) != 5 )
    sub_140059080((KSPIN_LOCK *)v4);
}
