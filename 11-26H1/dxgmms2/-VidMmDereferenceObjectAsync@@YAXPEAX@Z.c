/*
 * XREFs of ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400F8394
 * Callers:
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1400BAA9C (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?FreeGlobal@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400BAC40 (-FreeGlobal@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1400F7D80 (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?FreeGlobal@VIDMM_SYSTEM_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400F8040 (-FreeGlobal@VIDMM_SYSTEM_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1400F8418 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmDereferenceObjectAsync(PVOID Object)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD v6[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(v6, 0, 0x48uLL);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0x_EtwWriteTransfer(v2, &BeginVidMmDereferenceObjectAsync, v3, Object);
  LODWORD(v6[4]) = 1;
  v6[5] = Object;
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v6) )
  {
    ObfDereferenceObject(Object);
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0x_EtwWriteTransfer(v4, &EndVidMmDereferenceObjectAsync, v5, Object);
  }
}
