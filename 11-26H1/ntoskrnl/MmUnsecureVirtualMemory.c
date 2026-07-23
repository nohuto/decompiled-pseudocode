/*
 * XREFs of MmUnsecureVirtualMemory @ 0x140992B70
 * Callers:
 *     DifMmUnsecureVirtualMemoryWrapper @ 0x14066C6A0 (DifMmUnsecureVirtualMemoryWrapper.c)
 *     RtlFileMapFree @ 0x140719740 (RtlFileMapFree.c)
 *     AlpcpForceUnlinkSecureView @ 0x1407C43BC (AlpcpForceUnlinkSecureView.c)
 *     VmpUnsecureMemoryForPin @ 0x1408240F4 (VmpUnsecureMemoryForPin.c)
 *     AslpFilePartialViewFree @ 0x140895EE8 (AslpFilePartialViewFree.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140991C60 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x140992BD0 (AlpcViewDestroyProcedure.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     sub_1409EC968 @ 0x1409EC968 (sub_1409EC968.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409EE268 (MmStoreAllocateVirtualMemory.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A8ED68 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpRestoreWriteAccess @ 0x140A8F764 (AlpcpRestoreWriteAccess.c)
 *     VmUnsecureBackingMemory @ 0x140B55550 (VmUnsecureBackingMemory.c)
 *     MmInitializeImageViewExtension @ 0x140D00404 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x14048A184 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 v1; // r8
  _QWORD *v2; // rdi
  struct _LIST_ENTRY *v3; // rax
  volatile signed __int32 *v4; // rbx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = (_QWORD *)(qword_140E2D7C0 ^ (unsigned __int64)SecureHandle);
  v3 = MiObtainReferencedSecureVad(qword_140E2D7C0 ^ (unsigned __int64)SecureHandle, &v5, v1);
  v4 = (volatile signed __int32 *)v3;
  if ( v3 )
  {
    MiRemoveSecureEntry((ULONG_PTR)v3, v2);
    MiUnlockAndDereferenceVad(v4);
  }
}
