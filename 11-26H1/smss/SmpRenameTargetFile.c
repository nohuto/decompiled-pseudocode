/*
 * XREFs of SmpRenameTargetFile @ 0x1400177D8
 * Callers:
 *     SmpProcessFileRenames @ 0x1400173C0 (SmpProcessFileRenames.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017924 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpShuffleMove @ 0x140018310 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140018514 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     SmpCheckFolderForRedirections @ 0x140013524 (SmpCheckFolderForRedirections.c)
 *     memcpy_0 @ 0x14001E82B (memcpy_0.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 */

__int64 __fastcall SmpRenameTargetFile(const void **a1, void *a2, int a3, char a4)
{
  ULONG v5; // r14d
  __int64 v6; // rcx
  __int64 v9; // rbx
  _BYTE *Heap; // rsi
  unsigned int v12; // edi
  char v13; // al
  unsigned int v14; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(unsigned __int16 *)a1 + 26;
  IoStatusBlock = 0LL;
  v6 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  v9 = -1LL;
  Handle = (HANDLE)-1LL;
  Heap = RtlAllocateHeap(*(PVOID *)(v6 + 48), SmBaseTag, v5);
  if ( Heap )
  {
    if ( !a4 || (v13 = SmpCheckFolderForRedirections((unsigned __int16 *)a1, &Handle), v9 = (__int64)Handle, v13) )
    {
      memset_0(Heap, 0, v5);
      *((_QWORD *)Heap + 1) = 0LL;
      *Heap = a3 != 0;
      v14 = *(unsigned __int16 *)a1;
      *((_DWORD *)Heap + 4) = v14;
      memcpy_0(Heap + 20, a1[1], v14);
      v12 = NtSetInformationFile(a2, &IoStatusBlock, Heap, v5, FileRenameInformation);
    }
    else
    {
      v12 = -1073740533;
    }
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    if ( v9 != -1 )
      NtClose((HANDLE)v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
