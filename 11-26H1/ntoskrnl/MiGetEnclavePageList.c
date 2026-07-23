/*
 * XREFs of MiGetEnclavePageList @ 0x1404D7A44
 * Callers:
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MxInsertEnclaveBootPages @ 0x140D0350C (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 */

__int64 __fastcall MiGetEnclavePageList(__int64 a1, ULONG_PTR a2)
{
  return 56320LL * (unsigned int)MiPageToNode(a2) + *(_QWORD *)(a1 + 16) + 56128LL;
}
