/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x140AAE534
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140992124 (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(__int64 a1, void *a2, __int64 a3, __int64 a4, char a5)
{
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( a5 )
    RtlCopyFromUser(&v9, a2, 0x20uLL);
  else
    RtlCopyVolatileMemory(&v9, a2, 0x20uLL);
  return AlpcpCaptureViewAttributeInternal(a1, (__int64)&v9, a3, a4);
}
