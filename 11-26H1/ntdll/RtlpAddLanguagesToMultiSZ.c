/*
 * XREFs of RtlpAddLanguagesToMultiSZ @ 0x180125D34
 * Callers:
 *     RtlpMUIGetAllInstalledLang @ 0x180037134 (RtlpMUIGetAllInstalledLang.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x180125D34 (RtlpAddLanguagesToMultiSZ.c)
 * Callees:
 *     LdrpCalcAllocSize @ 0x180001DEC (LdrpCalcAllocSize.c)
 *     RtlpLangNameInMultiSzString @ 0x18000AEC0 (RtlpLangNameInMultiSzString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800CCE50 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x180125D34 (RtlpAddLanguagesToMultiSZ.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

char __fastcall RtlpAddLanguagesToMultiSZ(
        const void **a1,
        unsigned int *a2,
        unsigned int *a3,
        _WORD *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7)
{
  char v9; // r13
  void *Heap_0; // rax
  int v14; // r15d
  unsigned int v15; // eax
  void *v16; // rax
  const void *v17; // rbx
  char *v18; // rsi
  __int64 v19; // rbx
  int v20; // eax
  _QWORD *v21; // r15
  __int64 v22; // rsi
  unsigned __int16 v23; // bx
  int v24; // eax
  __int128 *v25; // r9
  _DWORD v26[2]; // [rsp+40h] [rbp-51h] BYREF
  void *Src; // [rsp+48h] [rbp-49h]
  __int64 v28; // [rsp+50h] [rbp-41h]
  wchar_t **v29; // [rsp+58h] [rbp-39h]
  __int64 v30; // [rsp+60h] [rbp-31h]
  void *v31; // [rsp+68h] [rbp-29h]
  __int128 v32; // [rsp+70h] [rbp-21h] BYREF
  __int64 v33; // [rsp+80h] [rbp-11h]
  int v34; // [rsp+88h] [rbp-9h]

  v29 = (wchar_t **)a1;
  v30 = a5;
  v28 = a6;
  v26[1] = 0;
  v33 = 0LL;
  v9 = 1;
  v34 = 0;
  v32 = 0LL;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap_0 = (void *)RtlAllocateHeap_0();
    v31 = Heap_0;
    if ( !Heap_0 )
      return v9;
    Src = Heap_0;
    v26[0] = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, (__int64)v26) >= 0 )
    {
      v14 = LOWORD(v26[0]);
      v15 = *a2 + LOWORD(v26[0]) + 4;
      if ( v15 >= LOWORD(v26[0]) && v15 >= *a2 )
      {
        if ( v15 <= *a3 )
          goto LABEL_17;
        if ( LdrpCalcAllocSize(*a3, 2uLL) )
        {
          v16 = (void *)RtlAllocateHeap_0();
          v17 = v16;
          if ( v16 )
          {
            memmove(v16, *a1, *a2);
            RtlFreeHeap_0();
            *a1 = v17;
            *a3 *= 2;
LABEL_17:
            v18 = (char *)*v29 + *a2;
            if ( RtlpLangNameInMultiSzString(*v29, (wchar_t *)Src) )
            {
              v21 = (_QWORD *)v28;
            }
            else
            {
              v19 = LOWORD(v26[0]);
              memmove(v18, Src, LOWORD(v26[0]));
              v20 = v14 + 2;
              v21 = (_QWORD *)v28;
              *(_WORD *)&v18[v19] = 0;
              *a2 += v20;
              ++*v21;
            }
            if ( (*a4 & 0x402) != 0 )
            {
              v22 = v30;
              v23 = 0;
              while ( 1 )
              {
                v24 = ((unsigned __int16)a4[4] >> (2 * v23)) & 3;
                if ( v24 == 2 )
                  break;
                if ( v24 == 1 )
                {
                  WORD2(v32) = a4[v23 + 6];
                  goto LABEL_28;
                }
                if ( v24 == 3 )
                {
                  WORD3(v32) = a4[v23 + 6];
LABEL_28:
                  v25 = &v32;
LABEL_30:
                  v9 = RtlpAddLanguagesToMultiSZ(
                         (_DWORD)v29,
                         (_DWORD)a2,
                         (_DWORD)a3,
                         (_DWORD)v25,
                         v22,
                         (__int64)v21,
                         a7 + 1);
                  if ( !v9 )
                    goto LABEL_32;
                }
                if ( ++v23 >= 4u )
                  goto LABEL_32;
              }
              v25 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 16LL) + 28LL * (__int16)a4[v23 + 6]);
              goto LABEL_30;
            }
            goto LABEL_32;
          }
          RtlFreeHeap_0();
        }
      }
    }
LABEL_32:
    RtlFreeHeap_0();
    return v9;
  }
  return 0;
}
