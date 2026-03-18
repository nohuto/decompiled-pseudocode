/*
 * XREFs of RtlpHpLargeAlloc @ 0x140351D9C
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140397A80 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x140520DB8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x14034FEFC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpFreeVA @ 0x1403501D8 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrCtxQuery @ 0x140350620 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1403521D4 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpMetadataAlloc @ 0x140352250 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x1403524BC (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x140354858 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLargeLockRelease @ 0x14035487C (RtlpHpLargeLockRelease.c)
 *     RtlpHpAllocVA @ 0x140364350 (RtlpHpAllocVA.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlHeapZero @ 0x1407322C0 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__int128 *a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // bl
  char v6; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  BOOL v10; // esi
  unsigned int v11; // r12d
  int v12; // r8d
  __int64 i; // rcx
  __int128 v14; // xmm0
  int v15; // r9d
  int v16; // r14d
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  char v21; // r14
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  bool v28; // zf
  signed __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  signed __int64 v31; // [rsp+38h] [rbp-48h] BYREF
  __int64 v32; // [rsp+40h] [rbp-40h] BYREF
  __int128 v33; // [rsp+50h] [rbp-30h] BYREF
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int128 v35; // [rsp+70h] [rbp-10h]
  __int16 v36; // [rsp+C8h] [rbp+48h]

  v36 = a2;
  v4 = 0;
  v31 = 0LL;
  v6 = a4;
  v32 = 0LL;
  v30 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v33 = *a1;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v33);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    v10 = 0;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    if ( (*((_DWORD *)a1 + 5) & 0x4000000) != 0 )
      v10 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    v11 = 0;
    if ( !v10 )
      goto LABEL_35;
    v12 = 0x200000;
    for ( i = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF; ; i = a3 + (v11 << 12) )
    {
      v14 = *a1;
      v31 = i;
      v33 = v14;
      if ( (int)RtlpHpAllocVA(
                  (unsigned int)&v30,
                  (unsigned int)&v31,
                  v12,
                  0x2000,
                  (*((_DWORD *)a1 + 5) & 0x40000000) != 0 ? 64 : 4,
                  (__int64)&v33) < 0
        || (v34 = 0LL,
            v35 = 0LL,
            RtlpHpVaMgrCtxQuery((__int64)&ExpUuidLock.FirstArgument, v30, (__int64)&v34),
            *(_QWORD *)v35 = a1,
            *(_QWORD *)&v33 = (a3 + 4095) >> 12,
            v32 = (_QWORD)v33 << 12,
            !(unsigned int)RtlpHpSegHeapCheckCommitLimit((_QWORD)v33 << 12, a1)) )
      {
LABEL_23:
        v24 = 0LL;
        v34 = *a1;
        RtlpHpMetadataFree(v9, &v34);
        goto LABEL_24;
      }
      v15 = 4096;
      if ( v10 )
      {
        v15 = 536875008;
        v32 += 0x1FFFFF - ((v32 - 1) & 0x1FFFFF);
        v16 = v6 & 2;
      }
      else
      {
        v16 = v6 & 2;
        if ( v16 )
          v15 = 1073745920;
      }
      v34 = *a1;
      if ( (int)RtlpHpAllocVA(
                  (unsigned int)&v30,
                  (unsigned int)&v32,
                  0,
                  v15,
                  (*((_DWORD *)a1 + 5) & 0x40000000) != 0 ? 64 : 4,
                  (__int64)&v34) >= 0 )
        break;
      if ( !v10 )
        goto LABEL_23;
      v10 = 0;
      v27 = (v30 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
      v29 = v30 + v31 - v27;
      v28 = v30 + v31 == v27;
      v30 = v27;
      v31 = v29;
      if ( !v28 )
        RtlpHpVaMgrCtxFree((__int64)&ExpUuidLock.FirstArgument, &v30, (unsigned __int64 *)&v31);
      v6 = a4;
      v11 = 0;
      v30 = 0LL;
LABEL_35:
      if ( (unsigned __int8)(BYTE1(*(_QWORD *)a1) - 2) > 2u )
        v11 = 1;
      v12 = 0;
    }
    if ( v10 && v16 )
      RtlHeapZero(v30, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v17 = v33;
    *(_QWORD *)(v9 + 24) = v30;
    v18 = *(_DWORD *)(v9 + 32) & 0xFFD | (2 * (v11 | (v17 << 11)));
    *(_QWORD *)(v9 + 32) = v18;
    _BitScanForward64(&v19, v31);
    *(_QWORD *)(v9 + 32) = (4 * v19) ^ (v18 ^ (4 * v19)) & 0xFFFFFFFFFFFFFF03uLL;
    *(_WORD *)(v9 + 24) = ((_WORD)v17 << 12) - v36;
    v21 = RtlpHpLargeLockAcquire(a1);
    v22 = *((_QWORD *)a1 + 9);
    if ( (a1[5] & 1) != 0 )
    {
      if ( v22 )
        v22 ^= (unsigned __int64)a1 + 72;
      else
        v22 = 0LL;
    }
    if ( v22 )
    {
      while ( 1 )
      {
        if ( v30 >= (*(_QWORD *)(v22 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v23 = *(_QWORD *)(v22 + 8);
          if ( (a1[5] & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_29;
            v23 ^= v22;
          }
          if ( !v23 )
          {
LABEL_29:
            v4 = 1;
            break;
          }
        }
        else
        {
          v23 = *(_QWORD *)v22;
          if ( (a1[5] & 1) != 0 )
          {
            if ( !v23 )
              break;
            v23 ^= v22;
          }
          if ( !v23 )
            break;
        }
        v22 = v23;
      }
    }
    LOBYTE(v20) = v4;
    RtlRbInsertNodeEx((char *)a1 + 72, v22, v20, v9);
    LOBYTE(v26) = v21;
    RtlpHpLargeLockRelease(a1, v26);
    _InterlockedAdd64((volatile signed __int64 *)a1 + 11, v31 / 4096);
    _InterlockedAdd64((volatile signed __int64 *)a1 + 12, v17);
    return v30;
  }
  else
  {
    v24 = 0LL;
LABEL_24:
    if ( v30 )
    {
      v34 = *a1;
      RtlpHpFreeVA(&v30, (unsigned __int64 *)&v31, 0x8000LL, &v34);
    }
  }
  return v24;
}
