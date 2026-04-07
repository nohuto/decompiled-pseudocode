/*
 * XREFs of ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18008C6A0
 * Callers:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800B5C84 (-RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001B1F0 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCVisual@@$0A@@@QEAAJI@Z @ 0x18004D2D0 (-RemoveAt@-$DynArray@PEAVCVisual@@$0A@@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180084EE8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VisualCollection::Remove(VisualCollection *this, struct CVisualProxy **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2[3] )
  {
    v4 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      v5 = *((_QWORD *)this + 1);
      do
      {
        if ( *(struct CVisualProxy ***)(v5 + 8 * v4) == a2 )
          break;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 8) );
    }
    if ( (unsigned int)v4 < *((_DWORD *)this + 8) )
    {
      ++*((_DWORD *)this + 10);
      v6 = DynArray<CVisual *,0>::RemoveAt((__int64 *)this + 1, v4);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12C,
          (int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
      if ( (*((_BYTE *)a2 + 36) & 4) != 0 )
      {
        v9 = CContainerVisualProxy::RemoveChild(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL), a2[2]);
        v10 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x130,
            (int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
            (const char *)(unsigned int)v9);
          return v10;
        }
      }
      v11 = (*((__int64 (__fastcall **)(struct CVisualProxy **, _QWORD))*a2 + 7))(a2, 0LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x133,
          (int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
          (const char *)(unsigned int)v11);
      CBaseObject::Release((CBaseObject *)a2);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x126,
        (int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
        (const char *)0x80070490LL);
    }
  }
  return 0LL;
}
