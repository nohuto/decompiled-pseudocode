/*
 * XREFs of GreDecLockCount @ 0x1400BFC60
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 GreDecLockCount()
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  v1 = 0LL;
  if ( CurrentThreadNonPaged )
    v1 = *CurrentThreadNonPaged;
  result = v1 + 8;
  v3 = -v1;
  if ( (result & -(__int64)(v3 != 0)) != 0 )
    --*(_DWORD *)((result & -(__int64)(v3 != 0)) + 0x15C);
  return result;
}
