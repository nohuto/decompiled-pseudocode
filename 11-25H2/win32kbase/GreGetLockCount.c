/*
 * XREFs of GreGetLockCount @ 0x1400BD720
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 GreGetLockCount()
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  v1 = 0LL;
  if ( CurrentThreadNonPaged )
    v1 = *CurrentThreadNonPaged;
  v2 = v1 + 8;
  v3 = -v1;
  if ( (v2 & -(__int64)(v3 != 0)) != 0 )
    return *(unsigned int *)((v2 & -(__int64)(v3 != 0)) + 0x15C);
  else
    return 0LL;
}
