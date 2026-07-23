/*
 * XREFs of DrvDbGetDeviceIdMappedPropertyKeys @ 0x1408A41B8
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140975E30 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x1408A4140 (DrvDbGetCompositeMappedPropertyKeys.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140B270A4 (DrvDbOpenDeviceIdRegKey.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedPropertyKeys(
        int a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rsi
  HANDLE v8; // rax
  int CompositeMappedPropertyKeys; // ebx
  __int64 v10; // rcx
  unsigned int v11; // edi
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v6 = a6;
  Handle[0] = 0LL;
  v8 = a3;
  v14 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    CompositeMappedPropertyKeys = DrvDbOpenDeviceIdRegKey(a1, a2, 1, 0, (__int64)Handle, 0LL);
    if ( CompositeMappedPropertyKeys < 0 )
      goto LABEL_9;
    v8 = Handle[0];
  }
  CompositeMappedPropertyKeys = PnpCtxRegQueryInfoKey(&v14, v8, 0LL, 0LL, &v14, 0LL, 0LL);
  if ( CompositeMappedPropertyKeys >= 0 )
  {
    v11 = a5;
    if ( !v14
      || (CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(v10, (__int64)off_140E0A3C0, 3u, a4, a5, v6),
          CompositeMappedPropertyKeys >= 0) )
    {
      if ( v11 < *v6 )
        CompositeMappedPropertyKeys = -1073741789;
    }
  }
LABEL_9:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)CompositeMappedPropertyKeys;
}
