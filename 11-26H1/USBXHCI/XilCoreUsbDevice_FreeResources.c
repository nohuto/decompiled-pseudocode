/*
 * XREFs of XilCoreUsbDevice_FreeResources @ 0x140004860
 * Callers:
 *     XilCoreUsbDevice_Create @ 0x140003E54 (XilCoreUsbDevice_Create.c)
 *     XilUsbDevice_FreeResources @ 0x1400047F0 (XilUsbDevice_FreeResources.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCoreUsbDevice_FreeResources(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  if ( *a1 )
  {
    v2 = a1[1];
    v3 = *(_QWORD *)(v2 + 120);
    if ( a1[3] )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(v2 + 120));
      a1[3] = 0LL;
    }
    if ( a1[4] )
    {
      CommonBuffer_ReleaseBuffer(v3);
      a1[4] = 0LL;
    }
  }
}
