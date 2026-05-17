/*
 * XREFs of RtlpIdnToUnicodeWorker @ 0x1800AD200
 * Callers:
 *     RtlIdnToUnicode @ 0x1800ABB90 (RtlIdnToUnicode.c)
 *     RtlCanonicalizeDomainName @ 0x1800AC4D0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     punycode_decode @ 0x1800AD610 (punycode_decode.c)
 *     Normalization__IsNormalized @ 0x1800ADD10 (Normalization__IsNormalized.c)
 *     RtlpGetNormalization @ 0x1800AE430 (RtlpGetNormalization.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpIdnToUnicodeWorker(int a1, wchar_t *a2, int a3, void *a4, int *a5, void *Src, __int64 a7)
{
  __int64 v7; // r12
  char v8; // bp
  int *v9; // r15
  _WORD *v10; // rdi
  wchar_t v11; // r13
  __int64 result; // rax
  int v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // r13d
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rcx
  __int16 v24; // dx
  int v25; // ebp
  __int64 v26; // rax
  __int64 v27; // r8
  wchar_t *v28; // rax
  __int64 v29; // rcx
  int v30; // r14d
  __int64 v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+40h] [rbp-48h] BYREF
  __int64 v34; // [rsp+48h] [rbp-40h]
  __int64 Heap_0; // [rsp+98h] [rbp+10h] BYREF
  void *v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v7 = 0LL;
  v33 = 0LL;
  v8 = a1;
  LOBYTE(a7) = 0;
  if ( !a2 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 || *a5 < 0 || a3 < -1 || *a5 > 0 && !a4 )
    return 3221225485LL;
  if ( (a1 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( a3 == -1 )
  {
    v28 = a2;
    v29 = 515LL;
    do
    {
      if ( !*v28 )
        break;
      ++v28;
      --v29;
    }
    while ( v29 );
    if ( !v29 )
      return 3221227286LL;
    a3 = 515 - v29 + 1;
  }
  v10 = Src;
  LODWORD(Heap_0) = 511;
  v11 = a2[a3 - 1];
  LOBYTE(v32) = (v8 & 2) != 0;
  LOBYTE(v31) = (v8 & 4) != 0;
  result = punycode_decode(a2, v31, v32, (__int64)&a7, (__int64)&v33);
  if ( (int)result < 0 )
    return result;
  if ( v11 )
  {
    v13 = Heap_0;
  }
  else
  {
    v30 = Heap_0;
    if ( (int)Heap_0 >= 511 )
      return 3221227286LL;
    v10[(int)Heap_0] = 0;
    v13 = v30 + 1;
  }
  if ( (v8 & 8) == 0 && !(_BYTE)a7 )
  {
    LOBYTE(a7) = 0;
    v14 = -1LL;
    if ( (v8 & 4) != 0 )
    {
      Heap_0 = 0LL;
      v15 = (v33 - (__int64)v10) >> 1;
      if ( !v10 || (int)v15 < -1 || (int)RtlpGetNormalization(1LL, &Heap_0) < 0 )
        return 3221227286LL;
      if ( (_DWORD)v15 == -1 )
      {
        v16 = -1LL;
        do
          v17 = v10[++v16] == 0;
        while ( !v17 );
        LODWORD(v15) = v16 + 1;
      }
      if ( (int)Normalization__IsNormalized(Heap_0, v10, (unsigned int)v15, &a7) < 0 || !(_BYTE)a7 )
        return 3221227286LL;
    }
    v18 = (v33 - (__int64)v10) >> 1;
    if ( v18 < v13 - (v11 == 0) )
    {
      v19 = v33 + 2;
      v20 = v13 - (2 - (v11 != 0)) - v18;
      v34 = v20;
      Heap_0 = RtlAllocateHeap_0();
      v21 = Heap_0;
      if ( !Heap_0 )
        return 3221225495LL;
      v22 = v34;
      if ( v34 > 0 )
      {
        v23 = 0LL;
        do
        {
          v24 = *(_WORD *)(v19 + 2 * v23);
          if ( (unsigned __int16)(v24 - 65) <= 0x19u )
          {
            *(_WORD *)(v19 + 2 * v23) = v24 + 32;
            *(_BYTE *)(v21 + v23) = 1;
          }
          ++v23;
        }
        while ( v23 < v22 );
      }
      v25 = v8 & 1;
      v33 = 0LL;
      if ( v19 && v20 >= -1 )
      {
        if ( (int)RtlpGetNormalization(((v25 ^ 1u) << 8) + 13, &v33) >= 0 )
        {
          if ( v20 == -1 )
          {
            do
              v17 = *(_WORD *)(v19 + 2 * v14++ + 2) == 0;
            while ( !v17 );
            v20 = v14 + 1;
          }
          if ( (int)Normalization__IsNormalized(v33, v19, (unsigned int)v20, &a7) >= 0 && (_BYTE)a7 )
          {
            v26 = v34;
            v27 = Heap_0;
            if ( v34 > 0 )
            {
              do
              {
                if ( *(_BYTE *)(v27 + v7) == 1 )
                  *(_WORD *)(v19 + 2 * v7) -= 32;
                ++v7;
              }
              while ( v7 < v26 );
            }
            RtlFreeHeap_0();
            goto LABEL_43;
          }
        }
        v21 = Heap_0;
      }
      RtlpSysVolFree(v21);
      return 3221227286LL;
    }
  }
LABEL_43:
  if ( v36 && *v9 )
  {
    if ( v13 > *v9 )
      return 3221225507LL;
    memmove(v36, v10, 2LL * v13);
  }
  *v9 = v13;
  return 0LL;
}
