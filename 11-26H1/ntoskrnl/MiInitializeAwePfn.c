/*
 * XREFs of MiInitializeAwePfn @ 0x14050A044
 * Callers:
 *     MiInitializeMdlPfn @ 0x14033DCE0 (MiInitializeMdlPfn.c)
 *     MiFillUserPhysicalMdl @ 0x1407061B4 (MiFillUserPhysicalMdl.c)
 * Callees:
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 */

signed __int64 __fastcall MiInitializeAwePfn(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x60000;
  MiSetPfnIdentity(a1, 1u);
  return MiSetPfnContainingFrame(a1, 0x3FFFFFFFFELL);
}
