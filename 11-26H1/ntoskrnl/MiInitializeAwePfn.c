/*
 * XREFs of MiInitializeAwePfn @ 0x1405105D4
 * Callers:
 *     MiInitializeMdlPfn @ 0x14033BC60 (MiInitializeMdlPfn.c)
 *     MiFillUserPhysicalMdl @ 0x1407014E4 (MiFillUserPhysicalMdl.c)
 * Callees:
 *     MiSetPfnContainingFrame @ 0x14033BC10 (MiSetPfnContainingFrame.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 */

signed __int64 __fastcall MiInitializeAwePfn(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x60000;
  MiSetPfnIdentity(a1, 1u);
  return MiSetPfnContainingFrame(a1, 0x3FFFFFFFFELL);
}
