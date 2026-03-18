/*
 * XREFs of ?Initialize@CTextVisual@@MEAAJXZ @ 0x180285930
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180112540 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTextVisual::Initialize(CTextVisual *this)
{
  _DWORD *v2; // rbx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(*(unsigned __int8 (__fastcall **)(CTextVisual *))(*(_QWORD *)this + 264LL))(this) )
  {
    v2 = DefaultHeap::AllocClear(0x50uLL);
    if ( !v2 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v3 = *((_QWORD *)this + 3);
    v2[2] = 0;
    *((_QWORD *)v2 + 3) = v3;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 4) = 2LL;
    *((_QWORD *)v2 + 6) = 0LL;
    v2[10] = 0;
    *(_QWORD *)v2 = &CTextVisualContent::`vftable';
    *((_QWORD *)v2 + 9) = this;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 2));
    v4 = CVisual::SetContent((struct CResource **)this, (struct CContent *)v2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x19,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisual.cpp",
        (const char *)(unsigned int)v4);
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CResource *)v2);
      return v5;
    }
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CResource *)v2);
  }
  return 0LL;
}
