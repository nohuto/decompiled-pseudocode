/*
 * XREFs of IopSymlinkAllocateAndAddECP @ 0x140903CB0
 * Callers:
 *     IopSymlinkCreateECP @ 0x140903B80 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x140904274 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140904868 (IopSymlinkUpdateECP.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     IoClearIrpExtraCreateParameter @ 0x1405CAE10 (IoClearIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140903780 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x140903DB0 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140903E10 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1409040A0 (FsRtlFreeExtraCreateParameterList.c)
 *     IoSetIrpExtraCreateParameter @ 0x140905160 (IoSetIrpExtraCreateParameter.c)
 */

__int64 __fastcall IopSymlinkAllocateAndAddECP(PIRP Irp, PVOID *EcpContext, unsigned __int16 a3)
{
  struct _ECP_LIST *UserBuffer; // rbx
  char v4; // r14
  NTSTATUS ParameterFromLookasideList; // edi
  struct _ECP_LIST *v9; // rax
  struct _ECP_LIST *v10; // rdx
  _LIST_ENTRY *p_EcpList; // rax

  UserBuffer = 0LL;
  v4 = 0;
  *EcpContext = 0LL;
  if ( (Irp->Flags & 0x80u) != 0 )
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
  ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterFromLookasideList(
                                 &IopSymlinkECPGuid,
                                 a3 + 32,
                                 0,
                                 IopSymlinkCleanupECP,
                                 &IopSymlinkInfoLookasideList,
                                 EcpContext);
  if ( ParameterFromLookasideList >= 0 )
  {
    if ( UserBuffer )
      goto LABEL_5;
    v9 = (struct _ECP_LIST *)ExAllocateFromNPagedLookasideList(&FsRtlEcpListLookaside);
    v10 = v9;
    if ( v9 )
    {
      p_EcpList = &v9->EcpList;
      UserBuffer = v10;
      p_EcpList->Blink = p_EcpList;
      p_EcpList->Flink = p_EcpList;
      v10->Flags = 6;
      v10->Signature = 1282433861;
      IoSetIrpExtraCreateParameter(Irp, v10);
      v4 = 1;
LABEL_5:
      ParameterFromLookasideList = FsRtlInsertExtraCreateParameter(UserBuffer, *EcpContext);
      if ( ParameterFromLookasideList >= 0 )
        return (unsigned int)ParameterFromLookasideList;
      goto LABEL_10;
    }
    ParameterFromLookasideList = -1073741670;
  }
LABEL_10:
  if ( *EcpContext )
  {
    *((_QWORD *)*EcpContext + 1) = 0LL;
    FsRtlFreeExtraCreateParameter(*EcpContext);
    *EcpContext = 0LL;
  }
  if ( v4 )
  {
    FsRtlFreeExtraCreateParameterList(UserBuffer);
    IoClearIrpExtraCreateParameter(Irp);
  }
  return (unsigned int)ParameterFromLookasideList;
}
