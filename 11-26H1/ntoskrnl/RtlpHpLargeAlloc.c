/*
 * XREFs of RtlpHpLargeAlloc @ 0x140353E20
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x140351F7C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpFreeVA @ 0x140352258 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403526A0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x140354258 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x140356600 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLargeLockRelease @ 0x140356624 (RtlpHpLargeLockRelease.c)
 *     RtlpHpAllocVA @ 0x1403660F0 (RtlpHpAllocVA.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlHeapZero @ 0x140736E90 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__int128 *a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  BOOLEAN v4; // bl
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
  char v20; // r14
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  bool v27; // zf
  signed __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  signed __int64 v30; // [rsp+38h] [rbp-48h] BYREF
  __int64 v31; // [rsp+40h] [rbp-40h] BYREF
  __int128 v32; // [rsp+50h] [rbp-30h] BYREF
  __int128 v33; // [rsp+60h] [rbp-20h] BYREF
  __int128 v34; // [rsp+70h] [rbp-10h]
  __int16 v35; // [rsp+C8h] [rbp+48h]

  v35 = a2;
  v4 = 0;
  v30 = 0LL;
  v6 = a4;
  v31 = 0LL;
  v29 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v32 = *a1;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v32);
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
      v30 = i;
      v32 = v14;
      if ( (int)RtlpHpAllocVA(
                  (unsigned int)&v29,
                  (unsigned int)&v30,
                  v12,
                  0x2000,
                  (*((_DWORD *)a1 + 5) & 0x40000000) != 0 ? 64 : 4,
                  (__int64)&v32) < 0
        || (v33 = 0LL,
            v34 = 0LL,
            RtlpHpVaMgrCtxQuery((__int64)&ExpUuidLock.TrapFrame, v29, (__int64)&v33),
            *(_QWORD *)v34 = a1,
            *(_QWORD *)&v32 = (a3 + 4095) >> 12,
            v31 = (_QWORD)v32 << 12,
            !(unsigned int)RtlpHpSegHeapCheckCommitLimit((_QWORD)v32 << 12, a1)) )
      {
LABEL_23:
        v23 = 0LL;
        v33 = *a1;
        RtlpHpMetadataFree(v9, &v33);
        goto LABEL_24;
      }
      v15 = 4096;
      if ( v10 )
      {
        v15 = 536875008;
        v31 += 0x1FFFFF - ((v31 - 1) & 0x1FFFFF);
        v16 = v6 & 2;
      }
      else
      {
        v16 = v6 & 2;
        if ( v16 )
          v15 = 1073745920;
      }
      v33 = *a1;
      if ( (int)RtlpHpAllocVA(
                  (unsigned int)&v29,
                  (unsigned int)&v31,
                  0,
                  v15,
                  (*((_DWORD *)a1 + 5) & 0x40000000) != 0 ? 64 : 4,
                  (__int64)&v33) >= 0 )
        break;
      if ( !v10 )
        goto LABEL_23;
      v10 = 0;
      v26 = (v29 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
      v28 = v29 + v30 - v26;
      v27 = v29 + v30 == v26;
      v29 = v26;
      v30 = v28;
      if ( !v27 )
        RtlpHpVaMgrCtxFree((__int64)&ExpUuidLock.TrapFrame, &v29, (unsigned __int64 *)&v30);
      v6 = a4;
      v11 = 0;
      v29 = 0LL;
LABEL_35:
      if ( (unsigned __int8)(BYTE1(*(_QWORD *)a1) - 2) > 2u )
        v11 = 1;
      v12 = 0;
    }
    if ( v10 && v16 )
      RtlHeapZero(v29, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v17 = v32;
    *(_QWORD *)(v9 + 24) = v29;
    v18 = *(_DWORD *)(v9 + 32) & 0xFFD | (2 * (v11 | (v17 << 11)));
    *(_QWORD *)(v9 + 32) = v18;
    _BitScanForward64(&v19, v30);
    *(_QWORD *)(v9 + 32) = (4 * v19) ^ (v18 ^ (4 * v19)) & 0xFFFFFFFFFFFFFF03uLL;
    *(_WORD *)(v9 + 24) = ((_WORD)v17 << 12) - v35;
    v20 = RtlpHpLargeLockAcquire(a1);
    v21 = *((_QWORD *)a1 + 9);
    if ( (a1[5] & 1) != 0 )
    {
      if ( v21 )
        v21 ^= (unsigned __int64)a1 + 72;
      else
        v21 = 0LL;
    }
    if ( v21 )
    {
      while ( 1 )
      {
        if ( v29 >= (*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v22 = *(_QWORD *)(v21 + 8);
          if ( (a1[5] & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_29;
            v22 ^= v21;
          }
          if ( !v22 )
          {
LABEL_29:
            v4 = 1;
            break;
          }
        }
        else
        {
          v22 = *(_QWORD *)v21;
          if ( (a1[5] & 1) != 0 )
          {
            if ( !v22 )
              break;
            v22 ^= v21;
          }
          if ( !v22 )
            break;
        }
        v21 = v22;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)((char *)a1 + 72), (PRTL_BALANCED_NODE)v21, v4, (PRTL_BALANCED_NODE)v9);
    LOBYTE(v25) = v20;
    RtlpHpLargeLockRelease(a1, v25);
    _InterlockedAdd64((volatile signed __int64 *)a1 + 11, v30 / 4096);
    _InterlockedAdd64((volatile signed __int64 *)a1 + 12, v17);
    return v29;
  }
  else
  {
    v23 = 0LL;
LABEL_24:
    if ( v29 )
    {
      v33 = *a1;
      RtlpHpFreeVA(&v29, (unsigned __int64 *)&v30, 0x8000LL, &v33);
    }
  }
  return v23;
}
