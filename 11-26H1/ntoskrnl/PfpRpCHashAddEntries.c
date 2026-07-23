/*
 * XREFs of PfpRpCHashAddEntries @ 0x140B04DEC
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x140B04C68 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PfpRpCHashGrow @ 0x140B04FB4 (PfpRpCHashGrow.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashAddEntries(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int a5)
{
  int v6; // ecx
  struct _KLOCK_ENTRIES *v7; // rdi
  struct _KLOCK_ENTRIES *v8; // r14
  unsigned int v9; // r15d
  _KTHREAD *Thread; // r9
  int v13; // r8d
  _KTHREAD **v14; // rax
  int v15; // esi
  _QWORD *v16; // rbx
  void *v17; // rcx
  int v18; // r10d
  __int64 i; // rdx
  __int64 v20; // r10
  _KTHREAD *v22; // [rsp+58h] [rbp+10h]
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v6 = *(_DWORD *)(a2 + 8);
  v7 = a4;
  v8 = (struct _KLOCK_ENTRIES *)((char *)a4 + ((unsigned __int64)a5 << v6));
  v9 = 1 << v6;
  P = 0LL;
  if ( a5 )
    PfLockExclusiveAcquire(a3, a2, (__int64)a3, a4);
  while ( v7 < v8 )
  {
    if ( (unsigned int)(2 * *(_DWORD *)(a2 + 16)) >= *(_DWORD *)(a2 + 12) )
    {
      PfLockExclusiveRelease((struct _KTHREAD *)a3);
      v15 = PfpRpCHashGrow(a1, a2, a3, &P);
      if ( v15 < 0 )
        goto LABEL_12;
    }
    Thread = v7->Thread;
    v13 = *(_DWORD *)(a2 + 12);
    if ( !v13 )
    {
      v14 = 0LL;
LABEL_7:
      memmove(v14, v7, v9);
      ++*(_DWORD *)(a2 + 16);
      goto LABEL_8;
    }
    v22 = v7->Thread;
    v18 = 442596621 * (unsigned __int8)Thread
        + 37
        * (BYTE6(v22) + 37 * (BYTE5(v22) + 37 * (BYTE4(v22) + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * BYTE1(v22))))))
        + HIBYTE(v22)
        - 877075889;
    for ( i = 0LL; ; v18 = i + v20 )
    {
      v20 = (v13 - 1) & (unsigned int)v18;
      v14 = (_KTHREAD **)(*(_QWORD *)a2 + (v20 << *(_DWORD *)(a2 + 8)));
      if ( !*v14 || *v14 == Thread )
        break;
      if ( !i )
      {
        i = 2654435761LL * (_QWORD)Thread + 1;
        if ( ((-79 * (_BYTE)Thread) & 1) != 0 )
          i = 2654435761LL * (_QWORD)Thread;
      }
    }
    if ( !*v14 )
      goto LABEL_7;
LABEL_8:
    v7 = (struct _KLOCK_ENTRIES *)((char *)v7 + v9);
  }
  if ( a5 )
    PfLockExclusiveRelease((struct _KTHREAD *)a3);
  v15 = 0;
LABEL_12:
  v16 = P;
  while ( 1 )
  {
    v17 = v16;
    if ( !v16 )
      break;
    v16 = (_QWORD *)*v16;
    ExFreePoolWithTag(v17, 0);
  }
  return (unsigned int)v15;
}
