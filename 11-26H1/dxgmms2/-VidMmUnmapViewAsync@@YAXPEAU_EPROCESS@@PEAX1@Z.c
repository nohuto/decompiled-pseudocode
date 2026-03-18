/*
 * XREFs of ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400F8290
 * Callers:
 *     ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z @ 0x1400BC040 (-UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400F3360 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F58E8 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_K3@Z @ 0x1400F6B6C (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEA.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F7884 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?UnmapViewOfAllocation@VIDMM_SYSTEM_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z @ 0x1400F89A0 (-UnmapViewOfAllocation@VIDMM_SYSTEM_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z.c)
 * Callees:
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400F7424 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1400F8418 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmUnmapViewAsync(struct _EPROCESS *a1, PVOID Object, void *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x48uLL);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(v6, &BeginVidMmUnmapViewAsync, v7, a1, Object, a3);
  ObfReferenceObject(Object);
  LODWORD(v10[4]) = 2;
  v10[5] = a1;
  v10[6] = Object;
  v10[7] = a3;
  v10[8] = 0LL;
  if ( a1 )
    v10[8] = PsGetProcessDxgProcess(a1);
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v10) )
  {
    VidMmUnmapView(a1, a3);
    ObfDereferenceObject(Object);
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v8, &EndVidMmUnmapViewAsync, v9, a1, Object, a3);
  }
}
