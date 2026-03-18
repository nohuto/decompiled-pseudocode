/*
 * XREFs of MiControlAreaHasHostRelocationsApplied @ 0x1404D5104
 * Callers:
 *     MiValidateInPagePrepare @ 0x14038C1C0 (MiValidateInPagePrepare.c)
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
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
