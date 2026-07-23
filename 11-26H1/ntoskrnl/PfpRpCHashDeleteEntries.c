/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x140AA9288
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x140B04C68 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     PfLockSharedAcquire @ 0x1404ABEA0 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x1404AE4B4 (PfLockSharedRelease.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4, _QWORD *a5)
{
  volatile signed __int64 *v5; // r13
  __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  char v12; // dl
  unsigned int v13; // esi
  char v14; // cl
  unsigned int v15; // eax
  char v16; // r12
  unsigned int v17; // edi
  char *v18; // r14
  char *v19; // rbp
  size_t v20; // r15
  int v21; // r13d
  char *v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v29; // eax
  _QWORD *v30; // rcx
  char *v31; // rax
  int v32; // r9d
  __int64 i; // rdx
  __int64 v34; // r9
  signed __int32 v35[8]; // [rsp+0h] [rbp-98h] BYREF
  int v36; // [rsp+20h] [rbp-78h]
  char *Pool2; // [rsp+28h] [rbp-70h]
  struct _KTHREAD *v38; // [rsp+30h] [rbp-68h]
  PVOID P[2]; // [rsp+38h] [rbp-60h]
  int v40; // [rsp+A0h] [rbp+8h]
  __int64 v41; // [rsp+A0h] [rbp+8h]
  unsigned int v44; // [rsp+B8h] [rbp+20h]

  v44 = (unsigned int)a4;
  v5 = (volatile signed __int64 *)a3;
  v38 = (struct _KTHREAD *)(a1 + 128);
  v6 = a2;
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 128), a2, a3, a4);
  v7 = 0;
  v8 = *(_DWORD *)(v6 + 12) << *(_DWORD *)(v6 + 8);
  if ( v8 )
  {
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      PfLockSharedAcquire(v5, v9, v10, v11);
      v12 = -1;
      *(_OWORD *)P = *(_OWORD *)v6;
      v36 = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(v6 + 8)));
      v13 = 1 << v36;
      v14 = -1;
      v15 = 1 << v36;
      if ( 1 << v36 )
      {
        do
        {
          ++v14;
          v15 >>= 1;
        }
        while ( v15 );
      }
      v16 = v14 + 1;
      if ( ((v13 - 1) & v13) == 0 )
        v16 = v14;
      v17 = v8 >> v16;
      if ( ((v17 - 1) & v17) != 0 )
      {
        for ( ; v17; v17 >>= 1 )
          ++v12;
        v17 = 1 << v12;
      }
      v40 = 0;
      memset_0(Pool2, 0, (unsigned __int64)v17 << v16);
      v18 = (char *)P[0];
      v19 = (char *)P[0] + ((unsigned __int64)HIDWORD(P[1]) << v36);
      if ( P[0] < v19 )
      {
        v20 = v13;
        v21 = 0;
        v22 = Pool2;
        while ( 1 )
        {
          v23 = *(_QWORD *)v18;
          if ( *(_QWORD *)v18 )
          {
            if ( !a5 )
              goto LABEL_26;
            v29 = 0;
            if ( v44 )
            {
              v30 = a5;
              while ( *v30 != v23 )
              {
                ++v29;
                ++v30;
                if ( v29 >= v44 )
                  goto LABEL_25;
              }
              goto LABEL_14;
            }
LABEL_25:
            if ( v29 >= v44 )
            {
LABEL_26:
              if ( v17 )
              {
                v41 = *(_QWORD *)v18;
                v32 = 442596621 * (unsigned __int8)v23
                    + 37
                    * (BYTE6(v41)
                     + 37 * (BYTE5(v41) + 37 * (BYTE4(v41) + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * BYTE1(v41))))))
                    + HIBYTE(v41)
                    - 877075889;
                for ( i = 0LL; ; v32 = i + v34 )
                {
                  v34 = (v17 - 1) & v32;
                  v31 = &Pool2[v34 << v16];
                  if ( !*(_QWORD *)v31 || *(_QWORD *)v31 == v23 )
                    break;
                  if ( !i )
                  {
                    i = 2654435761LL * v23 + 1;
                    if ( ((-79 * (_BYTE)v23) & 1) != 0 )
                      i = 2654435761LL * v23;
                  }
                }
              }
              else
              {
                v31 = 0LL;
              }
              memmove(v31, v18, v20);
              ++v21;
            }
          }
LABEL_14:
          v18 += v20;
          if ( v18 >= v19 )
          {
            v6 = a2;
            v40 = v21;
            v5 = (volatile signed __int64 *)a3;
            goto LABEL_16;
          }
        }
      }
      v22 = Pool2;
LABEL_16:
      *(_DWORD *)(v6 + 16) = v40;
      *(_QWORD *)v6 = v22;
      PfLockSharedRelease((struct _KTHREAD *)v5);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      _InterlockedOr(v35, 0);
      if ( (*v5 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)v5, v24, v25, v26);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(P[0], 0);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  PfLockExclusiveRelease(v38);
  return v7;
}
