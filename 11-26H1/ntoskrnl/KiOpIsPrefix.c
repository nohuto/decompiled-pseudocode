/*
 * XREFs of KiOpIsPrefix @ 0x1403D5DE0
 * Callers:
 *     KiOpDecode @ 0x1403D53A8 (KiOpDecode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpIsPrefix(__int64 a1, char a2, _BYTE *a3)
{
  int v4; // edx
  __int64 i; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 result; // rax
  int v11; // ecx
  int v12; // r8d

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 58) && (a2 & 0xF0) == 0x40 )
  {
    v9 = 2048;
    *(_BYTE *)(a1 + 64) = a2;
LABEL_10:
    v11 = *(_DWORD *)(a1 + 48);
    if ( (v11 & v9) != 0 )
      return 3221225501LL;
    v12 = *(_DWORD *)(a1 + 52);
    if ( (v12 & v4) != 0 )
    {
      return 3221225501LL;
    }
    else
    {
      *(_DWORD *)(a1 + 48) = v9 | v11;
      *(_DWORD *)(a1 + 52) = v4 | v12;
      result = 0LL;
      *a3 = 1;
    }
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < 0xB; i = (unsigned int)(i + 1) )
    {
      v8 = 12 * i;
      if ( *((_BYTE *)KiOpPrefixTable + 12 * i) == a2 )
      {
        v9 = *(_DWORD *)((char *)KiOpPrefixTable + v8 + 4);
        v4 = *(_DWORD *)((char *)&KiOpPrefixTable[1] + v8);
        if ( v9 )
          goto LABEL_10;
        break;
      }
    }
    *a3 = 0;
    return 0LL;
  }
  return result;
}
