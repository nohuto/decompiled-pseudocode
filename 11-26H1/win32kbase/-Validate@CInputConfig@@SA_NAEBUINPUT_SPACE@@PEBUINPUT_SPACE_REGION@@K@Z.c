/*
 * XREFs of ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1402120B0
 * Callers:
 *     NtConfigureInputSpace @ 0x1401E04B0 (NtConfigureInputSpace.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputConfig::Validate(const struct INPUT_SPACE *a1, const struct INPUT_SPACE_REGION *a2, int a3)
{
  unsigned int i; // r9d
  __int64 v5; // r8
  unsigned int v6; // r11d
  int v7; // ecx
  int v8; // r10d
  unsigned __int16 v10; // ax
  int v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // edi
  int v15; // r10d
  int v16; // r10d
  int v17; // ecx
  int v18; // r11d
  int v19; // r8d

  if ( !*(_DWORD *)a1 && *((_DWORD *)a1 + 1) == -2 || *((_DWORD *)a1 + 2) )
    return 0;
  for ( i = 0; i != a3; ++i )
  {
    v5 = 200LL * i;
    v6 = *(_DWORD *)((char *)a2 + v5 + 16);
    if ( ((v6 >> 1) & 1) == ((v6 & 4) != 0) )
      return 0;
    v7 = *(_DWORD *)((char *)a2 + v5 + 8) - *(_DWORD *)((char *)a2 + v5);
    if ( (*(_DWORD *)((_BYTE *)a2 + v5 + 16) & 4) != 0 )
    {
      if ( v7 < 0 )
        return 0;
      v8 = *(_DWORD *)((char *)a2 + v5 + 12) - *(_DWORD *)((char *)a2 + v5 + 4);
      if ( v8 < 0 || !v7 && !v8 )
        return 0;
    }
    else if ( v7 <= 0 || *(_DWORD *)((char *)a2 + v5 + 12) - *(_DWORD *)((char *)a2 + v5 + 4) <= 0 )
    {
      return 0;
    }
    v10 = *(_WORD *)((char *)a2 + v5 + 20);
    if ( v10 && v10 < 0x60u )
      return 0;
    if ( (v6 & 2) != 0 )
    {
      v11 = *(_DWORD *)((char *)a2 + v5 + 164);
      if ( v11 != 1 && (unsigned int)(v11 - 2) > 2 )
        return 0;
      v12 = *(_DWORD *)((char *)a2 + v5 + 176);
      v13 = *(_DWORD *)((char *)a2 + v5 + 168);
      if ( v12 - v13 <= 0 )
        return 0;
      v14 = *(_DWORD *)((char *)a2 + v5 + 180);
      v15 = *(_DWORD *)((char *)a2 + v5 + 172);
      if ( v14 - v15 <= 0 )
        return 0;
      if ( v13 )
        return 0;
      if ( v15 )
        return 0;
      v16 = *(_DWORD *)((char *)a2 + v5 + 192);
      v17 = *(_DWORD *)((char *)a2 + v5 + 184);
      if ( v16 - v17 <= 0 )
        return 0;
      v18 = *(_DWORD *)((char *)a2 + v5 + 188);
      v19 = *(_DWORD *)((char *)a2 + v5 + 196);
      if ( v19 - v18 <= 0 || v17 < 0 || v12 < v16 || v18 < 0 || v14 < v19 )
        return 0;
    }
  }
  return 1;
}
