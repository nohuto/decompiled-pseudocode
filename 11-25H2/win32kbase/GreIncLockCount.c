/*
 * XREFs of GreIncLockCount @ 0x1400C17A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 GreIncLockCount()
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
    ++*(_DWORD *)((result & -(__int64)(v3 != 0)) + 0x15C);
  return result;
}
