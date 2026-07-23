/*
 * XREFs of MiGetFileOnlyRanges @ 0x1406EDB28
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x14086C784 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetNextNonGapPfnPage @ 0x1406EDDA8 (MiGetNextNonGapPfnPage.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char *__fastcall MiGetFileOnlyRanges(__int16 *a1, char a2, _QWORD *a3)
{
  char v3; // al
  char *v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r13
  char v8; // r12
  __int64 v10; // rdx
  void *volatile *v11; // rbp
  __int64 v12; // r8
  char v13; // al
  __int64 v14; // r8
  char v15; // bl
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  size_t v21; // rsi
  __int64 v22; // rbx
  char *PoolMm; // rax
  char *v24; // r12
  unsigned __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h] BYREF
  void *volatile *v27; // [rsp+30h] [rbp-48h]
  __int16 v30; // [rsp+98h] [rbp+20h]

  v3 = MiFlags;
  v4 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  v6 = 0LL;
  v7 = -1LL;
  v8 = a2;
  if ( (v3 & 0x30) == 0 )
    return 0LL;
  v30 = *a1;
  v11 = MiSystemVaTypeToVm(3);
  v27 = v11;
  v26 = 0LL;
LABEL_4:
  v13 = MiLockWorkingSetShared((__int64)v11, v10, v12);
  v25 = 0LL;
  LOBYTE(v14) = v13;
  v15 = v13;
  v16 = ((__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __int64, _QWORD))MiGetNextNonGapPfnPage)(
          &v26,
          &v25,
          v14,
          0LL);
  LOBYTE(v17) = v15;
  v18 = v16;
  MiUnlockWorkingSetShared((__int64)v11, v17);
  if ( v18 )
  {
    v12 = 0xFFFFDE0000000000uLL;
    v19 = 48 * ((v18 + 0x220000000000LL) / 0x30uLL) - 0x220000000000LL;
    v10 = (v18 + v25 + 0x220000000000LL) / 0x30;
    v20 = 48 * v10 - 0x220000000000LL;
    v25 = v20;
    v21 = 16 * v6;
    while ( 1 )
    {
      if ( v19 >= v20 )
      {
        v11 = v27;
        goto LABEL_4;
      }
      if ( _bittest64((const signed __int64 *)(v19 + 40), 0x35u) )
      {
        if ( (v8 & 2) != 0 || (v10 = 1023LL, ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FF) == v30) )
        {
          v10 = (unsigned __int128)((__int64)(v19 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v22 = (__int64)(v19 + 0x220000000000LL) / 48;
          if ( v7 == -1 || v7 + 1 != v22 )
          {
            if ( v6 == v5 )
            {
              if ( v5 )
                v5 *= 2LL;
              else
                v5 = 16LL;
              PoolMm = (char *)ExAllocatePoolMm(
                                 64LL,
                                 16 * v5,
                                 1716546893,
                                 KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
              v24 = PoolMm;
              if ( !PoolMm && v4 )
              {
                ExFreePoolWithTag(v4, 0);
                return 0LL;
              }
              if ( v6 )
              {
                memmove(PoolMm, v4, v21);
                ExFreePoolWithTag(v4, 0);
              }
              v4 = v24;
              v8 = a2;
            }
            *(_QWORD *)&v4[v21 + 8] = 4096LL;
            ++v6;
            *(_QWORD *)&v4[v21] = v22 << 12;
            v21 += 16LL;
          }
          else
          {
            *(_QWORD *)&v4[v21 - 8] += 4096LL;
          }
          v20 = v25;
          v7 = (__int64)(v19 + 0x220000000000LL) / 48;
        }
      }
      v19 += 48LL;
    }
  }
  *a3 = v6;
  return v4;
}
