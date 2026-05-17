/*
 * XREFs of RtlpHpLargeAlloc @ 0x18008A18C
 * Callers:
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DF844 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 *     RtlRbInsertNodeEx @ 0x18006C700 (RtlRbInsertNodeEx.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x180089C88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180089D10 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x180089DFC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpHeapValidateProtection @ 0x18008B8C0 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHeapLogRangeReserve @ 0x180114314 (RtlpHeapLogRangeReserve.c)
 *     RtlHeapZero @ 0x1801642D0 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rsi
  BOOL v9; // edi
  unsigned int v10; // r12d
  int v11; // r14d
  __int64 i; // rcx
  __int128 v13; // xmm0
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // eax
  int v17; // eax
  __int64 v18; // r14
  int v19; // r13d
  int v20; // r14d
  __int64 v21; // r9
  __int64 v22; // r8
  bool v23; // cf
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned __int64 *v29; // rcx
  unsigned __int64 v30; // rdx
  bool v31; // al
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  unsigned __int64 v37; // rcx
  bool v38; // zf
  signed __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // [rsp+30h] [rbp-50h] BYREF
  signed __int64 v42; // [rsp+38h] [rbp-48h] BYREF
  __int64 v43; // [rsp+40h] [rbp-40h] BYREF
  __int128 v44; // [rsp+50h] [rbp-30h] BYREF
  __int128 v45; // [rsp+60h] [rbp-20h] BYREF
  __int128 v46; // [rsp+70h] [rbp-10h]
  __int16 v47; // [rsp+C8h] [rbp+48h]

  v47 = a2;
  v42 = 0LL;
  v41 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v44 = *(_OWORD *)a1;
  v6 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, &v44);
  v8 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    v9 = 0;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
      v9 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    v10 = 0;
    if ( !v9 )
      goto LABEL_25;
    v11 = 0x200000;
    for ( i = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF; ; i = a3 + (v10 << 12) )
    {
      v13 = *(_OWORD *)a1;
      v14 = *(_QWORD *)(a1 + 8);
      v15 = (unsigned __int8)BYTE1(*(_QWORD *)a1);
      v16 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v42 = i;
      v44 = v13;
      v17 = RtlpHpHeapValidateProtection(a1, v16 != 0 ? 64 : 4, v15, v14);
      if ( (int)RtlpHpAllocVA((unsigned int)&v41, (unsigned int)&v42, v11, 0x2000, v17, (__int64)&v44) < 0
        || (v45 = 0LL,
            v46 = 0LL,
            RtlpHpVaMgrCtxQuery((__int64)&unk_1801C7908, v41, (__int64)&v45),
            *(_QWORD *)v46 = a1,
            *(_QWORD *)&v44 = (a3 + 4095) >> 12,
            v18 = (_QWORD)v44 << 12,
            v43 = (_QWORD)v44 << 12,
            !(unsigned int)RtlpHpSegHeapCheckCommitLimit((_QWORD)v44 << 12, (__int64 *)a1)) )
      {
LABEL_54:
        v33 = 0LL;
        v45 = *(_OWORD *)a1;
        RtlpHpMetadataFree(v8, &v45);
        goto LABEL_23;
      }
      v19 = 4096;
      if ( v9 )
      {
        v19 = 536875008;
        v43 = v18 - ((v18 - 1) & 0x1FFFFF) + 0x1FFFFF;
        v20 = a4 & 2;
      }
      else
      {
        v20 = a4 & 2;
        if ( (a4 & 2) != 0 )
          v19 = 1073745920;
      }
      v21 = *(_QWORD *)(a1 + 8);
      v22 = (unsigned __int8)BYTE1(*(_QWORD *)a1);
      v23 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
      v45 = *(_OWORD *)a1;
      v24 = RtlpHpHeapValidateProtection(a1, v23 ? 64 : 4, v22, v21);
      if ( (int)RtlpHpAllocVA((unsigned int)&v41, (unsigned int)&v43, 0, v19, v24, (__int64)&v45) >= 0 )
        break;
      if ( !v9 )
        goto LABEL_54;
      v9 = 0;
      v37 = (v41 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
      v39 = v41 + v42 - v37;
      v38 = v41 + v42 == v37;
      v41 = v37;
      v42 = v39;
      if ( !v38 )
      {
        RtlpHpVaMgrCtxFree(&unk_1801C7908, &v41, &v42, v26);
        if ( (RtlpHpHeapFeatures & 0x10) != 0 )
          RtlpHpTlLogVAChange(0x8000LL, v42, v41, 0LL);
      }
      v41 = 0LL;
      v10 = 0;
LABEL_25:
      v11 = 0;
      if ( (unsigned __int8)(BYTE1(*(_QWORD *)a1) - 2) > 2u )
        v10 = 1;
    }
    if ( v9 && v20 )
      RtlHeapZero(v41, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v27 = v41;
    *(_QWORD *)(v8 + 32) &= 0xFFDuLL;
    v28 = v44;
    *(_QWORD *)(v8 + 24) = v27;
    *(_QWORD *)(v8 + 32) |= 2 * (v10 | (v28 << 11));
    _BitScanForward64(&v27, v42);
    *(_QWORD *)(v8 + 32) = (4 * v27) ^ (*(_QWORD *)(v8 + 32) ^ (4 * v27)) & 0xFFFFFFFFFFFFFF03uLL;
    *(_WORD *)(v8 + 24) = ((_WORD)v28 << 12) - v47;
    RtlpHpLargeLockAcquire(a1, v25);
    v29 = (unsigned __int64 *)(a1 + 72);
    v30 = *(_QWORD *)(a1 + 72);
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    {
      if ( v30 )
        v30 ^= (unsigned __int64)v29;
      else
        v30 = 0LL;
    }
    v31 = 0;
    if ( v30 )
    {
      while ( 1 )
      {
        if ( v41 < (*(_QWORD *)(v30 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v32 = *(_QWORD *)v30;
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_49;
            v32 ^= v30;
          }
          if ( !v32 )
          {
LABEL_49:
            v31 = 0;
            break;
          }
        }
        else
        {
          v32 = *(_QWORD *)(v30 + 8);
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v32 )
            {
LABEL_18:
              v31 = 1;
              break;
            }
            v32 ^= v30;
          }
          if ( !v32 )
            goto LABEL_18;
        }
        v30 = v32;
      }
    }
    RtlRbInsertNodeEx(v29, v30, v31, v8);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v42 / 4096);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), v28);
    v33 = v41;
    v41 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v34 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v34 = 2147353480LL;
    if ( *(_BYTE *)v34 )
    {
      RtlpHeapLogRangeReserve(a1, v33, v42);
      goto LABEL_23;
    }
  }
  else
  {
    v33 = 0LL;
LABEL_23:
    v35 = v41;
    if ( v41 )
    {
      v40 = (v41 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
      v38 = v41 + v42 == v40;
      v41 = v40;
      v42 = v35 + v42 - v40;
      if ( !v38 )
      {
        RtlpHpVaMgrCtxFree(&unk_1801C7908, &v41, &v42, v7);
        if ( (RtlpHpHeapFeatures & 0x10) != 0 )
          RtlpHpTlLogVAChange(0x8000LL, v42, v41, 0LL);
      }
    }
  }
  return v33;
}
