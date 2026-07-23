/*
 * XREFs of MiPreserveBootDecisions @ 0x140713378
 * Callers:
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char *__fastcall MiPreserveBootDecisions(volatile LONG *a1, char *a2)
{
  char *result; // rax
  char *v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  char *v7; // r15
  _QWORD **v8; // r13
  void *PoolMm; // r12
  unsigned int *v10; // rax
  unsigned int v11; // r14d
  unsigned int i; // esi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 ***v15; // rax
  volatile LONG *v16; // rsi
  KIRQL v17; // al
  __int64 *v18; // rcx
  KIRQL v19; // r14
  _QWORD *v20; // r10
  __int64 **v21; // r9
  __int64 *v22; // rax
  _OWORD *v23; // rdx
  __int64 v24; // r8
  __int64 *v25; // rax
  __int128 v26; // xmm1
  __int64 **v27; // rax
  __int64 *v28; // rcx
  __int64 *v29; // rax
  void *Src; // [rsp+20h] [rbp-20h]
  __int64 v31; // [rsp+28h] [rbp-18h]
  __int64 *v32; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v33; // [rsp+38h] [rbp-8h]
  size_t Size; // [rsp+90h] [rbp+50h]
  __int64 v36; // [rsp+98h] [rbp+58h]

  result = (char *)ExAllocatePoolMm(
                     64LL,
                     0x6D0uLL,
                     1682073933,
                     KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v4 = result;
  if ( result )
  {
    memmove(result, a2, 0x6D0uLL);
    v36 = 0LL;
    v5 = (__int64 *)(v4 + 400);
    v6 = v4 - a2 + 8;
    v31 = v6;
    v7 = (char *)(a2 - v4);
    while ( 1 )
    {
      Size = 0LL;
      v33 = &v32;
      v8 = (_QWORD **)((char *)v5 + (_QWORD)v7);
      PoolMm = 0LL;
      v32 = (__int64 *)&v32;
      *(__int64 *)((char *)v5 + (_QWORD)v7 + v6) = (__int64)v5;
      *v5 = (__int64)v5;
      v10 = *(unsigned int **)((char *)v5 + (_QWORD)v7 + 328);
      Src = v10;
      if ( v10 && v10[2] > 1 )
      {
        Size = 16LL * *v10;
        PoolMm = (void *)ExAllocatePoolMm(
                           64LL,
                           Size,
                           1682073933,
                           KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
      }
      v11 = *(_DWORD *)((char *)v5 + (_QWORD)v7 - 164);
      for ( i = 0; i < v11; v33 = (__int64 **)v15 )
      {
        v13 = ExAllocatePoolMm(
                64LL,
                0x1C0uLL,
                1682073933,
                KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
        if ( !v13 )
          break;
        v14 = v33;
        v15 = (__int64 ***)(v13 + 160);
        if ( *v33 != (__int64 *)&v32 )
LABEL_29:
          __fastfail(3u);
        v15[1] = v33;
        *v15 = &v32;
        ++i;
        *v14 = v15;
      }
      v16 = a1 + 3550;
      v17 = ExAcquireSpinLockExclusive(a1 + 3550);
      v18 = v32;
      v19 = v17;
      v20 = *v8;
      if ( v32 != (__int64 *)&v32 )
      {
        while ( v20 != v8 )
        {
          v21 = (__int64 **)*v18;
          v22 = (__int64 *)v18[1];
          if ( *(__int64 **)(*v18 + 8) != v18 )
            goto LABEL_29;
          if ( (__int64 *)*v22 != v18 )
            goto LABEL_29;
          *v22 = (__int64)v21;
          v23 = v20 - 20;
          v21[1] = v22;
          v24 = 3LL;
          v25 = v18 - 20;
          do
          {
            *(_OWORD *)v25 = *v23;
            *((_OWORD *)v25 + 1) = v23[1];
            *((_OWORD *)v25 + 2) = v23[2];
            *((_OWORD *)v25 + 3) = v23[3];
            *((_OWORD *)v25 + 4) = v23[4];
            *((_OWORD *)v25 + 5) = v23[5];
            *((_OWORD *)v25 + 6) = v23[6];
            v25 += 16;
            v26 = v23[7];
            v23 += 8;
            *((_OWORD *)v25 - 1) = v26;
            --v24;
          }
          while ( v24 );
          *(_OWORD *)v25 = *v23;
          *((_OWORD *)v25 + 1) = v23[1];
          *((_OWORD *)v25 + 2) = v23[2];
          *((_OWORD *)v25 + 3) = v23[3];
          v27 = (__int64 **)v5[1];
          if ( *v27 != v5 )
            goto LABEL_29;
          v18[1] = (__int64)v27;
          *v18 = (__int64)v5;
          *v27 = v18;
          v5[1] = (__int64)v18;
          v18 = (__int64 *)v21;
          v20 = (_QWORD *)*v20;
          if ( v21 == &v32 )
            break;
        }
      }
      if ( PoolMm )
        memmove(PoolMm, Src, Size);
      v5[41] = (__int64)PoolMm;
      if ( v19 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
      else
        ExReleaseSpinLockExclusive(v16, v19);
      while ( 1 )
      {
        v28 = v32;
        if ( v32 == (__int64 *)&v32 )
          break;
        v29 = (__int64 *)*v32;
        if ( (__int64 **)v32[1] != &v32 || (__int64 *)v29[1] != v32 )
          goto LABEL_29;
        v32 = (__int64 *)*v32;
        v29[1] = (__int64)&v32;
        ExFreePoolWithTag(v28 - 20, 0);
      }
      v5 += 63;
      if ( ++v36 >= 3 )
        break;
      v6 = v31;
    }
    result = (char *)a1;
    *((_QWORD *)a1 + 1773) = v4;
  }
  return result;
}
