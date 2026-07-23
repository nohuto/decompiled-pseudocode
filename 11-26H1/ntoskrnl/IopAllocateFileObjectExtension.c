/*
 * XREFs of IopAllocateFileObjectExtension @ 0x14021B6F0
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x14021ADC0 (FsRtlInsertPerFileObjectContext.c)
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IoSetShadowFileInformation @ 0x1404BD4C0 (IoSetShadowFileInformation.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1404EF870 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14077A8A8 (IopSetFileMemoryPartitionInformation.c)
 *     IopSetFileObjectIosbRange @ 0x1407981C0 (IopSetFileObjectIosbRange.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140933530 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
    if ( v3 == qword_1400137E0 )
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
      v10 = qword_1400137E0;
      v8 = -1073741670;
      if ( !a3 )
        v10 = 0LL;
      Pool2 = v10;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
    {
      if ( Pool2 && Pool2 != qword_1400137E0 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = *(__int64 **)(a1 + 208);
    }
    *a2 = Pool2;
    return v8;
  }
}
