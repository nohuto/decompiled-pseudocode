/*
 * XREFs of PoQueryPowerLimitAttributes @ 0x1407CD450
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall PoQueryPowerLimitAttributes(__int64 a1, __int64 a2, void *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rax

  v4 = 0;
  v7 = a2;
  if ( a1 && a4 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    PopAcquireRwLockShared((volatile signed __int64 *)(v8 + 32), a2, (__int64)a3, a4);
    LODWORD(a4->Thread) = *(_DWORD *)(v8 + 72);
    if ( a3 && (v9 = *(unsigned int *)(v8 + 72), v7 >= (unsigned int)v9) )
      memmove(a3, *(const void **)(v8 + 80), 36 * v9);
    else
      v4 = -1073741789;
    PopReleaseRwLock((struct _KTHREAD *)(v8 + 32));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
