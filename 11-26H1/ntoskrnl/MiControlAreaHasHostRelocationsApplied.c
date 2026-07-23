/*
 * XREFs of MiControlAreaHasHostRelocationsApplied @ 0x1404CE974
 * Callers:
 *     MiValidateInPagePrepare @ 0x14038DF70 (MiValidateInPagePrepare.c)
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiControlAreaHasHostRelocationsApplied(__int64 a1)
{
  __int64 v1; // rcx

  return (*(_DWORD *)(a1 + 56) & 0x30000000) != 0
      && (v1 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32)) != 0
      && *(_QWORD *)(v1 + 48) != 0LL;
}
