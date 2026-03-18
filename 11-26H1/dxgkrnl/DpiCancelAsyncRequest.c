/*
 * XREFs of DpiCancelAsyncRequest @ 0x1400331A8
 * Callers:
 *     DpiRequestDevicePowerState @ 0x140032628 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCancelAsyncRequest(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 **v4; // rcx

  WdLogSingleEntry3(9LL, a1, *(int *)(a1 + 4152), 0LL);
  v2 = (__int64 *)(a1 + 4128);
  WdLogGlobalForLineNumber = 109;
  result = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(result + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)result;
    *(_QWORD *)(result + 8) = v4;
    *v2 = 0LL;
  }
  return result;
}
