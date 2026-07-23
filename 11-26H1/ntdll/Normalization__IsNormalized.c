/*
 * XREFs of Normalization__IsNormalized @ 0x1800ACE40
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1800AC330 (RtlpIdnToUnicodeWorker.c)
 *     RtlIsNormalizedString @ 0x1800AE370 (RtlIsNormalizedString.c)
 * Callees:
 *     Normalization__CanCombinableCharactersCombine @ 0x1800AF660 (Normalization__CanCombinableCharactersCombine.c)
 *     CanComposeHangul @ 0x1800AFAC4 (CanComposeHangul.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1800AFC58 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x180121688 (Normalization__GetSecondDecomposedCharPlane0.c)
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x180121B58 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v4; // r12d
  unsigned __int16 *v5; // r10
  unsigned int FirstDecomposedCharPlane0; // r13d
  unsigned __int16 *v8; // r9
  unsigned int v9; // r15d
  unsigned __int8 v10; // si
  unsigned __int8 v11; // r14
  unsigned __int8 v12; // r11
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // dl
  int v15; // edx
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r12
  unsigned __int16 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int8 v22; // cl
  unsigned int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned __int16 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int CanCombinableCharactersCombine; // eax
  unsigned int SecondDecomposedCharPlane0; // eax
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int8 v38; // [rsp+30h] [rbp-10h]
  unsigned __int8 v39; // [rsp+31h] [rbp-Fh]
  unsigned __int8 v40; // [rsp+32h] [rbp-Eh]
  unsigned int v41; // [rsp+34h] [rbp-Ch] BYREF
  unsigned int v42; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v43; // [rsp+3Ch] [rbp-4h]
  unsigned __int16 *v44; // [rsp+88h] [rbp+48h]
  int v45; // [rsp+90h] [rbp+50h]

  v45 = a3;
  v44 = a2;
  v4 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  FirstDecomposedCharPlane0 = 0;
  v8 = a2 - 1;
  v9 = 0;
  v41 = 0;
  v10 = 0;
  v43 = 0;
  v11 = 0;
  v42 = 0;
  v12 = 0;
  v39 = 0;
  v38 = 0;
  while ( 1 )
  {
    if ( v4 <= 0 )
      goto LABEL_22;
    v13 = *v5;
    if ( (int)v13 >= *(_DWORD *)(a1 + 28) )
    {
      v14 = *(_BYTE *)((v13 >> 7) + *(_QWORD *)(a1 + 32));
      if ( v14 )
      {
        if ( v14 != 0xFB || !*(_BYTE *)(a1 + 113) )
          break;
      }
    }
LABEL_5:
    ++v5;
    --v4;
    v44 = v5;
    v45 = v4;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        switch ( v14 )
        {
          case 0u:
            goto LABEL_73;
          case 0xFBu:
            if ( !*(_BYTE *)(a1 + 113) )
              return 3221227287LL;
            goto LABEL_73;
          case 0xFCu:
            return 3221227287LL;
          case 0xFDu:
            goto LABEL_30;
        }
        if ( v14 != 254 )
          break;
        if ( v4 <= 1 )
          return 3221227287LL;
        ++v5;
        --v4;
        v44 = v5;
        v45 = v4;
        if ( (unsigned __int16)(*v5 + 9216) > 0x3FFu )
          return 3221227287LL;
        LODWORD(v13) = *v5 + (((_DWORD)v13 - 55287) << 10);
        v14 = *(_BYTE *)(((__int64)(int)v13 >> 7) + *(_QWORD *)(a1 + 32));
      }
      if ( v14 != 255 )
      {
        v15 = *(unsigned __int8 *)((v13 & 0x7F) + ((unsigned __int64)v14 << 7) + *(_QWORD *)(a1 + 40) - 128);
        if ( (_BYTE)v15 )
        {
          v16 = v15 & 0xC0;
          v40 = v15 & 0xC0;
          v17 = v15 & 0x3F;
          if ( (v15 & 0x3F) != 0 && v17 != 63 )
            goto LABEL_32;
          if ( v15 == 64 )
          {
LABEL_19:
            v43 = v13;
            v12 = v17;
            v38 = v17;
            v39 = v16;
LABEL_20:
            v11 = v40;
            v10 = v17;
            v4 = v45;
LABEL_21:
            v9 = v13;
            v8 = v5;
            goto LABEL_5;
          }
          if ( v15 != 127 )
          {
            switch ( v15 )
            {
              case 128:
                goto LABEL_19;
              case 191:
                goto LABEL_30;
              case 192:
                v29 = v5 - 1;
                if ( v8 != v5 - 1 )
                {
                  if ( *v29 < 0xD800u || *v29 > 0xDFFFu || (v29 = v5 - 2, v8 != v5 - 2) )
                  {
                    v9 = *v29;
                    if ( v9 - 55296 <= 0x7FF )
                      v9 += (*(v29 - 1) - 55287) << 10;
                    v30 = *(_QWORD *)(a1 + 32);
                    v31 = (__int64)(int)v9 >> 7;
                    if ( *(_BYTE *)(v31 + v30) )
                    {
                      v35 = *(unsigned __int8 *)(v31 + v30);
                      v36 = *(_QWORD *)(a1 + 40);
                      v37 = (v9 & 0x7F) + (v35 << 7);
                      v10 = *(_BYTE *)(v37 + v36 - 128) & 0x3F;
                      v11 = *(_BYTE *)(v37 + v36 - 128) & 0xC0;
                    }
                    else
                    {
                      v11 = 0;
                      v10 = 0;
                    }
                  }
                }
                if ( (v10 | v11) == 0x80 )
                {
                  if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v9, (unsigned int)v13) )
                    goto LABEL_30;
                  v5 = v44;
                  v16 = v40;
                }
                goto LABEL_19;
            }
            if ( v15 != 255 )
            {
LABEL_32:
              if ( (v15 & 0x80) == 0 )
              {
                FirstDecomposedCharPlane0 = 0;
                v41 = 0;
                goto LABEL_19;
              }
              v19 = v5 - 1;
              if ( v8 != v5 - 1 )
              {
                if ( *v19 < 0xD800u || *v19 > 0xDFFFu || (v19 = v5 - 2, v8 != v5 - 2) )
                {
                  v9 = *v19;
                  if ( v9 - 55296 <= 0x7FF )
                    v9 += (*(v19 - 1) - 55287) << 10;
                  v20 = *(_QWORD *)(a1 + 32);
                  v21 = (__int64)(int)v9 >> 7;
                  if ( *(_BYTE *)(v21 + v20) )
                  {
                    v25 = *(unsigned __int8 *)(v21 + v20);
                    v26 = *(_QWORD *)(a1 + 40);
                    v27 = (v9 & 0x7F) + (v25 << 7);
                    v10 = *(_BYTE *)(v27 + v26 - 128) & 0x3F;
                    v11 = *(_BYTE *)(v27 + v26 - 128) & 0xC0;
                  }
                  else
                  {
                    v11 = 0;
                    v10 = 0;
                  }
                }
              }
              if ( !v10 || v10 == 63 )
              {
                v39 = v11;
                v12 = v10;
                v43 = v9;
                v38 = v10;
                if ( ((v11 - 64) & 0xBF) == 0 && v16 == 0xC0 )
                {
                  if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v9, (unsigned int)v13) )
                    goto LABEL_30;
                  v5 = v44;
                  v12 = v10;
                }
                goto LABEL_20;
              }
              if ( (v11 & 0xBF) != 0 )
              {
                if ( v10 > v17 )
                  goto LABEL_30;
                if ( v16 != 0xC0 || v10 == v17 )
                  goto LABEL_20;
                v22 = v39;
                if ( (v12 | v39) == 64 || (v12 | v39) == 0x80 || v39 == 64 && (!v12 || v12 == 63) )
                {
                  v23 = v43;
                  if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v43, (unsigned int)v13) )
                    goto LABEL_30;
                  v5 = v44;
                  v12 = v38;
                  v22 = v39;
                }
                else
                {
                  v23 = v43;
                }
                if ( v17 >= v12 || (v22 & 0xBF) != 0 || (unsigned __int8)(v12 - 1) > 0x3Du )
                  goto LABEL_20;
                if ( v12 == *(_BYTE *)(a1 + 116) )
                {
                  if ( v17 >= *(_BYTE *)(a1 + 114) )
                  {
                    if ( v17 != *(_BYTE *)(a1 + 115) )
                      goto LABEL_20;
                    CanCombinableCharactersCombine = v42;
                    if ( !v42 )
                    {
                      if ( !FirstDecomposedCharPlane0 )
                      {
                        FirstDecomposedCharPlane0 = Normalization__GetFirstDecomposedCharPlane0(a1, v23);
                        v41 = FirstDecomposedCharPlane0;
                      }
                      SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(a1, v23);
                      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                                         a1,
                                                         FirstDecomposedCharPlane0,
                                                         SecondDecomposedCharPlane0);
                      v42 = CanCombinableCharactersCombine;
                    }
                    v24 = CanCombinableCharactersCombine;
                    goto LABEL_63;
                  }
                }
                else if ( v12 == *(_BYTE *)(a1 + 118) && v17 == *(_BYTE *)(a1 + 117) )
                {
                  if ( (unsigned int)Normalization__CanCombineWithStartFirstPair(
                                       a1,
                                       (unsigned int)&v42,
                                       (unsigned int)&v41,
                                       v23,
                                       v13) )
                    goto LABEL_30;
                  FirstDecomposedCharPlane0 = v41;
                  goto LABEL_64;
                }
                if ( !FirstDecomposedCharPlane0 )
                {
                  FirstDecomposedCharPlane0 = Normalization__GetFirstDecomposedCharPlane0(a1, v23);
                  v41 = FirstDecomposedCharPlane0;
                }
                v24 = FirstDecomposedCharPlane0;
LABEL_63:
                if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v24, (unsigned int)v13) )
                  goto LABEL_30;
LABEL_64:
                v5 = v44;
                v12 = v38;
                goto LABEL_20;
              }
              FirstDecomposedCharPlane0 = 0;
              v41 = 0;
              v42 = 0;
              if ( v16 == 0xC0 )
              {
                if ( v11 == 64 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v9, (unsigned int)v13) )
                  goto LABEL_30;
                if ( v10 > v17 )
                {
                  if ( v10 != *(_BYTE *)(a1 + 116) )
                  {
                    if ( v10 == *(_BYTE *)(a1 + 118) && v17 == *(_BYTE *)(a1 + 117) )
                    {
                      if ( (unsigned int)Normalization__CanCombineWithStartFirstPair(
                                           a1,
                                           (unsigned int)&v42,
                                           (unsigned int)&v41,
                                           v9,
                                           v13) )
                        goto LABEL_30;
                      FirstDecomposedCharPlane0 = v41;
                      goto LABEL_86;
                    }
                    goto LABEL_84;
                  }
                  if ( v17 < *(_BYTE *)(a1 + 114) )
                  {
LABEL_84:
                    v28 = Normalization__GetFirstDecomposedCharPlane0(a1, v9);
                    FirstDecomposedCharPlane0 = v28;
                    v41 = v28;
                    goto LABEL_85;
                  }
                  if ( v17 == *(_BYTE *)(a1 + 115) )
                  {
                    v41 = Normalization__GetFirstDecomposedCharPlane0(a1, v9);
                    FirstDecomposedCharPlane0 = v41;
                    v34 = Normalization__GetSecondDecomposedCharPlane0(a1, v9);
                    v28 = Normalization__CanCombinableCharactersCombine(a1, FirstDecomposedCharPlane0, v34);
                    v42 = v28;
LABEL_85:
                    if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v28, (unsigned int)v13) )
                      goto LABEL_30;
                  }
                }
              }
LABEL_86:
              v5 = v44;
              v12 = v10;
              v43 = v9;
              v38 = v10;
              v39 = v11;
              goto LABEL_20;
            }
            if ( (_DWORD)v13 || v45 > 1 )
              return 3221227287LL;
LABEL_22:
            *a4 = 1;
            return 0LL;
          }
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
          v4 = v45;
        }
LABEL_73:
        v10 = 0;
        v11 = 0;
        goto LABEL_21;
      }
      if ( (int)v13 >= 44032 )
        break;
      if ( v4 > 1 && (unsigned __int8)CanComposeHangul((unsigned int)v13, v5[1]) )
        goto LABEL_30;
      if ( *(_DWORD *)a1 != 269 && *(_DWORD *)a1 != 13 || (unsigned int)(v13 - 4447) > 1 )
        goto LABEL_109;
LABEL_28:
      v14 = -5;
    }
    if ( (int)v13 < 55204 )
      break;
    if ( (unsigned int)(v13 - 55216) > 0x16 && (unsigned int)(v13 - 55243) > 0x30 )
      goto LABEL_28;
LABEL_109:
    v14 = 0;
  }
  if ( *(_BYTE *)(a1 + 112) != 1 && (v4 <= 1 || !(unsigned __int8)CanComposeHangul((unsigned int)v13, v5[1])) )
    goto LABEL_73;
LABEL_30:
  *a4 = 0;
  return 0LL;
}
