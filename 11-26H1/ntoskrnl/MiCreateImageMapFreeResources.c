/*
 * XREFs of MiCreateImageMapFreeResources @ 0x140A55C50
 * Callers:
 *     MiCreateNewSection @ 0x140A562D8 (MiCreateNewSection.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiFreeProtoPool @ 0x140458808 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140458D20 (MiUpdateSystemProtoPtesTree.c)
 *     MiDeleteFileExtentList @ 0x1407705B4 (MiDeleteFileExtentList.c)
 *     MiDeleteImageCreationMdls @ 0x140A5620C (MiDeleteImageCreationMdls.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiCreateImageMapFreeResources(__int64 a1, int a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rdx
  unsigned int **v5; // r14
  unsigned int *v6; // rdi
  void *v7; // rbx
  __int64 v8; // rcx

  if ( a2 < 0 )
  {
    MiDeleteImageCreationMdls(*(PMDL *)(a1 + 72));
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 23480), -v4);
      MiReturnCommit(v8, v4, 0);
    }
    v5 = *(unsigned int ***)(a1 + 56);
    if ( v5 )
    {
      v6 = *v5;
      v7 = (void *)*((_QWORD *)*v5 + 8);
      MiUpdateSystemProtoPtesTree((_QWORD *)((unsigned __int64)v5[12] & 0xFFFFFFFFFFFFFFF8uLL), 0);
      MiFreeProtoPool(v7, 8LL * v6[2]);
      ExFreePoolWithTag(v6, 0);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v3 = *(_DWORD **)(a1 + 64);
  if ( v3 )
    MiDeleteFileExtentList(v3);
}
