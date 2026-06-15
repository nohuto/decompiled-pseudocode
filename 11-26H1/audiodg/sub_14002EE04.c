/*
 * XREFs of sub_14002EE04 @ 0x14002EE04
 * Callers:
 *     sub_1400A7B44 @ 0x1400A7B44 (sub_1400A7B44.c)
 *     sub_1400A7BE8 @ 0x1400A7BE8 (sub_1400A7BE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14002EE04(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rax

  v5 = 0;
  v6 = a2;
  if ( a4 )
  {
    if ( a3 >= *(_DWORD *)(a1 + 8) || a2 >= 2 )
    {
      return (unsigned int)-2147024809;
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 16);
      if ( v7 )
        v8 = *(_QWORD *)(a1 + 24 * (v6 + 2)) + a3 * v7;
      else
        v8 = 0LL;
      *a4 = v8;
      if ( a5 )
        *a5 = *(_DWORD *)(a1 + 16);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v5;
}
