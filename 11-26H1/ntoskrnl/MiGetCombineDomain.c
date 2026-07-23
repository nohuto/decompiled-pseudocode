/*
 * XREFs of MiGetCombineDomain @ 0x14049C990
 * Callers:
 *     MiSharePagesLockPageTable @ 0x1402E932C (MiSharePagesLockPageTable.c)
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCombineDomain(int a1, __int64 a2)
{
  if ( a1 == 1 )
    return *(_QWORD *)(a2 + 864);
  else
    return 0LL;
}
