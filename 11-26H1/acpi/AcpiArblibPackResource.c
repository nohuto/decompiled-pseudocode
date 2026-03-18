/*
 * XREFs of AcpiArblibPackResource @ 0x1400AD690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiArblibPackResource(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al

  *(_BYTE *)a3 = *(_BYTE *)(a1 + 1);
  *(_WORD *)(a3 + 2) = *(_WORD *)(a1 + 4);
  *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 2);
  v3 = *(_BYTE *)(a1 + 1);
  if ( v3 == 3 || v3 == 7 || v3 == 1 )
  {
    *(_QWORD *)(a3 + 4) = a2;
    *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 8);
  }
  else if ( v3 == 6 )
  {
    *(_DWORD *)(a3 + 4) = a2;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 8);
  }
  return 0LL;
}
