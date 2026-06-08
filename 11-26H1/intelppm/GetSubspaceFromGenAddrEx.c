/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x14000AEB0
 * Callers:
 *     CpcInitRegisterAddresses @ 0x14002DBE4 (CpcInitRegisterAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
