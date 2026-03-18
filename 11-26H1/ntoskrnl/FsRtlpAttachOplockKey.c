/*
 * XREFs of FsRtlpAttachOplockKey @ 0x1402C2000
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403FB980 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA2BF0 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140AB6BF0 (FsRtlOplockBreakH2.c)
 * Callees:
 *     IoSetOplockKeyContext @ 0x1402C2134 (IoSetOplockKeyContext.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140903780 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x140A072F0 (FsRtlFindExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x140A191A0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x140A34C60 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x140A9F910 (FsRtlAcknowledgeEcp.c)
 */

__int64 __fastcall FsRtlpAttachOplockKey(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  _QWORD *FileObjectExtension; // rdx
  __int64 v3; // rdx
  struct _ECP_LIST *v4; // rbx
  unsigned int v6; // edi
  GUID EcpType; // [rsp+20h] [rbp-18h] BYREF
  PVOID EcpContext; // [rsp+40h] [rbp+8h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+48h] [rbp+10h] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction )
    return 0LL;
  FileObjectExtension = CurrentStackLocation->FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    v3 = FileObjectExtension[7];
    if ( v3 )
    {
      if ( (*(_BYTE *)(v3 + 2) & 3) != 0 )
        return 0LL;
    }
  }
  EcpContext = 0LL;
  ExtraCreateParameter = 0LL;
  IoGetIrpExtraCreateParameter(a1, &ExtraCreateParameter);
  v4 = ExtraCreateParameter;
  if ( !ExtraCreateParameter )
    return 0LL;
  EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
  if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
  {
    EcpType = GUID_ECP_OPLOCK_KEY;
    if ( FsRtlRemoveExtraCreateParameter(v4, &EcpType, &EcpContext, 0LL) )
      return 0LL;
    v6 = IoSetOplockKeyContext(CurrentStackLocation->FileObject, EcpContext, 1LL);
    FsRtlFreeExtraCreateParameter(EcpContext);
  }
  else
  {
    v6 = IoSetOplockKeyContext(CurrentStackLocation->FileObject, EcpContext, 2LL);
    FsRtlAcknowledgeEcp(EcpContext);
  }
  if ( v6 == -1073741823 )
    return 0;
  return v6;
}
