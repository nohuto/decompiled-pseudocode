/*
 * XREFs of KiOpDecode @ 0x1403D53A8
 * Callers:
 *     KiPreprocessFault @ 0x1403D5010 (KiPreprocessFault.c)
 * Callees:
 *     KiOpLocateDecodeEntry @ 0x1403D5B20 (KiOpLocateDecodeEntry.c)
 *     KiOpFetchBytes @ 0x1403D5C60 (KiOpFetchBytes.c)
 *     KiOpDecodeModRM @ 0x1403D5CA8 (KiOpDecodeModRM.c)
 *     KiOpFetchNextByte @ 0x1403D5D84 (KiOpFetchNextByte.c)
 *     KiOpIsPrefix @ 0x1403D5DE0 (KiOpIsPrefix.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 */

__int64 __fastcall KiOpDecode(__int64 a1, __int64 a2, char a3, int a4, _QWORD *a5)
{
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // esi
  void **v16; // rdi
  __int64 v17; // rax
  _DWORD v18[14]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v19; // [rsp+68h] [rbp+10h] BYREF
  char v20; // [rsp+70h] [rbp+18h] BYREF
  char v21; // [rsp+78h] [rbp+20h] BYREF

  v9 = a5;
  LOBYTE(a5) = 0;
  v21 = 0;
  v18[0] = 0;
  v20 = 0;
  v19 = 0;
  memset_0(v9, 0, 0x70uLL);
  *((_DWORD *)v9 + 15) = a4;
  v10 = *(_QWORD *)(a2 + 248);
  *v9 = v10;
  v9[2] = v10;
  v9[1] = v10 + 16;
  if ( a3 == 1 )
    RtlReadUCharFromUser(v10);
  v9[4] = a1;
  v9[3] = a2;
  *((_BYTE *)v9 + 81) = a3;
  *((_BYTE *)v9 + 97) = 0;
  if ( *(_WORD *)(a2 + 56) == 35 )
    *((_BYTE *)v9 + 58) = 1;
  do
  {
    result = KiOpFetchNextByte(v9, &v20);
    if ( (int)result >= 0 )
    {
      LOBYTE(v12) = v20;
      result = KiOpIsPrefix(v9, v12, &v21);
      v13 = (unsigned int)result;
      if ( (int)result >= 0 )
        continue;
    }
    return result;
  }
  while ( v21 );
  if ( v20 != 15
    || (*((_BYTE *)v9 + 57) = 1, result = KiOpFetchNextByte(v9, &v20), v13 = (unsigned int)result, (int)result >= 0) )
  {
    v9[5] = v9[2] - 1LL;
    *((_BYTE *)v9 + 56) = v20;
    if ( (a4 & 0x8000000) != 0 )
    {
      v9[11] = 0LL;
    }
    else
    {
      result = KiOpLocateDecodeEntry(v9, v13);
      v13 = (unsigned int)result;
      if ( (int)result < 0 )
        return result;
    }
    v14 = v9[11];
    if ( !v14 )
      return 0LL;
    if ( (*(_DWORD *)(v14 + 12) & 4) == 0
      || (result = KiOpDecodeModRM(v9, v13), LODWORD(v13) = result, (int)result >= 0) )
    {
      if ( (*(_DWORD *)(v14 + 12) & 1) != 0 )
      {
        v15 = 1;
        v16 = (void **)&a5;
        while ( 1 )
        {
          LODWORD(v13) = KiOpFetchNextByte(v9, v16);
          if ( (int)v13 < 0 )
            break;
          v16 = (void **)((char *)v16 + 1);
          if ( !--v15 )
          {
            LODWORD(v13) = 0;
            break;
          }
        }
        if ( (int)v13 < 0 )
          return (unsigned int)v13;
        v17 = (char)a5;
      }
      else
      {
        if ( (*(_DWORD *)(v9[11] + 12LL) & 2) == 0 )
          return (unsigned int)v13;
        if ( (v9[6] & 0x40) != 0 )
        {
          result = KiOpFetchBytes(v9, 2LL, &v19);
          LODWORD(v13) = result;
          if ( (int)result < 0 )
            return result;
          v17 = v19;
        }
        else
        {
          result = KiOpFetchBytes(v9, 4LL, v18);
          LODWORD(v13) = result;
          if ( (int)result < 0 )
            return result;
          v17 = v18[0];
        }
      }
      v9[9] = v17;
      return (unsigned int)v13;
    }
  }
  return result;
}
