/*
 * XREFs of ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x140096DB0
 * Callers:
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14026023C (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x14004FB10 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x140096C94 (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGETSET::RemoveTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  DMMVIDEOPRESENTTARGETSET **v8; // rdx
  DMMVIDEOPRESENTTARGETSET *v9; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1078;
  }
  v4 = Set<DMMVIDEOPRESENTTARGET>::FindByValue((__int64)this, (__int64)a2);
  if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
         (__int64)this + 8,
         v4) )
  {
    v5 = (_QWORD *)(v4 + 8);
    v6 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)(v6 + 8) != v4 + 8 || (v7 = *(_QWORD **)(v4 + 16), (_QWORD *)*v7 != v5) )
LABEL_8:
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    --*((_QWORD *)this + 5);
  }
  *((_BYTE *)a2 + 420) = 1;
  v8 = (DMMVIDEOPRESENTTARGETSET **)*((_QWORD *)this + 15);
  v9 = (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 512);
  if ( *v8 != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 112) )
    goto LABEL_8;
  *(_QWORD *)v9 = (char *)this + 112;
  *((_QWORD *)a2 + 65) = v8;
  *v8 = v9;
  *((_QWORD *)this + 15) = v9;
  ReferenceCounted::Release((struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 64));
}
