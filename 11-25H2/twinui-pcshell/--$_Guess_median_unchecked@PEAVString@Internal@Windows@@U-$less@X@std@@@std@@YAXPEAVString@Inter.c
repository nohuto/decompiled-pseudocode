/*
 * XREFs of ??$_Guess_median_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x18010EC00
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x180110558 (--$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YA-AU-.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x180112234 (--$_Med3_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 */

__int64 __fastcall std::_Guess_median_unchecked<Windows::Internal::String *,std::less<void>>(
        Windows::Internal::String *a1,
        Windows::Internal::String *a2,
        Windows::Internal::String *a3)
{
  Windows::Internal::String *v3; // r14
  Windows::Internal::String *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  Windows::Internal::String *v9; // rbp

  v3 = a3;
  v4 = a2;
  v5 = (a3 - a1) >> 3;
  if ( v5 > 40 )
  {
    v6 = (v5 + 1) >> 3;
    v7 = 16 * v6;
    v8 = 8 * v6;
    v9 = (Windows::Internal::String *)((char *)a1 + 8 * v6);
    std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(
      a1,
      v9,
      (Windows::Internal::String *)((char *)a1 + 16 * v6));
    std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(
      (Windows::Internal::String *)((char *)v4 - v8),
      v4,
      (Windows::Internal::String *)((char *)v4 + v8));
    std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(
      (Windows::Internal::String *)((char *)v3 - v7),
      (Windows::Internal::String *)((char *)v3 - v8),
      v3);
    a3 = (Windows::Internal::String *)((char *)v3 - v8);
    a2 = v4;
    a1 = v9;
  }
  return std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(a1, a2, a3);
}
