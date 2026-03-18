/*
 * XREFs of bIsCompatible @ 0x14012E300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsCompatible(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  char v5; // r11

  v4 = 0;
  v5 = 0;
  if ( (*(_WORD *)(a3 + 100) || *(_QWORD *)(a3 + 24)) && *(_QWORD *)(a3 + 48) != a4 )
  {
    v5 = 1;
  }
  else if ( a2 )
  {
    *a1 = a2;
  }
  else if ( *(_DWORD *)(a3 + 96) == *(_DWORD *)(a4 + 2092) )
  {
    if ( (*(_DWORD *)(a4 + 2156) & 0x100) != 0 )
      *a1 = 0LL;
    else
      *a1 = *(_QWORD *)(a4 + 1792);
  }
  else
  {
    v5 = 2;
  }
  LOBYTE(v4) = v5 == 0;
  return v4;
}
