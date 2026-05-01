/*
 * XREFs of ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x180234E2C
 * Callers:
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1800A2B80 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x18052B6B0 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18052B3EC (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopCollection::_AddDesktop(CVirtualDesktopCollection *this, struct IVirtualDesktop *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CVirtualDesktopCollection::AddDesktopHelper(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = *((_QWORD *)this + 4);
    if ( v6 )
      (*(void (__fastcall **)(__int64, CVirtualDesktopCollection *))(*(_QWORD *)v6 + 24LL))(v6, this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
