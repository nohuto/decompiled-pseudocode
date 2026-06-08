/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x140007538
 * Callers:
 *     CpcInitRegisterAddresses @ 0x140026D60 (CpcInitRegisterAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
