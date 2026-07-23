/*
 * XREFs of PfpRpCHashEmpty @ 0x1409BE290
 * Callers:
 *     PfpRpControlRequestReset @ 0x1409BDEE4 (PfpRpControlRequestReset.c)
 * Callees:
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpRpCHashEmpty(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  struct _KLOCK_ENTRIES *v4; // r9
  int v5; // r10d
  unsigned int i; // eax
  int v9; // eax
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  _BYTE v14[24]; // [rsp+20h] [rbp-28h] OVERLAPPED

  *(_DWORD *)&v14[20] = 0;
  v4 = (struct _KLOCK_ENTRIES *)(unsigned int)(1 << *(_DWORD *)(a2 + 8));
  v5 = -1;
  for ( i = (unsigned int)v4; i; i >>= 1 )
    ++v5;
  *(_QWORD *)&v14[12] = 0LL;
  *(_QWORD *)v14 = 0LL;
  v9 = v5 + 1;
  if ( (((_DWORD)v4 - 1) & (unsigned int)v4) == 0 )
    v9 = v5;
  *(_DWORD *)&v14[8] = v9;
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 128), a2, (__int64)a3, v4);
  v10 = *(void **)a2;
  PfLockExclusiveAcquire(a3, v11, v12, v13);
  *(_OWORD *)a2 = *(_OWORD *)v14;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)&v14[16];
  PfLockExclusiveRelease((struct _KTHREAD *)a3);
  PfLockExclusiveRelease((struct _KTHREAD *)(a1 + 128));
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
}
