/*
 * XREFs of MiGetCombineDomain @ 0x1404A2F70
 * Callers:
 *     MiSharePagesLockPageTable @ 0x1403072AC (MiSharePagesLockPageTable.c)
 *     MiCapturePfnVm @ 0x1405136D0 (MiCapturePfnVm.c)
 *     MiShareValidPage @ 0x140704A2C (MiShareValidPage.c)
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
