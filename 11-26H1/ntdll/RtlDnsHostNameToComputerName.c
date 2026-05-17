/*
 * XREFs of RtlDnsHostNameToComputerName @ 0x18009FD10
 * Callers:
 *     <none>
 * Callees:
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800339A0 (UpcaseUnicodeToUTF8NHelper.c)
 *     NLS_UPCASE @ 0x180036DE0 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
 *     RtlOemStringToUnicodeString @ 0x18009FB00 (RtlOemStringToUnicodeString.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800A0124 (RtlpDidUnicodeToOemWork.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlDnsHostNameToComputerName(__int64 a1, __m128i *a2, char a3)
{
  unsigned int v3; // ebx
  char v4; // r12
  __int64 v5; // r13
  unsigned int v6; // ecx
  __m128i v7; // xmm0
  unsigned __int16 v8; // dx
  unsigned __int16 *v9; // r14
  unsigned int v10; // esi
  __int64 v11; // r8
  unsigned int v12; // r11d
  __int64 v13; // r13
  unsigned int v14; // eax
  __int16 v15; // di
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // rbx
  _BYTE *v19; // r15
  __int64 v20; // r12
  __int64 v21; // r10
  __int64 v22; // r13
  _BYTE *v23; // rdi
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  unsigned __int64 v28; // rax
  int v29; // edx
  __int64 v30; // r10
  __int16 v31; // dx
  unsigned int v32; // eax
  signed __int32 v33[8]; // [rsp+0h] [rbp-80h] BYREF
  char v34; // [rsp+30h] [rbp-50h]
  int v35; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v36; // [rsp+38h] [rbp-48h]
  __int128 v37; // [rsp+40h] [rbp-40h] BYREF
  __m128i v38; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v39[16]; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  v34 = a3;
  v36 = a1;
  v4 = a3;
  v35 = 0;
  v37 = 0LL;
  v5 = a1;
  v6 = 0;
  v7 = *a2;
  v8 = _mm_cvtsi128_si32(*a2);
  v38 = v7;
  v9 = (unsigned __int16 *)v7.m128i_i64[1];
  while ( v6 < v8 >> 1 )
  {
    if ( *(_WORD *)(v7.m128i_i64[1] + 2LL * v6) == 46 )
    {
      v8 = 2 * v6;
      v38.m128i_i16[0] = 2 * v6;
      break;
    }
    ++v6;
  }
  if ( v8 < 2u )
    return 3221225762LL;
  v10 = v8 >> 1;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v33, 0);
    v12 = v11 + 13;
    v13 = qword_1801C5FF8;
    if ( word_1801C5FDC )
    {
      v22 = qword_1801C5FB0;
      v23 = v39;
      v24 = qword_1801C5FB8;
      if ( v10 )
      {
        v25 = qword_1801C5FC8;
        do
        {
          if ( !v12 )
            break;
          v26 = *v9;
          v9 = (unsigned __int16 *)((char *)v9 + v11);
          v27 = *(_WORD *)(v24 + 2 * v26);
          v28 = (unsigned __int64)v27 >> 8;
          if ( *(_WORD *)(qword_1801C6020 + 2 * v28) )
            v29 = *(unsigned __int16 *)(v25
                                      + 2
                                      * (*(unsigned __int16 *)(qword_1801C6020 + 2 * v28)
                                       + (unsigned __int64)(unsigned __int8)v27));
          else
            v29 = *(unsigned __int16 *)(v22 + 2LL * (unsigned __int8)v27);
          v30 = (unsigned __int16)NLS_UPCASE(qword_1801C6038, v29);
          v11 = 2LL;
          v31 = *(_WORD *)(v24 + 2 * v30);
          if ( HIBYTE(v31) )
          {
            v32 = v12--;
            if ( v32 < 2 )
              break;
            *v23++ = HIBYTE(v31);
          }
          *v23 = v31;
          --v12;
          ++v23;
          --v10;
        }
        while ( v10 );
        v4 = v34;
      }
      v15 = (_WORD)v23 - (unsigned __int16)v39;
      goto LABEL_12;
    }
    if ( v10 < v12 )
    {
      v15 = v10;
      v14 = v10;
      if ( !v10 )
      {
LABEL_12:
        v5 = v36;
        result = v12 < v10 ? 0x80000005 : 0;
        goto LABEL_13;
      }
    }
    else
    {
      v14 = v11 + 13;
      v15 = v11 + 13;
    }
    v18 = qword_1801C5FF0;
    v19 = v39;
    v20 = v14;
    do
    {
      v21 = (unsigned __int16)NLS_UPCASE(
                                qword_1801C6038,
                                *(unsigned __int16 *)(v18 + 2LL * *(unsigned __int8 *)(*v9++ + v13)));
      *v19++ = *(_BYTE *)(v21 + v13);
      --v20;
    }
    while ( v20 );
    v4 = v34;
    v3 = 0;
    goto LABEL_12;
  }
  result = UpcaseUnicodeToUTF8NHelper((int)v39, 15, &v35, v7.m128i_i64[1], v10);
  v15 = v35;
LABEL_13:
  if ( (int)result < 0 && (_DWORD)result != -2147483643 )
    return result;
  LOWORD(v37) = v15;
  *((_QWORD *)&v37 + 1) = v39;
  WORD1(v37) = 16;
  if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(&v37, &v38) )
    return 3221225762LL;
  v17 = RtlOemStringToUnicodeString(v5, (unsigned __int16 *)&v37, v4);
  if ( v17 < 0 )
    return (unsigned int)v17;
  return v3;
}
