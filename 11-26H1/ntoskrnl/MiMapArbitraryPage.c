/*
 * XREFs of MiMapArbitraryPage @ 0x1402D4D00
 * Callers:
 *     MiConvertStandbyToProto @ 0x1402E8EE8 (MiConvertStandbyToProto.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiCombineCandidate @ 0x1402D6000 (MiCombineCandidate.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 a1, _QWORD *a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // r12
  __int64 v11; // rbp
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rsi
  int v14; // eax
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 v22; // al

  v5 = a2[8];
  v7 = a2[9];
  v11 = (v5 + 0x220000000000LL) / 48;
  v12 = MiSafeLockPage(v11);
  v13 = v12;
  if ( v12 == 17 )
    return 0LL;
  v14 = MiCombineCandidate(a1, a3, v5);
  if ( a4 )
  {
    if ( v14 != a4 )
      goto LABEL_6;
  }
  else if ( !v14 )
  {
    goto LABEL_6;
  }
  if ( a5 && ((v22 = *(_BYTE *)(v5 + 34) & 7, v22 < 2u) || v22 > 3u) || (*(_DWORD *)(v5 + 32) & 0xC00000) == 0xC00000 )
  {
LABEL_6:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v13 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      __writecr8(v13);
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(v5 + 32) & 0xC00000) != 0 )
  {
    v16 = 1LL;
    if ( (*(_DWORD *)(v5 + 32) & 0xC00000) == 0x800000 )
      v16 = 25LL;
  }
  else
  {
    v16 = 9LL;
  }
  v17 = ((v11 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v16] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = v17;
  }
  else
  {
    if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v20 = v17;
      v17 |= 0x8000000000000000uLL;
      v21 = v20 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v7 != 0xFFFFF6FB7DBEDF68uLL )
        v17 = v21;
      if ( (unsigned int)MiUserPdeOrAbove(v7) )
        v17 |= 4uLL;
    }
    v18 = v17 | 4;
    if ( (unsigned __int64)((__int64)(v7 << 25) >> 16) >= 0x7FFFFFFF0000LL )
      v18 = v17;
  }
  v19 = (BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) & 0x100;
  a2[7] = v7;
  a2[6] = v5;
  *(_QWORD *)v7 = v18 & 0xFAFFFFFFFFFFFEFFuLL ^ v19 | 0xA00000000000000LL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v13 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    __writecr8(v13);
  }
  return 1LL;
}
