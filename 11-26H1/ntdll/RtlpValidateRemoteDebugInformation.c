/*
 * XREFs of RtlpValidateRemoteDebugInformation @ 0x180090470
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpValidateRange @ 0x1800908B4 (RtlpValidateRange.c)
 *     RtlULongLongMult @ 0x1800E2354 (RtlULongLongMult.c)
 */

__int64 __fastcall RtlpValidateRemoteDebugInformation(_QWORD *a1, __int16 a2, int a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // ebx
  __int64 Heap_0; // rax
  __int64 v10; // r8
  _WORD *v11; // r14
  _DWORD *v12; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  _DWORD *v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned int *v20; // r8
  unsigned __int64 v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  unsigned int i; // r14d
  unsigned int *v25; // rcx
  __int64 v26; // r10
  __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // kr00_8
  __int64 v31; // r8
  __int64 v32; // r10
  __int64 v33; // [rsp+30h] [rbp-20h]
  _DWORD v34[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v35; // [rsp+40h] [rbp-10h]
  __int64 v36; // [rsp+80h] [rbp+30h] BYREF

  v4 = 0;
  v5 = a4;
  v34[1] = 0;
  if ( !a1[14] && !a1[12] && !a1[15] && !a1[18] )
    return v4;
  if ( !a4 )
    return (unsigned int)-1073741823;
  Heap_0 = RtlAllocateHeap_0();
  if ( Heap_0 )
  {
    v10 = a1[14];
    v34[0] = v5;
    v35 = Heap_0;
    if ( v10 )
    {
      if ( !(unsigned __int8)RtlpValidateRange(a3, v5, v10, 8, (__int64)v34) )
        goto LABEL_10;
      v22 = (_DWORD *)a1[14];
      v36 = 0LL;
      v23 = 96 * *v22;
      if ( !is_mul_ok((unsigned int)*v22, 0x60uLL) )
        goto LABEL_10;
      v36 = 96LL * (unsigned int)*v22;
      if ( !(unsigned __int8)RtlpValidateRange(a3, v5, (int)v22 + 8, v23, (__int64)v34) )
        goto LABEL_10;
      for ( i = 0; ; ++i )
      {
        v25 = (unsigned int *)a1[14];
        if ( i >= *v25 )
          break;
        v26 = 96LL * i;
        v33 = v26;
        if ( *(unsigned int *)((char *)v25 + v26 + 44) )
        {
          if ( (int)RtlULongLongMult(*(unsigned int *)((char *)v25 + v26 + 44), 32LL, &v36) < 0
            || !(unsigned __int8)RtlpValidateRange(a3, v5, *(_QWORD *)(a1[14] + v32 + 88), v36, (__int64)v34) )
          {
            goto LABEL_10;
          }
          v26 = v33;
        }
        v27 = a1[14];
        v28 = *(_DWORD *)(v27 + v26 + 40);
        if ( v28 )
        {
          v36 = 0LL;
          v30 = v28;
          v29 = 72LL * v28;
          if ( !is_mul_ok(v30, 0x48uLL) )
            goto LABEL_10;
          v31 = *(_QWORD *)(v27 + v26 + 80);
          v36 = v29;
          if ( !(unsigned __int8)RtlpValidateRange(a3, v5, v31, v29, (__int64)v34) )
            goto LABEL_10;
        }
      }
    }
    v11 = (_WORD *)a1[12];
    if ( !v11 )
      goto LABEL_17;
    if ( (a2 & 0x100) != 0 )
    {
      while ( (unsigned __int8)RtlpValidateRange(a3, v5, (_DWORD)v11, 2, (__int64)v34)
           && (!*v11 || (unsigned __int8)RtlpValidateRange(a3, v5, (int)v11 + 2, 318, (__int64)v34)) )
      {
        v14 = (unsigned __int16)*v11;
        v11 = (_WORD *)((char *)v11 + v14);
        if ( !(_WORD)v14 )
          goto LABEL_17;
      }
      goto LABEL_10;
    }
    if ( (unsigned __int8)RtlpValidateRange(a3, v5, a1[12], 8, (__int64)v34) )
    {
      v12 = (_DWORD *)a1[12];
      if ( is_mul_ok((unsigned int)*v12, 0x128uLL) )
      {
        if ( (unsigned __int8)RtlpValidateRange(a3, v5, (int)v12 + 8, 296 * *v12, (__int64)v34) )
        {
LABEL_17:
          v15 = a1[15];
          if ( !v15
            || (unsigned __int8)RtlpValidateRange(a3, v5, v15, 8, (__int64)v34)
            && (v16 = (_DWORD *)a1[15], is_mul_ok((unsigned int)*v16, 0x30uLL))
            && (unsigned __int8)RtlpValidateRange(a3, v5, (int)v16 + 8, 48 * *v16, (__int64)v34) )
          {
            v17 = a1[13];
            if ( !v17
              || (unsigned __int8)RtlpValidateRange(a3, v5, v17, 24, (__int64)v34)
              && (v18 = a1[13], is_mul_ok(*(unsigned int *)(v18 + 20), 0x110uLL))
              && (unsigned __int8)RtlpValidateRange(a3, v5, (int)v18 + 24, 272 * *(_DWORD *)(v18 + 20), (__int64)v34) )
            {
              v19 = a1[18];
              if ( !v19 )
                goto LABEL_11;
              if ( (unsigned __int8)RtlpValidateRange(a3, v5, v19, 8, (__int64)v34) )
              {
                v20 = (unsigned int *)a1[18];
                v21 = *v20;
                if ( v21 >= 8 )
                {
                  if ( (unsigned __int8)RtlpValidateRange(a3, v5, (int)v20 + 8, (int)v21 - 8, (__int64)v34) )
                    goto LABEL_11;
                }
              }
            }
          }
        }
      }
    }
LABEL_10:
    v4 = -1073741823;
LABEL_11:
    RtlFreeHeap_0();
    return v4;
  }
  return 3221225626LL;
}
