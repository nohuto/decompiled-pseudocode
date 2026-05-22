/*
 * XREFs of ?FindTopLevelWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800A7FD8
 * Callers:
 *     ?AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z @ 0x1800A7F40 (-AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z.c)
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800A86C0 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 * Callees:
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180061B10 (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800A801C (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 */

__int64 *__fastcall CUIHierarchy::FindTopLevelWindow(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rdx

  CUIHierarchy::FindWindowW();
  if ( *a2 )
  {
    while ( 1 )
    {
      v3 = (_QWORD *)(*a2 + 56);
      if ( !*v3 || *(_BYTE *)(*a2 + 48) )
        break;
      Microsoft::WRL::ComPtr<CUIWindow>::operator=(a2, v3);
    }
  }
  return a2;
}
