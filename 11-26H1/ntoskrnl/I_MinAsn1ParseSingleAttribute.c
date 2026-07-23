/*
 * XREFs of I_MinAsn1ParseSingleAttribute @ 0x1408A949C
 * Callers:
 *     I_MinCryptGetPlatformManifestBinaryIDAttribute @ 0x1408A8720 (I_MinCryptGetPlatformManifestBinaryIDAttribute.c)
 *     I_MinCryptGetSigningTime @ 0x1408A87B4 (I_MinCryptGetSigningTime.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A891C (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyHashSignerAuthenticatedAttributes @ 0x1408A8B38 (I_MinCryptVerifyHashSignerAuthenticatedAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     MinAsn1ExtractContent @ 0x1408AAADC (MinAsn1ExtractContent.c)
 *     MinAsn1ExtractValues @ 0x1408AAC48 (MinAsn1ExtractValues.c)
 */

char __fastcall I_MinAsn1ParseSingleAttribute(__int64 a1, unsigned int *a2, __int64 a3, _OWORD *a4)
{
  __int64 v4; // rbx
  char v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r14
  int v8; // edi
  char v9; // si
  int i; // r15d
  int Values; // eax
  const void *v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // r14
  int v15; // ebx
  int v17; // [rsp+30h] [rbp-61h] BYREF
  const void *v18; // [rsp+38h] [rbp-59h] BYREF
  __int64 v19; // [rsp+40h] [rbp-51h]
  _OWORD *v20; // [rsp+48h] [rbp-49h]
  _BYTE v21[16]; // [rsp+50h] [rbp-41h] BYREF
  int v22; // [rsp+60h] [rbp-31h]
  void *Buf2[3]; // [rsp+78h] [rbp-19h]
  __int128 v25; // [rsp+90h] [rbp-1h]

  v4 = *((_QWORD *)a2 + 1);
  v5 = 0;
  v6 = *a2;
  v7 = a1;
  v20 = a4;
  v19 = a1;
  v18 = 0LL;
  v17 = 0;
  if ( !(_DWORD)v6 || (int)MinAsn1ExtractContent(v4, v6, &v17, &v18) <= 0 )
    return 0;
  v8 = (int)v18;
  v9 = 1;
  for ( i = v17; ; i -= v22 )
  {
    if ( !i )
    {
      v15 = v8 - v4;
      goto LABEL_23;
    }
    v17 = 4;
    Values = MinAsn1ExtractValues(v8, i, (unsigned int)&v17, (unsigned int)&qword_140010390, 5, (__int64)v21);
    if ( Values <= 0 )
      break;
    if ( !v5 )
    {
      v12 = *(const void **)(v7 + 8);
      v13 = *(_DWORD *)v7;
      v14 = 0LL;
      v18 = v12;
      v17 = v13;
      while ( !(_DWORD)v14 )
      {
        if ( v13 == LODWORD(Buf2[10 * v14]) )
        {
          if ( !memcmp(v12, Buf2[10 * v14], v13) )
          {
            if ( &v21[80 * v14] )
            {
              if ( v20 )
                *v20 = v25;
              v5 = 1;
            }
            break;
          }
          v13 = v17;
          v12 = v18;
        }
        v14 = 1LL;
      }
      v7 = v19;
    }
    v8 += v22;
  }
  if ( !Values )
    Values = -1;
  v15 = Values + v4 - v8;
LABEL_23:
  if ( !v5 || v15 < 0 )
    return 0;
  return v9;
}
