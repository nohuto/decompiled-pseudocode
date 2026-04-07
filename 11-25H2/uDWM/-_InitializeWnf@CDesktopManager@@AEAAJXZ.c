/*
 * XREFs of ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x18007FDE4
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::_InitializeWnf(CDesktopManager *this)
{
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (int)RtlQueryWnfStateData(
              &v4,
              WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS,
              CDesktopManager::ModernDDAWnfCallback,
              0LL,
              0LL) < 0 )
    goto LABEL_2;
  if ( (int)RtlSubscribeWnfStateChangeNotification(
              (char *)this + 1280,
              WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS,
              v4,
              CDesktopManager::ModernDDAWnfCallback,
              *((_QWORD *)this + 58),
              0LL,
              0,
              0) < 0 )
  {
LABEL_8:
    OutputDebugStringW(L"Failed RtlSubscribeWnfStateChangeNotification");
    return (unsigned int)-2147467259;
  }
  if ( (int)RtlQueryWnfStateData(
              &v4,
              WNF_TMCN_ISTABLETMODE,
              CDesktopManager::TabletModeWnfCallback,
              (char *)this + 1120,
              0LL) >= 0 )
  {
    if ( (int)RtlSubscribeWnfStateChangeNotification(
                (char *)this + 1288,
                WNF_TMCN_ISTABLETMODE,
                v4,
                CDesktopManager::TabletModeWnfCallback,
                (char *)this + 1120,
                0LL,
                0,
                0) >= 0 )
      return v2;
    goto LABEL_8;
  }
LABEL_2:
  OutputDebugStringW(L"Failed RtlQueryWnfStateData");
  return (unsigned int)-2147024809;
}
