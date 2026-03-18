/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140A2DD6C
 * Callers:
 *     _PnpCtxRegDeleteKey @ 0x140A2D8BC (_PnpCtxRegDeleteKey.c)
 *     _RegRtlDeletePathInternal @ 0x140A2D934 (_RegRtlDeletePathInternal.c)
 *     _RegRtlDeleteTreeInternal @ 0x140A2DB2C (_RegRtlDeleteTreeInternal.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwDeleteKey @ 0x140724F70 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteKeyTransacted(char *a1, const WCHAR *a2, __int64 a3)
{
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    v3 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x10000u, &KeyHandle, a3);
    if ( v3 < 0 )
      goto LABEL_5;
    a1 = (char *)KeyHandle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
