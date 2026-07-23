/*
 * XREFs of ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x140481954
 * Callers:
 *     SmStoreDecompressBuffer @ 0x140392390 (SmStoreDecompressBuffer.c)
 * Callees:
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x14043C534 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     SmHwAcceleratorWaitForRequest @ 0x140643C40 (SmHwAcceleratorWaitForRequest.c)
 */

void __fastcall SmStoreDecompressBufferContextCleanup(
        struct _SM_STORE_DECOMPRESS_BUFFER_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  char v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( *((_DWORD *)a1 + 9) )
    {
      do
        SmHwAcceleratorWaitForRequest(*((_QWORD *)a1 + 1), v4++, 0, (unsigned int)&v7, (__int64)&v6);
      while ( v4 < *((_DWORD *)a1 + 9) );
    }
    SmHwAcceleratorPartitionMgrFreeDescriptor(*(_QWORD *)a1, *((_QWORD *)a1 + 1), a3, a4);
  }
}
