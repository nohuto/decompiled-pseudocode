/*
 * XREFs of ?Initialize@CTreeDirty@@QEAAX_N@Z @ 0x1801673C0
 * Callers:
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x18021CF30 (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 * Callees:
 *     ?ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ @ 0x18008F4D0 (-ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ.c)
 */

void __fastcall CTreeDirty::Initialize(CTreeDirty *this, char a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 2325) = 0;
  *(_WORD *)((char *)this + 2327) = 0;
  *((_BYTE *)this + 2324) = a2;
  *(_OWORD *)((char *)this + 2308) = *(_OWORD *)(v2 + 2504);
  if ( !a2 )
  {
    if ( *((_BYTE *)this + 2326) )
      *((_BYTE *)this + 2326) = 0;
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 452) = 0;
    if ( !*((_BYTE *)this + 2326) )
      CTreeDirty::ClearDirtyRectAnnotationLists(this);
  }
}
