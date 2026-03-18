/*
 * XREFs of PnpiCmResourceToBiosAddress @ 0x1400B92DC
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1400B8A44 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddress(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  char v6; // r10
  __int64 i; // r9
  __int64 v8; // rcx
  int v9; // eax
  __int16 v10; // ax
  __int16 v11; // ax
  char v12; // al
  __int16 v13; // r9
  __int16 v14; // ax

  v3 = *(unsigned __int8 *)(a1 + 3);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 3221225473LL;
      v6 = 6;
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 3;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 16); i = (unsigned int)(i + 1) )
  {
    v8 = 5 * i;
    v9 = *(unsigned __int8 *)(a2 + 20 * i + 20);
    if ( (_BYTE)v9 == v6 )
    {
      if ( (_BYTE)v9 )
      {
        if ( v9 != 1 )
        {
          if ( v9 == 2 )
          {
            v10 = *(_WORD *)(a2 + 20 * i + 24);
            *(_WORD *)(a1 + 8) = v10;
            *(_WORD *)(a1 + 10) = *(_WORD *)(a2 + 20 * i + 28) + v10 - 1;
            v11 = *(_WORD *)(a2 + 20 * i + 28);
            goto LABEL_24;
          }
          goto LABEL_25;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 5) = 0;
        v12 = (*(_BYTE *)(a2 + 20 * i + 22) & 1) == 0;
        *(_BYTE *)(a1 + 5) = v12;
        v13 = *(_WORD *)(a2 + 20 * i + 22);
        if ( (v13 & 0x20) != 0 )
        {
          v12 |= 2u;
        }
        else if ( (v13 & 8) != 0 )
        {
          v12 |= 4u;
        }
        else if ( (v13 & 4) != 0 )
        {
          v12 |= 6u;
        }
        *(_BYTE *)(a1 + 5) = v12;
      }
      v14 = *(_WORD *)(a2 + 4 * v8 + 24);
      *(_WORD *)(a1 + 8) = v14;
      *(_WORD *)(a1 + 10) = *(_WORD *)(a2 + 4 * v8 + 32) + v14 - 1;
      v11 = *(_WORD *)(a2 + 4 * v8 + 32);
LABEL_24:
      *(_WORD *)(a1 + 14) = v11;
LABEL_25:
      *(_BYTE *)(a2 + 4 * v8 + 20) = 0;
      return 0LL;
    }
  }
  return 0LL;
}
