/*
 * XREFs of XilCommonBuffer_AcquireBufferEx @ 0x140003F88
 * Callers:
 *     XilCoreUsbDevice_Create @ 0x140003E54 (XilCoreUsbDevice_Create.c)
 *     XilEndpoint_AcquireBuffer @ 0x140004BCC (XilEndpoint_AcquireBuffer.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036890 (XilEndpoint_AllocateStreamContextArray.c)
 *     Interrupter_PrepareInterrupter @ 0x14007BEE4 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x140004358 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x140040174 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x140040258 (CommonBuffer_AcquireShadowBuffer.c)
 */

__int64 __fastcall XilCommonBuffer_AcquireBufferEx(void *a1, unsigned int a2, __int64 a3, unsigned int a4, int a5)
{
  switch ( a5 )
  {
    case 1:
      return CommonBuffer_AcquireBuffer(a1);
    case 2:
      return CommonBuffer_AcquireShadowBuffer(a2, a3, a4);
    case 3:
      return CommonBuffer_AcquireSecureBuffer();
  }
  return 0LL;
}
