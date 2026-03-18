/*
 * XREFs of DpiQueryFeatureSupportLegacy @ 0x14024ECE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiQueryFeatureSupportLegacy(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v4; // r11d
  int v5; // eax
  __int16 v6; // dx
  bool v7; // zf
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  __int64 result; // rax

  v2 = 0;
  v4 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      if ( (*(_DWORD *)(a1 + 5848) & 0x20000) == 0 )
        goto LABEL_15;
      goto LABEL_14;
    case 1:
      v10 = *(_DWORD *)(a1 + 5848);
      v9 = (v10 & 0x100000) != 0;
      v7 = (v10 & 0x100000) == 0;
      goto LABEL_11;
    case 2:
      v8 = *(_DWORD *)(a1 + 5848);
      v9 = (v8 & 0x1000000) != 0;
      v7 = (v8 & 0x1000000) == 0;
LABEL_11:
      v6 = v9;
      goto LABEL_12;
    case 3:
      goto LABEL_14;
  }
  if ( *(_DWORD *)a2 != 4 )
  {
    if ( *(_DWORD *)a2 != 5 )
    {
      v4 = -1073741811;
LABEL_15:
      v6 = v2;
      goto LABEL_16;
    }
LABEL_14:
    v2 = 1;
    goto LABEL_15;
  }
  v5 = *(_DWORD *)(a1 + 5848);
  v6 = (v5 & 0x8000000) != 0;
  v7 = (v5 & 0x8000000) == 0;
LABEL_12:
  LOBYTE(v2) = !v7;
LABEL_16:
  *(_WORD *)(a2 + 8) = v6;
  *(_WORD *)(a2 + 10) = v6;
  result = v4;
  *(_DWORD *)(a2 + 12) = (2 * v2) & 0xFFFFFFFB | v2 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 12) & 0xFFFFFFF8;
  return result;
}
