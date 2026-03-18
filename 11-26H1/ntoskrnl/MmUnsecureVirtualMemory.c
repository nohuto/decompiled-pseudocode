/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1409C1B90
 * Callers:
 *     DifMmUnsecureVirtualMemoryWrapper @ 0x140668AC0 (DifMmUnsecureVirtualMemoryWrapper.c)
 *     RtlFileMapFree @ 0x140714A50 (RtlFileMapFree.c)
 *     AlpcpForceUnlinkSecureView @ 0x1407C0E28 (AlpcpForceUnlinkSecureView.c)
 *     VmpUnsecureMemoryForPin @ 0x14081DEE4 (VmpUnsecureMemoryForPin.c)
 *     AslpFilePartialViewFree @ 0x14088FAEC (AslpFilePartialViewFree.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1409C0C80 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1409C1BF0 (AlpcViewDestroyProcedure.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 *     sub_1409F0198 @ 0x1409F0198 (sub_1409F0198.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409F1A98 (MmStoreAllocateVirtualMemory.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A87C38 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpRestoreWriteAccess @ 0x140A88A00 (AlpcpRestoreWriteAccess.c)
 *     VmUnsecureBackingMemory @ 0x140B52CB0 (VmUnsecureBackingMemory.c)
 *     MmInitializeImageViewExtension @ 0x140CFA084 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x140490630 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x1404E4F18 (MiObtainReferencedSecureVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 v1; // r8
  _QWORD *v2; // rdi
  struct _LIST_ENTRY *v3; // rax
  volatile signed __int32 *v4; // rbx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = (_QWORD *)(qword_140E2D640 ^ (unsigned __int64)SecureHandle);
  v3 = MiObtainReferencedSecureVad(qword_140E2D640 ^ (unsigned __int64)SecureHandle, &v5, v1);
  v4 = (volatile signed __int32 *)v3;
  if ( v3 )
  {
    MiRemoveSecureEntry((ULONG_PTR)v3, v2);
    MiUnlockAndDereferenceVad(v4);
  }
}
