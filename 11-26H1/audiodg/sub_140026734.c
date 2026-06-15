/*
 * XREFs of sub_140026734 @ 0x140026734
 * Callers:
 *     sub_1400A7C90 @ 0x1400A7C90 (sub_1400A7C90.c)
 *     sub_1400A7D40 @ 0x1400A7D40 (sub_1400A7D40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140026734(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a4 )
  {
    if ( a3 >= *(_DWORD *)(a1 + 8) || a2 >= 2 )
    {
      return (unsigned int)-2147024809;
    }
    else
    {
      *a4 = *(_QWORD *)(a1 + 24LL * a2 + 40) + *(_DWORD *)(a1 + 12) * a3;
      if ( a5 )
        *a5 = *(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v5;
}
