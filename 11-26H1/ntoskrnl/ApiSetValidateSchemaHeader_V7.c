/*
 * XREFs of ApiSetValidateSchemaHeader_V7 @ 0x1406DE634
 * Callers:
 *     ApiSetValidateSchemaFormat_V7 @ 0x1406DE5E8 (ApiSetValidateSchemaFormat_V7.c)
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetValidateSchemaHeader_V7(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // r10d
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // r11d
  unsigned int v10; // r14d
  unsigned int v11; // edx
  unsigned int v12; // r11d
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax

  v2 = 0;
  if ( !a2 )
    return (unsigned int)-1073741596;
  v4 = *(_DWORD *)(a1 + 4);
  if ( !v4 )
    return (unsigned int)-1073741596;
  if ( v4 > a2 )
    return (unsigned int)-1073741596;
  if ( a2 < 0x74 )
    return (unsigned int)-1073741596;
  if ( v4 < 0x74 )
    return (unsigned int)-1073741596;
  v5 = *(_DWORD *)(a1 + 36);
  v6 = v5 + *(_DWORD *)(a1 + 40);
  if ( v6 >= v5 )
  {
    if ( v6 > v4 )
      return (unsigned int)-1073741596;
    v7 = *(unsigned __int16 *)(a1 + 114);
    if ( !(_WORD)v7 )
      return (unsigned int)-1073741596;
    v8 = *(_DWORD *)(a1 + 108);
    if ( v7 * *(unsigned __int16 *)(a1 + 112) != v8 )
      return (unsigned int)-1073741596;
    v9 = *(_DWORD *)(a1 + 24);
    if ( v9 != *(unsigned __int16 *)(a1 + 20) + *(unsigned __int16 *)(a1 + 22) )
      return (unsigned int)-1073741596;
    if ( v5 != v9 + *(_DWORD *)(a1 + 28) )
      return (unsigned int)-1073741596;
    v10 = *(_DWORD *)(a1 + 44);
    if ( v5 > v10 )
      return (unsigned int)-1073741596;
    v11 = *(_DWORD *)(a1 + 56);
    if ( v10 > v11 )
      return (unsigned int)-1073741596;
    v12 = *(_DWORD *)(a1 + 68);
    if ( v11 > v12 )
      return (unsigned int)-1073741596;
    v13 = *(_DWORD *)(a1 + 80);
    if ( v12 > v13 )
      return (unsigned int)-1073741596;
    v14 = *(_DWORD *)(a1 + 92);
    if ( v13 > v14 )
      return (unsigned int)-1073741596;
    v15 = *(_DWORD *)(a1 + 104);
    if ( v14 > v15 )
      return (unsigned int)-1073741596;
    v16 = v10 + 20 * *(unsigned __int16 *)(a1 + 48);
    if ( v16 >= v10 )
    {
      if ( v16 > v11 )
        return (unsigned int)-1073741596;
      v17 = v11 + 20 * *(unsigned __int16 *)(a1 + 60);
      if ( v17 >= v11 )
      {
        if ( v17 > v12 )
          return (unsigned int)-1073741596;
        v18 = v12 + 20 * *(unsigned __int16 *)(a1 + 72);
        if ( v18 >= v12 )
        {
          if ( v18 > v13 )
            return (unsigned int)-1073741596;
          v19 = v13 + 12 * *(unsigned __int16 *)(a1 + 84);
          if ( v19 >= v13 )
          {
            if ( v19 > v14 )
              return (unsigned int)-1073741596;
            v20 = v14 + 20 * *(unsigned __int16 *)(a1 + 96);
            if ( v20 >= v14 && (v20 > v15 || v15 + v8 >= v15 && v15 + v8 > v4) )
              return (unsigned int)-1073741596;
          }
        }
      }
    }
  }
  return v2;
}
