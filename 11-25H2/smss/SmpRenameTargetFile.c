/*
 * XREFs of SmpRenameTargetFile @ 0x140017B28
 * Callers:
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017C5C (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpShuffleMove @ 0x140018644 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x1400188B4 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     SmpCheckFolderForRedirections @ 0x140013900 (SmpCheckFolderForRedirections.c)
 *     memcpy_0 @ 0x14001EFA7 (memcpy_0.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 */

__int64 __fastcall SmpRenameTargetFile(const void **a1, void *a2, int a3, char a4)
{
  int v4; // esi
  ULONG v6; // esi
  _BYTE *Heap; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(unsigned __int16 *)a1;
  Handle = (HANDLE)-1LL;
  IoStatusBlock = 0LL;
  v6 = v4 + 26;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v6);
  if ( Heap )
  {
    if ( !a4 || SmpCheckFolderForRedirections((unsigned __int16 *)a1, &Handle) )
    {
      memset_0(Heap, 0, v6);
      *((_QWORD *)Heap + 1) = 0LL;
      *Heap = a3 != 0;
      v12 = *(unsigned __int16 *)a1;
      *((_DWORD *)Heap + 4) = v12;
      memcpy_0(Heap + 20, a1[1], v12);
      v11 = NtSetInformationFile(a2, &IoStatusBlock, Heap, v6, FileRenameInformation);
    }
    else
    {
      v11 = -1073740533;
    }
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v11;
}
