/*
 * XREFs of ?LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A93A4
 * Callers:
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800A900C (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A8E74 (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A92C8 (-DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z.c)
 */

__int64 __fastcall CapturedWindowRepresentation::LookForSecondaryWindows(
        CContainerVisualProxy **this,
        struct CWindowData *a2)
{
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CapturedWindowRepresentation *v5; // rcx
  struct CWindowData *v6; // rbx
  struct _LIST_ENTRY *v7; // r14
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(struct CWindowData **)a2 != a2 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             *((_QWORD *)a2 + 17));
    v6 = *(struct CWindowData **)a2;
    v7 = WindowListForDesktop;
    while ( v6 != (struct CWindowData *)v7
         && CapturedWindowRepresentation::DoesWindowQualifyAsSecondaryWindow(v5, a2, v6) )
    {
      v8 = CapturedWindowRepresentation::AddSecondaryWindow(this, v6);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC6,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
      v6 = *(struct CWindowData **)v6;
    }
  }
  return 0LL;
}
