/*
 * XREFs of ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AF5D0
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(
        struct _RTL_GENERIC_TABLE *this,
        struct DirectComposition::CBatch ***a2)
{
  struct DirectComposition::CBatch **v5; // rcx
  struct DirectComposition::CBatch *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rbx
  struct DirectComposition::CBatch **v10; // rbx
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *p_Parent; // rax
  struct _RTL_SPLAY_LINKS *v19; // rbp
  PRTL_SPLAY_LINKS TableRoot; // rbx
  struct _RTL_SPLAY_LINKS **i; // rcx
  struct _RTL_SPLAY_LINKS **j; // rcx
  struct DirectComposition::CResourceMarshaler *v23; // rax

  if ( this[7].TableRoot )
  {
    do
    {
      v5 = *a2;
      v6 = (*a2)[17];
      v7 = *((_QWORD *)v6 + 5);
      if ( (unsigned __int64)(4096 - v7) >= 0x14
        && (v8 = *((_QWORD *)v6 + 7), *((_QWORD *)v6 + 5) = v7 + 20, (v9 = v7 + v8) != 0) )
      {
        v5[19] = (struct DirectComposition::CBatch *)((char *)v5[19] + 20);
      }
      else
      {
        v10 = *a2;
        BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                          (*a2)[1],
                          *((_DWORD *)*a2 + 4),
                          (_BYTE)(*a2)[4] & 1,
                          1,
                          0);
        if ( !BatchFragment )
          return this[7].TableRoot == 0LL;
        *((_BYTE *)v10[17] + 64) = 0;
        *v10 = BatchFragment;
        *a2 = (struct DirectComposition::CBatch **)BatchFragment;
        v12 = *((_QWORD *)BatchFragment + 17);
        v13 = *(_QWORD *)(v12 + 40);
        if ( (unsigned __int64)(4096 - v13) < 0x14
          || (v14 = *(_QWORD *)(v12 + 56), *(_QWORD *)(v12 + 40) = v13 + 20, (v9 = v13 + v14) == 0) )
        {
          KeBugCheck(0xC000000D);
        }
        *((_QWORD *)BatchFragment + 19) += 20LL;
      }
      *(_DWORD *)v9 = 20;
      *(_OWORD *)(v9 + 4) = 0LL;
      *(_DWORD *)(v9 + 4) = 13;
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(((__int64 (__fastcall *)(struct _RTL_SPLAY_LINKS *))this[7].TableRoot[1].Parent->Parent->Parent)(this[7].TableRoot[1].Parent)
                                      + 32);
      *(_DWORD *)(v9 + 12) = this[7].TableRoot->RightChild[1].LeftChild;
      *(_DWORD *)(v9 + 16) = HIDWORD(this[7].TableRoot->LeftChild);
      p_Parent = &this[7].TableRoot->Parent;
      v19 = (struct _RTL_SPLAY_LINKS *)*p_Parent;
      *p_Parent = 0LL;
      TableRoot = this[7].TableRoot;
      if ( !LODWORD(TableRoot->LeftChild) )
        goto LABEL_17;
      for ( i = &TableRoot->RightChild[1].RightChild; *i != TableRoot; i = &(*i)[1].LeftChild )
        ;
      *i = TableRoot[1].LeftChild;
      for ( j = &TableRoot[1].Parent->LeftChild; *j != TableRoot; j = &(*j)[1].RightChild )
        ;
      *j = TableRoot[1].RightChild;
      if ( ((__int64)TableRoot->LeftChild & 3) != 0 )
      {
        v23 = (struct DirectComposition::CResourceMarshaler *)((__int64 (__fastcall *)(struct _RTL_SPLAY_LINKS *))TableRoot[1].Parent->Parent->Parent)(TableRoot[1].Parent);
        DirectComposition::CApplicationChannel::ReleaseResource(this, v23);
      }
      if ( !this[5].InsertOrderList.Blink )
      {
        this[5].InsertOrderList.Blink = (struct _LIST_ENTRY *)TableRoot;
        *(_OWORD *)&TableRoot->Parent = 0LL;
        *(_OWORD *)&TableRoot->RightChild = 0LL;
        *(_OWORD *)&TableRoot[1].LeftChild = 0LL;
      }
      else
      {
LABEL_17:
        GreDeleteFastMutex((char *)TableRoot, v15, v16, v17);
      }
      this[7].TableRoot = v19;
    }
    while ( v19 );
  }
  return this[7].TableRoot == 0LL;
}
