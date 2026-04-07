/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAXXZ @ 0x18001BB00
 * Callers:
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAllChildren@CContainerVisualProxy@@QEAAJXZ @ 0x18001BD60 (-RemoveAllChildren@CContainerVisualProxy@@QEAAJXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  CBaseObject *v4; // rcx
  int v5; // eax
  void *v6; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 8) )
  {
    ++*((_DWORD *)this + 10);
    v2 = 0;
    do
    {
      v3 = 8LL * v2;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + *((_QWORD *)this + 1)) + 56LL))(
        *(_QWORD *)(v3 + *((_QWORD *)this + 1)),
        0LL);
      v4 = *(CBaseObject **)(v3 + *((_QWORD *)this + 1));
      if ( v4 )
      {
        CBaseObject::Release(v4);
        *(_QWORD *)(v3 + *((_QWORD *)this + 1)) = 0LL;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 8) );
    v5 = CContainerVisualProxy::RemoveAllChildren(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL));
    if ( v5 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x14E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
        (const char *)(unsigned int)v5,
        v7);
    v6 = (void *)*((_QWORD *)this + 1);
    *((_DWORD *)this + 8) = 0;
    if ( v6 != *((void **)this + 2) )
    {
      DefaultHeap::Free(v6);
      *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
      *((_DWORD *)this + 7) = *((_DWORD *)this + 6);
    }
  }
}
