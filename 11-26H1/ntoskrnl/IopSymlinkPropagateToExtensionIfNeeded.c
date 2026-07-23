/*
 * XREFs of IopSymlinkPropagateToExtensionIfNeeded @ 0x140933530
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14021B6F0 (IopAllocateFileObjectExtension.c)
 *     IopSymlinkRemoveECP @ 0x14046C060 (IopSymlinkRemoveECP.c)
 *     IopSetTypeSpecificFoExtension @ 0x1404793A0 (IopSetTypeSpecificFoExtension.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140933710 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140933A38 (IopSymlinkInitializeSymlinkInfo.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140933DA0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x140934998 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkPropagateToExtensionIfNeeded(__int64 a1, struct _ECP_LIST *a2, unsigned __int16 *a3)
{
  _WORD *v5; // rdi
  __int64 v6; // rax
  int FileObjectExtension; // esi
  _QWORD *v8; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned int v13; // r15d
  NTSTATUS v14; // eax
  int LookasideList; // [rsp+20h] [rbp-58h]
  __int16 v16; // [rsp+30h] [rbp-48h]
  __int16 v17; // [rsp+38h] [rbp-40h]
  __int16 v18; // [rsp+40h] [rbp-38h]
  PVOID EcpContext; // [rsp+88h] [rbp+10h] BYREF

  EcpContext = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    IopSymlinkRemoveECP(a2, &EcpContext);
    v5 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) != 0 )
        goto LABEL_16;
LABEL_4:
      FileObjectExtension = 0;
      goto LABEL_5;
    }
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_4;
  v11 = *(_QWORD *)(v6 + 208);
  if ( !v11 )
    goto LABEL_4;
  v12 = *(_QWORD *)(v11 + 48);
  if ( !v12 )
    goto LABEL_4;
  v13 = *(unsigned __int16 *)(v12 + 16) + *a3 + 2;
  if ( v13 >= 0xFFFF )
  {
    FileObjectExtension = -1073741562;
    goto LABEL_5;
  }
  v14 = FsRtlAllocateExtraCreateParameterFromLookasideList(
          &IopSymlinkECPGuid,
          (unsigned __int16)v13 + 32,
          0,
          IopSymlinkCleanupECP,
          &IopSymlinkInfoLookasideList,
          &EcpContext);
  v5 = EcpContext;
  FileObjectExtension = v14;
  if ( v14 < 0 )
    goto LABEL_5;
  v18 = *(_WORD *)(v12 + 2);
  v17 = *(_WORD *)(v12 + 4);
  v16 = *(_WORD *)(v12 + 16);
  LOWORD(LookasideList) = 0;
  IopSymlinkInitializeSymlinkInfo(
    EcpContext,
    v13 + 32,
    *((_QWORD *)a3 + 1),
    *a3,
    LookasideList,
    *(_QWORD *)(v12 + 24),
    v16,
    v17,
    v18,
    0LL);
  *v5 = *(_WORD *)v12 + v5[8] - *(_WORD *)(v12 + 16);
LABEL_16:
  EcpContext = 0LL;
  FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 **)&EcpContext, 0);
  if ( FileObjectExtension >= 0 )
  {
    FileObjectExtension = IopSetTypeSpecificFoExtension((__int64)EcpContext, 5u, (signed __int64)v5);
    if ( FileObjectExtension >= 0 )
    {
      IopSymlinkFreeRelatedMountPointChain(v5);
      return (unsigned int)FileObjectExtension;
    }
  }
LABEL_5:
  if ( v5 )
  {
    v8 = (_QWORD *)*((_QWORD *)v5 + 1);
    if ( v8 )
    {
      do
      {
        v10 = (_QWORD *)v8[1];
        ExFreePoolWithTag(v8, 0x69536F49u);
        v8 = v10;
      }
      while ( v10 );
    }
    *((_QWORD *)v5 + 1) = 0LL;
    FsRtlFreeExtraCreateParameter(v5);
  }
  return (unsigned int)FileObjectExtension;
}
