/*
 * XREFs of LdrpConvertLangFallbackListToMultiSz @ 0x180039EC0
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180038890 (RtlGetProcessPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180038AA0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003AA20 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlIntegerToUnicode @ 0x18003D010 (RtlIntegerToUnicode.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpConvertLangFallbackListToMultiSz(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        unsigned int *a4,
        char a5,
        char a6,
        _DWORD *a7)
{
  unsigned int v7; // esi
  wchar_t *v8; // r11
  char v9; // r8
  __int64 v10; // r10
  _DWORD *v11; // rdx
  unsigned int v13; // r14d
  unsigned int v14; // ecx
  unsigned __int16 v15; // di
  int v16; // r15d
  char v17; // bl
  int v18; // edx
  __int128 *v19; // rbx
  unsigned __int16 *v20; // r8
  int v21; // ecx
  unsigned int v22; // ebx
  int v23; // r12d
  size_t v24; // rdx
  unsigned int v25; // ebx
  __int64 v26; // r14
  __int64 result; // rax
  int v28; // ecx
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  void *v34; // rcx
  size_t v35; // rax
  unsigned int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // xmm0_8
  int v44; // eax
  __int64 v45; // rax
  void *v46; // rcx
  size_t v47; // rax
  char v48; // [rsp+20h] [rbp-81h]
  unsigned int v49; // [rsp+24h] [rbp-7Dh]
  void *Src[2]; // [rsp+38h] [rbp-69h] BYREF
  size_t v53; // [rsp+48h] [rbp-59h] BYREF
  __int128 v54; // [rsp+50h] [rbp-51h] BYREF
  __int64 v55; // [rsp+60h] [rbp-41h]
  int v56; // [rsp+68h] [rbp-39h]
  void *Heap_0; // [rsp+70h] [rbp-31h]
  unsigned int *v58; // [rsp+78h] [rbp-29h]
  __int64 v59; // [rsp+80h] [rbp-21h]
  wchar_t String[4]; // [rsp+88h] [rbp-19h] BYREF
  __int16 v61; // [rsp+90h] [rbp-11h]

  v7 = 0;
  v8 = a3;
  v9 = 0;
  v58 = a4;
  v48 = 0;
  v10 = a2;
  v11 = a7;
  v59 = (__int64)a7;
  v13 = 0;
  if ( !a4 )
    return 3221225485LL;
  if ( !a1 )
  {
    if ( v8 )
    {
      if ( *a4 < 2 )
        v7 = -1073741789;
      else
        *(_DWORD *)v8 = 0;
    }
    *a4 = 2;
    return v7;
  }
  v14 = *a4;
  v15 = 0;
  v16 = 0;
  v49 = *a4;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_33;
  v17 = a5;
  do
  {
    if ( !a6 )
      goto LABEL_6;
    v37 = *(_QWORD *)(a1 + 24);
    if ( *(_WORD *)(v37 + 6LL * v15) == 2 )
    {
      v38 = *(_QWORD *)(v10 + 24);
      v39 = *(__int16 *)(v37 + 6LL * v15 + 4);
      if ( v38 )
      {
        if ( (v39 & 0x8000u) == 0LL
          && (int)v39 < *(unsigned __int16 *)(v38 + 6)
          && (*(_WORD *)(28 * v39 + *(_QWORD *)(v38 + 16)) & 0x1020) == 0x20 )
        {
          v40 = *(_QWORD *)(v38 + 16);
          if ( v17 >= 0 )
          {
            v10 = a2;
          }
          else
          {
            v41 = *(_QWORD *)(a1 + 24);
            if ( *(_WORD *)(v41 + 6LL * v15) == 2 )
              LOWORD(v39) = *(_WORD *)(v41 + 6LL * v15 + 4);
            v42 = 28LL * (__int16)v39;
            v43 = *(_QWORD *)(v42 + v40 + 16);
            v56 = *(_DWORD *)(v42 + v40 + 24);
            v44 = *(_DWORD *)(v42 + v40);
            v10 = a2;
            v55 = v43;
            if ( (v44 & 6) != 0 )
              a6 = 0;
          }
LABEL_6:
          v18 = v17 & 4;
          v54 = 0LL;
          v19 = 0LL;
          v20 = (unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL * v15);
          v55 = 0LL;
          v56 = 0;
          if ( !v20 || !v10 )
            goto LABEL_30;
          v21 = *v20;
          if ( v21 == 1 )
          {
            WORD2(v54) = v20[2];
LABEL_10:
            v19 = &v54;
            goto LABEL_11;
          }
          v28 = v21 - 2;
          if ( v28 )
          {
            if ( v28 == 1 )
            {
              WORD3(v54) = v20[2];
              goto LABEL_10;
            }
          }
          else
          {
            v19 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 16LL) + 28LL * (__int16)v20[2]);
          }
LABEL_11:
          *(_OWORD *)Src = 0LL;
          if ( v18 )
          {
            LODWORD(v53) = 0;
            *(_QWORD *)String = 0LL;
            v61 = 0;
            if ( v19 )
            {
              if ( *((_WORD *)v19 + 2) )
              {
                v22 = *((unsigned __int16 *)v19 + 2);
                goto LABEL_15;
              }
              v45 = *((__int16 *)v19 + 3);
              if ( (__int16)v45 <= 0 )
              {
                v23 = -1073741595;
                goto LABEL_28;
              }
              v46 = (void *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 24LL)
                           + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL) + 2 * v45));
              Src[1] = v46;
              if ( v46 )
              {
                v47 = 2 * wcslen((const wchar_t *)v46);
                if ( v47 >= 0xFFFE )
                  LOWORD(v47) = -4;
                LOWORD(Src[0]) = v47;
                WORD1(Src[0]) = v47 + 2;
              }
              if ( RtlCultureNameToLCID((unsigned __int16 *)Src, (int *)&v53) )
              {
                v22 = v53;
LABEL_15:
                v23 = RtlIntegerToUnicode(v22, 16LL, 4294967292LL, String);
                if ( v23 >= 0 )
                {
                  Src[0] = 0LL;
                  Src[1] = String;
                  v24 = 2 * wcslen(String);
                  if ( v24 >= 0xFFFE )
                    v24 = 65532LL;
                  v53 = v24;
                  WORD1(Src[0]) = v24 + 2;
                  if ( v22 == 4096 || !v13 || v13 > v49 )
                  {
LABEL_23:
                    v8 = a3;
                    LODWORD(v53) = v13 + ((unsigned __int16)v24 >> 1);
                    v25 = v53 + 1;
                    if ( a3 && v13 < v25 )
                    {
                      if ( v25 < v49 )
                      {
                        memmove(&a3[v13], String, (unsigned __int16)v24);
                        v8 = a3;
                        a3[(unsigned int)v53] = 0;
LABEL_27:
                        v10 = a2;
                        v13 = v25;
LABEL_28:
                        if ( v23 < 0 )
                        {
                          if ( v23 != -1073741789 )
                            goto LABEL_30;
                          v48 = 1;
                        }
                        ++v16;
LABEL_30:
                        v17 = a5;
                        goto LABEL_31;
                      }
                    }
                    else if ( v25 < v49 || !a3 )
                    {
                      goto LABEL_27;
                    }
                    v23 = -1073741789;
                    goto LABEL_27;
                  }
                  if ( !(unsigned __int8)RtlpLangNameInMultiSzString_Size(a3, String) )
                  {
                    LOWORD(v24) = v53;
                    goto LABEL_23;
                  }
LABEL_75:
                  v8 = a3;
                  v10 = a2;
                  goto LABEL_28;
                }
LABEL_63:
                v10 = a2;
                v8 = a3;
                goto LABEL_28;
              }
              v8 = a3;
              v10 = a2;
            }
LABEL_77:
            v23 = -1073741811;
            goto LABEL_28;
          }
          v23 = 0;
          if ( !v19 )
            goto LABEL_77;
          Heap_0 = (void *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
          if ( !Heap_0 )
          {
            v23 = -1073741801;
            goto LABEL_75;
          }
          v29 = *((__int16 *)v19 + 3);
          if ( (__int16)v29 > 0 )
          {
            v31 = *(_QWORD *)(a2 + 32);
            v32 = *(__int16 *)(*(_QWORD *)(v31 + 16) + 2 * v29);
            v33 = *(_QWORD *)(v31 + 24);
            Src[0] = 0LL;
            v34 = (void *)(v33 + 2 * v32);
            Src[1] = v34;
            if ( v34 )
            {
              v35 = 2 * wcslen((const wchar_t *)v34);
              if ( v35 >= 0xFFFE )
                LOWORD(v35) = -4;
              LOWORD(Src[0]) = v35;
              WORD1(Src[0]) = v35 + 2;
            }
          }
          else
          {
            Src[1] = Heap_0;
            v30 = *((unsigned __int16 *)v19 + 2);
            LODWORD(Src[0]) = 11141120;
            if ( !(unsigned __int8)RtlLCIDToCultureName(v30, (__int64)Src) )
            {
              v23 = -1073741595;
LABEL_62:
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, Heap_0);
              goto LABEL_63;
            }
          }
          if ( v13 && v13 <= v49 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(a3, (wchar_t *)Src[1]) )
            goto LABEL_62;
          LODWORD(v53) = v13 + (LOWORD(Src[0]) >> 1);
          v36 = v53 + 1;
          if ( a3 && v13 < v36 )
          {
            if ( v36 < v49 )
            {
              memmove(&a3[v13], Src[1], LOWORD(Src[0]));
              a3[(unsigned int)v53] = 0;
              goto LABEL_61;
            }
          }
          else if ( v36 < v49 || !a3 )
          {
            goto LABEL_61;
          }
          v23 = -1073741789;
LABEL_61:
          v13 = v36;
          goto LABEL_62;
        }
      }
    }
LABEL_31:
    ++v15;
  }
  while ( v15 < *(_WORD *)(a1 + 4) );
  v14 = v49;
  a4 = v58;
  v11 = (_DWORD *)v59;
  v9 = v48;
LABEL_33:
  if ( v8 )
  {
    if ( v13 >= v14 )
      v9 = 1;
    else
      v8[v13] = 0;
  }
  v26 = v13 + 1;
  if ( !v16 )
  {
    if ( v8 )
    {
      if ( (unsigned int)v26 >= v14 )
        v9 = 1;
      else
        v8[v26] = 0;
    }
    LODWORD(v26) = v26 + 1;
  }
  *a4 = v26;
  result = v9 != 0 ? 0xC0000023 : 0;
  if ( v11 )
    *v11 = v16;
  return result;
}
