/*
 * XREFs of SmpCheckFolderForRedirections @ 0x140013900
 * Callers:
 *     SmpRenameTargetFile @ 0x140017B28 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x140018644 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x1400188B4 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     SmpOpenTargetFile @ 0x1400174CC (SmpOpenTargetFile.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140017580 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     InternalGetFileAttributesW @ 0x14001B4F8 (InternalGetFileAttributesW.c)
 *     memcpy_0 @ 0x14001EFA7 (memcpy_0.c)
 */

char __fastcall SmpCheckFolderForRedirections(unsigned __int16 *a1, HANDLE *a2)
{
  char IsNotARedirection; // si
  int FileAttributesW; // eax
  unsigned __int8 v6; // r14
  __int64 v7; // rbx
  WCHAR *Heap; // rax
  PWSTR Buffer; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  int v12[4]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h]
  __int128 v14; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF

  Handle = (HANDLE)-1LL;
  *(_QWORD *)&v14 = 0LL;
  DWORD2(v14) = 0;
  *(_OWORD *)v12 = 0LL;
  IsNotARedirection = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *a1 >= 0xEu )
  {
    FileAttributesW = InternalGetFileAttributesW(*((PCWSTR *)a1 + 1));
    if ( FileAttributesW == -1 )
      goto LABEL_5;
    if ( (FileAttributesW & 0x400) != 0 )
      goto LABEL_10;
    v6 = 1;
    if ( (FileAttributesW & 0x10) == 0 )
LABEL_5:
      v6 = 0;
    v7 = (*a1 >> 1) - 1;
    if ( !v6 )
    {
      if ( *a1 >> 1 == 1 )
        goto LABEL_10;
      while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v7) != 92 )
      {
        v7 = (unsigned int)(v7 - 1);
        if ( !(_DWORD)v7 )
          goto LABEL_10;
      }
    }
    Heap = (WCHAR *)RtlAllocateHeap(
                      *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                      SmBaseTag,
                      2LL * (unsigned int)(v7 + 3));
    DestinationString.Buffer = Heap;
    if ( Heap )
    {
      memcpy_0(Heap, *((const void **)a1 + 1), 2LL * (unsigned int)(v7 + 1));
      Buffer = DestinationString.Buffer;
      DestinationString.Length = 2 * v7 + 2;
      DestinationString.MaximumLength = 2 * v7 + 4;
      if ( v6 && DestinationString.Buffer[v7] != 92 )
      {
        DestinationString.Buffer[(unsigned int)(v7 + 1)] = 92;
        LODWORD(v7) = v7 + 1;
        ++DestinationString.Length;
        ++DestinationString.MaximumLength;
        Buffer = DestinationString.Buffer;
      }
      Buffer[(unsigned int)(v7 + 1)] = 0;
      v12[0] = 48;
      *(_QWORD *)&v13 = &DestinationString;
      *(_QWORD *)&v12[2] = 0LL;
      DWORD2(v13) = 64;
      v14 = 0LL;
      if ( (int)SmpOpenTargetFile((int)&Handle, 1048704, (int)v12, 0, (unsigned int)v6 + 2) >= 0 )
      {
        IsNotARedirection = SmpPathCanBeTrustedIsNotARedirection(Handle);
        if ( IsNotARedirection )
        {
          *a2 = Handle;
          goto LABEL_12;
        }
      }
    }
  }
LABEL_10:
  if ( Handle != (HANDLE)-1LL )
    NtClose(Handle);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  return IsNotARedirection;
}
