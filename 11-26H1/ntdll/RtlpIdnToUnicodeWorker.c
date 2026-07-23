/*
 * XREFs of RtlpIdnToUnicodeWorker @ 0x1800AC330
 * Callers:
 *     RtlIdnToUnicode @ 0x1800AACC0 (RtlIdnToUnicode.c)
 *     RtlCanonicalizeDomainName @ 0x1800AB600 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     punycode_decode @ 0x1800AC740 (punycode_decode.c)
 *     Normalization__IsNormalized @ 0x1800ACE40 (Normalization__IsNormalized.c)
 *     RtlpGetNormalization @ 0x1800AD560 (RtlpGetNormalization.c)
 *     memmove @ 0x180164600 (memmove.c)
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
  void *ProcessHeap; // rcx
  int v21; // r13d
  _BYTE *v22; // r9
  __int64 v23; // r8
  __int64 v24; // rcx
  __int16 v25; // dx
  int v26; // ebp
  __int64 v27; // rax
  _BYTE *v28; // r8
  wchar_t *v29; // rax
  __int64 v30; // rcx
  int v31; // r14d
  __int64 v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-48h] BYREF
  __int64 v35; // [rsp+48h] [rbp-40h]
  PVOID BaseAddress; // [rsp+98h] [rbp+10h] BYREF
  void *v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v7 = 0LL;
  v34 = 0LL;
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
    v29 = a2;
    v30 = 515LL;
    do
    {
      if ( !*v29 )
        break;
      ++v29;
      --v30;
    }
    while ( v30 );
    if ( !v30 )
      return 3221227286LL;
    a3 = 515 - v30 + 1;
  }
  v10 = Src;
  LODWORD(BaseAddress) = 511;
  v11 = a2[a3 - 1];
  LOBYTE(v33) = (v8 & 2) != 0;
  LOBYTE(v32) = (v8 & 4) != 0;
  result = punycode_decode(a2, v32, v33, (__int64)&a7, (__int64)&v34);
  if ( (int)result < 0 )
    return result;
  if ( v11 )
  {
    v13 = (int)BaseAddress;
  }
  else
  {
    v31 = (int)BaseAddress;
    if ( (int)BaseAddress >= 511 )
      return 3221227286LL;
    v10[(int)BaseAddress] = 0;
    v13 = v31 + 1;
  }
  if ( (v8 & 8) == 0 && !(_BYTE)a7 )
  {
    LOBYTE(a7) = 0;
    v14 = -1LL;
    if ( (v8 & 4) != 0 )
    {
      BaseAddress = 0LL;
      v15 = (v34 - (__int64)v10) >> 1;
      if ( !v10 || (int)v15 < -1 || (int)RtlpGetNormalization(1LL, &BaseAddress) < 0 )
        return 3221227286LL;
      if ( (_DWORD)v15 == -1 )
      {
        v16 = -1LL;
        do
          v17 = v10[++v16] == 0;
        while ( !v17 );
        LODWORD(v15) = v16 + 1;
      }
      if ( (int)Normalization__IsNormalized(BaseAddress, v10, (unsigned int)v15, &a7) < 0 || !(_BYTE)a7 )
        return 3221227286LL;
    }
    v18 = (v34 - (__int64)v10) >> 1;
    if ( v18 < v13 - (v11 == 0) )
    {
      v19 = v34 + 2;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      v21 = v13 - (2 - (v11 != 0)) - v18;
      v35 = v21;
      BaseAddress = RtlAllocateHeap_0(ProcessHeap, 8u, v21);
      v22 = BaseAddress;
      if ( !BaseAddress )
        return 3221225495LL;
      v23 = v35;
      if ( v35 > 0 )
      {
        v24 = 0LL;
        do
        {
          v25 = *(_WORD *)(v19 + 2 * v24);
          if ( (unsigned __int16)(v25 - 65) <= 0x19u )
          {
            *(_WORD *)(v19 + 2 * v24) = v25 + 32;
            v22[v24] = 1;
          }
          ++v24;
        }
        while ( v24 < v23 );
      }
      v26 = v8 & 1;
      v34 = 0LL;
      if ( v19 && v21 >= -1 )
      {
        if ( (int)RtlpGetNormalization(((v26 ^ 1u) << 8) + 13, &v34) >= 0 )
        {
          if ( v21 == -1 )
          {
            do
              v17 = *(_WORD *)(v19 + 2 * v14++ + 2) == 0;
            while ( !v17 );
            v21 = v14 + 1;
          }
          if ( (int)Normalization__IsNormalized(v34, v19, (unsigned int)v21, &a7) >= 0 && (_BYTE)a7 )
          {
            v27 = v35;
            v28 = BaseAddress;
            if ( v35 > 0 )
            {
              do
              {
                if ( v28[v7] == 1 )
                  *(_WORD *)(v19 + 2 * v7) -= 32;
                ++v7;
              }
              while ( v7 < v27 );
            }
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v28);
            goto LABEL_43;
          }
        }
        v22 = BaseAddress;
      }
      RtlpSysVolFree(v22);
      return 3221227286LL;
    }
  }
LABEL_43:
  if ( v37 && *v9 )
  {
    if ( v13 > *v9 )
      return 3221225507LL;
    memmove(v37, v10, 2LL * v13);
  }
  *v9 = v13;
  return 0LL;
}
