/*
 * XREFs of _SysCtxRegOpenKey @ 0x1408C7CB0
 * Callers:
 *     _SysCtxRegOpenCurrentUserKey @ 0x14095AF24 (_SysCtxRegOpenCurrentUserKey.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A776C0 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall SysCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  if ( a1 )
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, *(_QWORD *)(a1 + 8));
  else
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, 0LL);
}
