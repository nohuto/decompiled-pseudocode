/*
 * XREFs of ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB60
 * Callers:
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180036004 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18004C9F4 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18004CAA0 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z @ 0x18004CC90 (-GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18004D0EC (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 */

void __fastcall CDesktopManager::CreateDesktopWindowReplacement(unsigned __int64 a1)
{
  struct CDesktopWindowReplacement *DesktopReplacementVisualForDesktop; // rax
  CSolidRectangleVisual *v3; // r14
  LONG left; // ebx
  LONG top; // edi
  struct CContainerVisual *RootVisualForDesktop; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  DesktopReplacementVisualForDesktop = CWindowList::GetDesktopReplacementVisualForDesktop(
                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                         a1);
  v7.bottom = 1065353216;
  v3 = DesktopReplacementVisualForDesktop;
  *(float *)&v7.left = (float)(!CDesktopManager::IsLogonDesktop(a1) ? 0x14 : 0) / 255.0;
  v7.top = v7.left;
  v7.right = v7.left;
  CSolidRectangleVisual::UpdateColor(v3, (const struct _D3DCOLORVALUE *)&v7);
  v7.left = GetSystemMetrics(76);
  left = v7.left;
  v7.top = GetSystemMetrics(77);
  top = v7.top;
  v7.right = left + GetSystemMetrics(78);
  v7.bottom = top + GetSystemMetrics(79);
  CRectangleVisual::SetRect(v3, &v7);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           a1);
  CContainerVisual::InsertChildBefore(
    *((CContainerVisual **)RootVisualForDesktop + 3),
    (CBaseObject ***)v3,
    (CBaseObject ***)RootVisualForDesktop);
  (*(void (__fastcall **)(CSolidRectangleVisual *))(*(_QWORD *)v3 + 48LL))(v3);
}
