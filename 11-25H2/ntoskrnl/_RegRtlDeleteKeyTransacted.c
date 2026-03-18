/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140A68474
 * Callers:
 *     _PnpCtxRegDeleteKey @ 0x1406ED0DC (_PnpCtxRegDeleteKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140951400 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140A68270 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwDeleteKey @ 0x14069CCC0 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteKeyTransacted(HANDLE a1, const WCHAR *a2, __int64 a3)
{
  int v3; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a2 )
  {
    v3 = RegRtlOpenKeyTransacted((__int64)a1, a2, 0, 0x10000u, &Handle, a3);
    if ( v3 < 0 )
      goto LABEL_3;
    a1 = Handle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}
