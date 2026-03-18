/*
 * XREFs of PnpiCmResourceToBiosAddressDouble @ 0x1400B93D0
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1400B8A44 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddressDouble(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  char v6; // r10
  __int64 i; // rcx
  __int64 v8; // r8
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  __int16 v12; // cx
  char v13; // al
  __int16 v14; // r10
  int v15; // ecx

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
            v10 = *(_DWORD *)(a2 + 20 * i + 24);
            *(_DWORD *)(a1 + 10) = v10;
            *(_DWORD *)(a1 + 14) = *(_DWORD *)(a2 + 4 * v8 + 28) - 1 + v10;
            v11 = *(_DWORD *)(a2 + 4 * v8 + 28);
            goto LABEL_24;
          }
          goto LABEL_25;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 5) = 0;
        v12 = *(_WORD *)(a2 + 20 * i + 22) & 3;
        v13 = v12 == 0;
        *(_BYTE *)(a1 + 5) = v12 == 0;
        v14 = *(_WORD *)(a2 + 4 * v8 + 22);
        if ( (v14 & 0x20) != 0 )
        {
          v13 = 3 - (v12 != 0);
        }
        else if ( (v14 & 8) != 0 )
        {
          v13 = 5 - (v12 != 0);
        }
        else if ( (v14 & 4) != 0 )
        {
          v13 = 7 - (v12 != 0);
        }
        *(_BYTE *)(a1 + 5) = v13;
      }
      v15 = *(_DWORD *)(a2 + 4 * v8 + 24);
      *(_DWORD *)(a1 + 10) = v15;
      *(_DWORD *)(a1 + 14) = *(_DWORD *)(a2 + 4 * v8 + 32) - 1 + v15;
      v11 = *(_DWORD *)(a2 + 4 * v8 + 32);
LABEL_24:
      *(_DWORD *)(a1 + 22) = v11;
LABEL_25:
      *(_BYTE *)(a2 + 4 * v8 + 20) = 0;
      return 0LL;
    }
  }
  return 0LL;
}
