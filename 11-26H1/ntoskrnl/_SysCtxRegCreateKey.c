/*
 * XREFs of _SysCtxRegCreateKey @ 0x140AED6E8
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegCreateKey @ 0x140AED690 (_PnpCtxRegCreateKey.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x140979034 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall SysCtxRegCreateKey(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        ULONG a4,
        ACCESS_MASK a5,
        void *a6,
        __int64 a7,
        HANDLE *a8,
        ULONG *a9)
{
  if ( a1 )
    return RegRtlCreateKeyTransacted(a2, a3, a4, a5, a6, 0, a8, a9, *(PUNICODE_STRING *)(a1 + 8));
  else
    return RegRtlCreateKeyTransacted(a2, a3, a4, a5, a6, 0, a8, a9, 0LL);
}
