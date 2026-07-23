/*
 * XREFs of MiCopyPageTablePageTransitionPtes @ 0x14033D6F0
 * Callers:
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 */

unsigned __int64 __fastcall MiCopyPageTablePageTransitionPtes(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // r15
  __int64 i; // r14
  __int64 v8; // rsi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (__int64 *)a2[1];
  v6 = a2[4];
  for ( i = a2[3]; *(_DWORD *)(a1 + 8); ++v5 )
  {
    result = *v5;
    if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
      result = MiReadPteShadow((unsigned __int64)v5, *v5);
    if ( (result & 1) == 0 && (result & 0xC00) == 0x800 )
    {
      if ( qword_140E2D8C0 && (result & 0x10) == 0 )
        result &= qword_140E2D8C8;
      v8 = 48 * ((result >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) == v4 && v4 == i )
        MiSetPfnContainingFrame(v8, v6);
      --*(_DWORD *)(a1 + 8);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
