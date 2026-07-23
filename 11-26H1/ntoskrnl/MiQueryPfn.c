/*
 * XREFs of MiQueryPfn @ 0x140462CE0
 * Callers:
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 */

char __fastcall MiQueryPfn(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  unsigned __int64 v3; // r8
  unsigned int v4; // r9d
  unsigned int v5; // r9d
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char result; // al

  v2 = a2;
  v3 = 48 * a1 - 0x220000000000LL;
  if ( (*(_DWORD *)(v3 + 32) & 0x40000000) != 0
    || (*(_DWORD *)(v3 + 32) & 0x70000) == 0x50000
    && (*(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
  {
    *(_QWORD *)(a2 + 8) |= 0x80000000uLL;
  }
  v4 = *(_DWORD *)(v3 + 32);
  if ( (*(_QWORD *)(v3 + 40) & 0x20000000000000LL) != 0
    || (*(_DWORD *)(v3 + 32) & 0x8000000) != 0
    && (v3 < 0xFFFFDE0000000000uLL
     || v3 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn(48 * a1 / 48)
     || (v4 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v3) == 9) )
  {
    v5 = 5;
  }
  else
  {
    v5 = HIBYTE(v4);
  }
  v6 = 0LL;
  v7 = ((unsigned __int64)v5 << 24) ^ (*(_QWORD *)(v2 + 8) ^ ((unsigned __int64)v5 << 24)) & 0xFFFFFFFFF8FFFFFFuLL;
  *(_QWORD *)(v2 + 8) = v7;
  result = *(_BYTE *)(v3 + 34) & 7;
  if ( result == 3 )
    v6 = 0x8000000LL;
  *(_QWORD *)(v2 + 8) = v7 & 0xFFFFFFFFF77FFFFFuLL | v6 & 0xFFFFFFFFFF7FFFFFuLL | 0x400000;
  return result;
}
