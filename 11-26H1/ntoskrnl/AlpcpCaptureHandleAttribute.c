/*
 * XREFs of AlpcpCaptureHandleAttribute @ 0x1409BAD54
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1409BADB4 (AlpcpCaptureHandleAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttribute(void *Src, __int64 a2, char a3)
{
  __int64 v5; // r8
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0;
  if ( a3 )
    RtlCopyFromUser(&v7, Src, 0x18uLL);
  else
    RtlCopyVolatileMemory(&v7, Src, 0x18uLL);
  LOBYTE(v5) = a3;
  return AlpcpCaptureHandleAttributeInternal(&v7, a2, v5);
}
