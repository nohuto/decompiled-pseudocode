/*
 * XREFs of ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180007E44
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800066F4 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180007F38 (--1WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void CTopLevelWindow::CleanupThemeStatics(void)
{
  __int64 i; // rbx
  __int64 v1; // rax
  void *v2; // rdi

  if ( CTopLevelWindow::s_pbsNonClientAtlas )
  {
    CBaseObject::Release(CTopLevelWindow::s_pbsNonClientAtlas);
    CTopLevelWindow::s_pbsNonClientAtlas = 0LL;
  }
  if ( CTopLevelWindow::s_pbsTouchAtlas )
  {
    CBaseObject::Release(CTopLevelWindow::s_pbsTouchAtlas);
    CTopLevelWindow::s_pbsTouchAtlas = 0LL;
  }
  if ( CTopLevelWindow::s_pbsPenAtlas )
  {
    CBaseObject::Release(CTopLevelWindow::s_pbsPenAtlas);
    CTopLevelWindow::s_pbsPenAtlas = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < dword_1801159F0; i = (unsigned int)(i + 1) )
  {
    v1 = CTopLevelWindow::s_rgpwfWindowFrames[0];
    v2 = *(void **)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 8 * i);
    if ( v2 )
    {
      CTopLevelWindow::WindowFrame::~WindowFrame(*(CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames[0]
                                                                                  + 8 * i));
      DefaultHeap::Free(v2);
      v1 = CTopLevelWindow::s_rgpwfWindowFrames[0];
    }
    *(_QWORD *)(v1 + 8 * i) = 0LL;
  }
  dword_1801159F0 = 0;
  DynArrayImpl<0>::ShrinkToSize(CTopLevelWindow::s_rgpwfWindowFrames, 8LL);
}
