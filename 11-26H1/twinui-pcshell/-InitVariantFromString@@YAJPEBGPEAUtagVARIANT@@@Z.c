/*
 * XREFs of ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1804D1760
 * Callers:
 *     ?GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1804D10E0 (-GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetPropertyValue@AppResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180533BF0 (-GetPropertyValue@AppResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x180533E20 (-RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z.c)
 *     ?GetPropertyValue@CoverWindowAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180535660 (-GetPropertyValue@CoverWindowAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetPropertyValue@JointResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x18053B840 (-GetPropertyValue@JointResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z @ 0x18053B9A0 (-RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z.c)
 *     ?GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180549970 (-GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180549B30 (-GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?StartDrag@CDragVisualAcc@@UEAAXXZ @ 0x18054A800 (-StartDrag@CDragVisualAcc@@UEAAXXZ.c)
 *     ?_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ @ 0x18054AA88 (-_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitVariantFromString(const unsigned __int16 *a1, struct tagVARIANT *a2)
{
  BSTR v4; // rax
  unsigned int v5; // r8d

  a2->vt = 8;
  v4 = SysAllocString(a1);
  v5 = 0;
  a2->llVal = (LONGLONG)v4;
  if ( !v4 )
  {
    VariantInit(a2);
    return a1 != 0LL ? -2147024882 : -2147024809;
  }
  return v5;
}
