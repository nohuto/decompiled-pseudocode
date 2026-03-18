/*
 * XREFs of PnpiValidateSdevResources @ 0x1400B8794
 * Callers:
 *     PnpBiosGetDeviceResourceList @ 0x1400CA68C (PnpBiosGetDeviceResourceList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiValidateSdevResources(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // r10d
  int v6; // ebx
  unsigned __int64 v7; // r11
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rdx
  unsigned int i; // edi
  unsigned int v14; // r14d
  unsigned int j; // r11d
  __int64 v16; // r8
  char v17; // al
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi

  v3 = a1 + 36;
  v4 = 0;
  v6 = 0;
  v7 = a1 + *(unsigned int *)(a1 + 4);
  while ( 1 )
  {
    if ( v3 >= v7 )
      return (unsigned int)-1073741275;
    if ( v6 == a2 )
      break;
    v3 += *(unsigned __int16 *)(v3 + 2);
    ++v6;
  }
  if ( v3 >= v7 || !v3 )
    return (unsigned int)-1073741275;
  if ( *(_BYTE *)v3 )
  {
    return (unsigned int)-1072431094;
  }
  else if ( (*(_BYTE *)(v3 + 1) & 2) != 0 )
  {
    v9 = *(unsigned __int16 *)(v3 + 12);
    v10 = v3 + *(unsigned __int16 *)(v3 + 2);
    while ( 1 )
    {
      v3 += v9;
      if ( v3 >= v10 )
        break;
      if ( *(_BYTE *)v3 == 1 )
      {
        v11 = *(_DWORD *)(a3 + 28);
        v12 = a3 + 32;
        for ( i = 0; i < v11; v12 += 32LL * (v14 - 1) + 40 )
        {
          v14 = *(_DWORD *)(v12 + 4);
          for ( j = 0; j < v14; ++j )
          {
            v16 = 32LL * j;
            v17 = *(_BYTE *)(v16 + v12 + 9);
            if ( v17 == 3 || v17 == 7 && (*(_WORD *)(v16 + v12 + 12) & 0xE00) != 0 )
            {
              v18 = *(_QWORD *)(v3 + 8);
              if ( v18 >= *(_QWORD *)(v16 + v12 + 24) )
              {
                v19 = *(_QWORD *)(v3 + 16);
                if ( v19 + v18 <= *(_QWORD *)(v16 + v12 + 32) + 1LL && v19 <= *(unsigned int *)(v16 + v12 + 16) )
                  goto LABEL_27;
              }
            }
          }
          ++i;
        }
        return (unsigned int)-1073741823;
      }
LABEL_27:
      v9 = *(unsigned __int16 *)(v3 + 2);
    }
  }
  return v4;
}
