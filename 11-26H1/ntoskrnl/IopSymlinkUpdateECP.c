/*
 * XREFs of IopSymlinkUpdateECP @ 0x1409347F8
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IopGraftName @ 0x140934204 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x14093469C (IopSymlinkRememberJunction.c)
 *     IopSymlinkApplyToOpenedName @ 0x1409353A0 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     IopSymlinkRemoveECP @ 0x14046C060 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x14047CDCC (IopSymlinkGetECP.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140933710 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140933C40 (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x140934998 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkUpdateECP(
        PIRP Irp,
        UNICODE_STRING *a2,
        unsigned __int16 a3,
        const UNICODE_STRING *a4,
        __int16 a5,
        __int16 a6)
{
  ULONG Flags; // eax
  UNICODE_STRING *v9; // rdi
  struct _ECP_LIST *UserBuffer; // rbx
  __int16 v12; // r15
  __int16 v13; // ax
  UNICODE_STRING *v15; // rbp
  int v16; // ebx
  UNICODE_STRING *v17; // rsi
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // rax
  size_t v20; // r8
  wchar_t *v21; // rdx
  UNICODE_STRING *i; // rcx
  __int64 Pool2; // rax
  UNICODE_STRING *v24; // [rsp+60h] [rbp+8h] BYREF
  PVOID EcpContext; // [rsp+68h] [rbp+10h] BYREF
  PVOID v26; // [rsp+78h] [rbp+20h] BYREF

  EcpContext = a2;
  Flags = Irp->Flags;
  v24 = 0LL;
  v9 = a2;
  UserBuffer = 0LL;
  if ( (Flags & 0x80u) != 0 )
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
  IopSymlinkGetECP(UserBuffer, (PVOID *)&v24);
  v12 = a6;
  if ( v9[1].MaximumLength < a4->Length )
  {
    v15 = v24;
    v26 = 0LL;
    if ( v24 == v9 )
    {
      IopSymlinkRemoveECP(UserBuffer, &EcpContext);
      v16 = IopSymlinkAllocateAndAddECP(Irp, &v26, a4->Length);
      if ( v16 < 0 )
      {
        FsRtlFreeExtraCreateParameter(EcpContext);
        return (unsigned int)v16;
      }
      v9 = (UNICODE_STRING *)EcpContext;
      v17 = (UNICODE_STRING *)v26;
    }
    else
    {
      for ( i = (UNICODE_STRING *)v24->Buffer; i != v9; i = (UNICODE_STRING *)i->Buffer )
        v15 = i;
      Pool2 = ExAllocatePool2(0x100uLL);
      v17 = (UNICODE_STRING *)Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      v15->Buffer = (wchar_t *)Pool2;
    }
    Length = a4->Length;
    Buffer = v9->Buffer;
    v20 = a4->Length;
    v21 = a4->Buffer;
    *(_DWORD *)(&v17->MaximumLength + 1) = 0;
    v17[1].Length = 0;
    v17[1].MaximumLength = Length;
    v17[1].Buffer = &v17[2].Length;
    v17->Length = a3;
    v17->MaximumLength = v12;
    v17->Buffer = Buffer;
    memmove(&v17[2], v21, v20);
    v17[1].Length += Length;
    if ( v9 == v15 )
    {
      v9->Buffer = 0LL;
      FsRtlFreeExtraCreateParameter(v9);
    }
    else
    {
      ExFreePoolWithTag(v9, 0x69536F49u);
    }
    v9 = v17;
  }
  else
  {
    RtlCopyUnicodeString(v9 + 1, a4);
  }
  v13 = a5;
  v9->MaximumLength = v12;
  *(&v9->MaximumLength + 1) = v13;
  v9->Length = a3;
  if ( (v9->MaximumLength & 1) == 0 )
    IopSymlinkFreeRelatedMountPointChain(v9);
  return 0LL;
}
