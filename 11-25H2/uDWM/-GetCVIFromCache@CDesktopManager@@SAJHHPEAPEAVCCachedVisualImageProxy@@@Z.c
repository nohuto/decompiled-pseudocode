/*
 * XREFs of ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180052A4C
 * Callers:
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180051944 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180056E94 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x180052D98 (-_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z.c)
 */

__int64 __fastcall CDesktopManager::GetCVIFromCache(int a1, int a2, struct CCachedVisualImageProxy **a3)
{
  unsigned int v4; // edi
  __int64 i; // rax
  __int64 v6; // rbx
  CDesktopManager *v8; // rcx

  v4 = -2147467259;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v6 = (unsigned int)i;
    if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + i + 154) )
    {
      if ( CDesktopManager::_IsSameAsTargetCachedCVI(a1, a2) )
      {
        v8 = CDesktopManager::s_pDesktopManagerInstance;
        *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + v6 + 154);
        *((_QWORD *)v8 + v6 + 154) = 0LL;
        return 0;
      }
      return v4;
    }
  }
  return v4;
}
