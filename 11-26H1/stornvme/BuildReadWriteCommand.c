/*
 * XREFs of BuildReadWriteCommand @ 0x140004540
 * Callers:
 *     SetPrpFromSrb @ 0x140003380 (SetPrpFromSrb.c)
 *     ScsiReadWriteRequest @ 0x140003DE0 (ScsiReadWriteRequest.c)
 * Callees:
 *     GetLbaFromCdb @ 0x140004C80 (GetLbaFromCdb.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

char __fastcall BuildReadWriteCommand(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4, __int64 a5, int a6)
{
  char v6; // r10
  unsigned int v10; // r9d
  unsigned int i; // r8d
  __int64 v12; // rcx
  __int64 v13; // rsi
  _DWORD *v14; // rbx
  unsigned __int8 v15; // r14
  int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // ebx
  __int64 LbaFromCdb; // rax
  int v20; // eax
  int v21; // eax
  unsigned __int8 v22; // cl
  char v23; // cl
  char v24; // cl
  char v25; // al
  char v26; // cl
  int v27; // ecx
  int v28; // ecx
  unsigned int v29; // eax
  _OWORD v31[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h]

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
  {
    v10 = *(_DWORD *)(a2 + 56);
    if ( v10 )
    {
      for ( i = 0; i < v10; ++i )
      {
        v12 = *(unsigned int *)(a2 + 4LL * i + 120);
        if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(a2 + 16) )
        {
          v13 = a2 + v12;
          if ( *(_DWORD *)(a2 + v12) == 128 )
            goto LABEL_10;
        }
      }
    }
  }
  v14 = (_DWORD *)(a2 + 16);
  v13 = 0LL;
  if ( v6 == 40 )
  {
LABEL_10:
    v14 = (_DWORD *)(a2 + 60);
    v15 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v15 = *(_BYTE *)(a2 + 7);
  }
  v16 = *a3;
  if ( v16 == 136 || (v27 = v16 - 40) == 0 )
  {
    *(_BYTE *)a5 = 2;
  }
  else
  {
    v28 = v27 - 2;
    if ( !v28 || v28 == 96 )
    {
      *(_BYTE *)a5 = 1;
      if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 && *(_BYTE *)(a1 + 3729) == v15 )
      {
        if ( *(_WORD *)(a1 + 3732) )
        {
          v32 = 0LL;
          memset(v31, 0, sizeof(v31));
          LOWORD(v31[0]) = 1;
          if ( !(unsigned int)StorPortExtendedFunction(28LL, a1, a2, v31)
            && (WORD4(v31[0]) & 0x100) != 0
            && (unsigned int)(HIDWORD(v31[0]) - 1) <= 0xFFFE
            && HIDWORD(v31[0]) <= *(unsigned __int16 *)(a1 + 3732)
            && WORD6(v31[0]) )
          {
            v29 = *(_DWORD *)(a5 + 48) & 0xFF1FFFFF;
            *(_WORD *)(a5 + 54) = WORD6(v31[0]);
            *(_DWORD *)(a5 + 48) = v29 | 0x100000;
          }
        }
      }
    }
  }
  *(_DWORD *)a5 &= 0xFFFFFCFF;
  *(_DWORD *)(a5 + 4) = a6;
  *(_QWORD *)(a5 + 16) = 0LL;
  v17 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v15 + 1672) + 52LL);
  v18 = (v17 + *v14 - 1) / v17 - 1;
  LbaFromCdb = GetLbaFromCdb(a3, a4);
  *(_DWORD *)(a5 + 40) = LbaFromCdb;
  *(_WORD *)(a5 + 48) = v18;
  *(_DWORD *)(a5 + 48) &= 0xC3FFFFFF;
  *(_DWORD *)(a5 + 44) = HIDWORD(LbaFromCdb);
  v20 = *(_DWORD *)(a5 + 48) & 0x3FFFFFFF;
  *(_DWORD *)(a5 + 48) = v20 | ((a3[1] & 0xF8) << 27) & 0x7FFFFFFF;
  if ( v13 )
  {
    v21 = *(_DWORD *)(v13 + 12);
    if ( v21 == 21390674 || v21 == 23810643 || v21 == 38167890 || (v22 = *(_BYTE *)(v13 + 22), v22 == 3) || v22 == 4 )
    {
      *(_BYTE *)(a5 + 52) |= 0x30u;
      v23 = *(_BYTE *)(a5 + 52);
    }
    else if ( v21 == 54945106 || v22 < 2u || v21 == 40587859 )
    {
      v23 = *(_BYTE *)(a5 + 52) & 0xCF | 0x10;
      *(_BYTE *)(a5 + 52) = v23;
    }
    else
    {
      *(_BYTE *)(a5 + 52) &= 0xCFu;
      v23 = *(_BYTE *)(a5 + 52);
    }
    if ( (*(_DWORD *)(v13 + 12) & 0x36F7753) != 0 )
      v24 = v23 & 0xF0 | 4;
    else
      v24 = v23 & 0xF0;
    *(_BYTE *)(a5 + 52) = v24;
    v25 = v24 & 0xBF | (16 * (*(_BYTE *)(v13 + 8) & 4));
    *(_BYTE *)(a5 + 52) = v25;
    LOBYTE(v20) = v25 & 0x7F;
    v26 = v20 | (*(_DWORD *)(v13 + 8) >> 2) & 0x80;
  }
  else
  {
    *(_BYTE *)(a5 + 52) &= 0x80u;
    v26 = 0;
  }
  *(_BYTE *)(a5 + 52) = v26;
  *(_QWORD *)(a5 + 56) = 0LL;
  return v20;
}
