/*
 * XREFs of ValidateRGBBitFields @ 0x1401AB9A4
 * Callers:
 *     ValidateHTSI @ 0x14013D1C8 (ValidateHTSI.c)
 *     GetDstBFInfo @ 0x1402F4694 (GetDstBFInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateRGBBitFields(__int128 *a1)
{
  __int128 v1; // xmm1
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // r10d
  __int64 i; // rcx
  unsigned int v8; // eax
  char v9; // r8
  char v10; // r9
  bool v11; // cf
  __int64 result; // rax
  __int64 v13; // xmm1_8
  char v14; // dl
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+0h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-10h]

  v1 = *a1;
  v3 = *(_QWORD *)a1;
  v19 = *((_QWORD *)a1 + 2);
  v4 = v3 >> 8;
  v18 = v1;
  if ( (unsigned __int8)v4 == 1 || (unsigned __int8)v4 == 2 || (unsigned __int8)v4 == 3 )
  {
    v14 = 0;
    WORD3(v18) = 2056;
    BYTE5(v18) = 8;
    v15 = 255;
    HIDWORD(v19) = *(_DWORD *)&SrcOrderTable[4 * BYTE4(v19)];
    v16 = 0LL;
    do
    {
      v17 = *((unsigned __int8 *)&v19 + v16++ + 5);
      *((_DWORD *)&v18 + v17 + 2) = v15;
      *((_BYTE *)&v18 + v17 + 2) = v14;
      v14 += 8;
      v15 <<= 8;
    }
    while ( v16 < 3 );
    goto LABEL_27;
  }
  v5 = 0LL;
  if ( (unsigned __int8)v4 == 4 )
  {
LABEL_32:
    WORD5(v18) = 0;
    HIWORD(v18) = 0;
    WORD1(v19) = 0;
    goto LABEL_7;
  }
  if ( (unsigned __int8)v4 != 5 && (unsigned __int8)v4 != 6 )
  {
    if ( (unsigned int)(unsigned __int8)v4 - 252 > 1 )
      return 0LL;
    goto LABEL_32;
  }
LABEL_7:
  v6 = v19 | HIDWORD(v18) | DWORD2(v18);
  if ( v6 && ((HIDWORD(v18) | DWORD2(v18)) & (unsigned int)v19) == 0 && (HIDWORD(v18) & DWORD2(v18)) == 0 )
  {
    for ( i = 0LL; i < 3; ++i )
    {
      v8 = *((_DWORD *)&v18 + i + 2);
      v9 = 0;
      v10 = 0;
      if ( v8 )
      {
        while ( (v8 & 1) == 0 )
        {
          v8 >>= 1;
          ++v10;
        }
        do
        {
          ++v9;
          v8 >>= 1;
        }
        while ( (v8 & 1) != 0 );
        if ( v8 )
          return 0LL;
      }
      *((_BYTE *)&v18 + i + 2) = v10;
      *((_BYTE *)&v18 + i + 5) = v9;
    }
    if ( v6 == 0xFFFFFF && *(_WORD *)((char *)&v18 + 5) == 2056 && BYTE7(v18) == 8 )
      LOBYTE(v18) = v18 | 1;
    v11 = HIDWORD(v18) < DWORD2(v18);
    if ( HIDWORD(v18) > DWORD2(v18) )
    {
      if ( DWORD2(v18) < (unsigned int)v19 )
      {
        LOBYTE(v5) = HIDWORD(v18) >= (unsigned int)v19;
LABEL_26:
        HIDWORD(v19) = *(_DWORD *)&SrcOrderTable[4 * v5];
LABEL_27:
        result = 1LL;
        v13 = v19;
        *a1 = v18;
        *((_QWORD *)a1 + 2) = v13;
        return result;
      }
      v11 = HIDWORD(v18) < DWORD2(v18);
    }
    if ( v11 && HIDWORD(v18) < (unsigned int)v19 )
      v5 = 3LL - (DWORD2(v18) < (unsigned int)v19);
    else
      v5 = (DWORD2(v18) < HIDWORD(v18)) + 4LL;
    goto LABEL_26;
  }
  return 0LL;
}
