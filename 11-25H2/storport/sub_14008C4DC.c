/*
 * XREFs of sub_14008C4DC @ 0x14008C4DC
 * Callers:
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008C574 @ 0x14008C574 (sub_14008C574.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14008C4DC(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char result; // al

  v2 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)a2 = v2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 12);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 28);
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_DWORD *)(a2 + 4) = 1;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 56);
  }
  else if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 72);
  }
  else if ( !v2 )
  {
    *(_QWORD *)(a2 + 48) = -1LL;
  }
  *(_DWORD *)(a2 + 56) = 1;
  if ( *(_BYTE *)(a1 + 64) && *(_BYTE *)(a1 + 65) )
  {
    if ( *(_BYTE *)(a1 + 66) && *(_BYTE *)(a1 + 67) )
    {
      *(_DWORD *)(a2 + 56) = 3;
    }
    else if ( *(_BYTE *)(a1 + 68) )
    {
      *(_DWORD *)(a2 + 56) = 2;
    }
  }
  result = *(_BYTE *)(a1 + 69);
  *(_BYTE *)(a2 + 60) = result;
  return result;
}
