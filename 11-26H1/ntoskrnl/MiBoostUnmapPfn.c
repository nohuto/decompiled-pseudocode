/*
 * XREFs of MiBoostUnmapPfn @ 0x140491838
 * Callers:
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 */

_BOOL8 __fastcall MiBoostUnmapPfn(unsigned __int64 a1)
{
  int v1; // r8d
  _BOOL8 result; // rax
  __int64 v3; // r9

  result = *(__int64 *)(a1 + 40) < 0
        && (*(_BYTE *)(a1 + 34) & 0x10) == 0
        && (v1 = *(_DWORD *)(a1 + 32), (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0)
        && ((*(_DWORD *)(a1 + 32) & 0x8000000) == 0
         || a1 >= 0xFFFFDE0000000000uLL
         && a1 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
         && !MiIsDecayPfn((__int64)(a1 + 0x220000000000LL) / 48)
         && ((v1 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v3) != 9))
        && (v1 & 0x7000000u) < 0x5000000;
  return result;
}
