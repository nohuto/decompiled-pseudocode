/*
 * XREFs of MiGetEnclavePageList @ 0x1404DE364
 * Callers:
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MxInsertEnclaveBootPages @ 0x140CFD18C (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 */

__int64 __fastcall MiGetEnclavePageList(__int64 a1, ULONG_PTR a2)
{
  return 56320LL * (unsigned int)MiPageToNode(a2) + *(_QWORD *)(a1 + 16) + 56128LL;
}
