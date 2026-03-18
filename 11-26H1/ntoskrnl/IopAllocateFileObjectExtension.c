/*
 * XREFs of IopAllocateFileObjectExtension @ 0x140449920
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1404490A0 (IoSetIoPriorityHintIntoFileObject.c)
 *     IoSetShadowFileInformation @ 0x1404490F0 (IoSetShadowFileInformation.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140449480 (FsRtlInsertPerFileObjectContext.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140777A08 (IopSetFileMemoryPartitionInformation.c)
 *     IopSetFileObjectIosbRange @ 0x140795690 (IopSetFileObjectIosbRange.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1409035A0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 **a2, char a3)
{
  __int64 *v3; // rax
  unsigned int v8; // esi
  __int64 *Pool2; // rcx
  __int64 *v10; // rax

  v3 = *(__int64 **)(a1 + 208);
  if ( v3 )
  {
    if ( v3 == qword_140019060 )
    {
      return 3221225626LL;
    }
    else
    {
      *a2 = v3;
      return 0LL;
    }
  }
  else
  {
    v8 = 0;
    Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
      v10 = qword_140019060;
      v8 = -1073741670;
      if ( !a3 )
        v10 = 0LL;
      Pool2 = v10;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
    {
      if ( Pool2 && Pool2 != qword_140019060 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = *(__int64 **)(a1 + 208);
    }
    *a2 = Pool2;
    return v8;
  }
}
