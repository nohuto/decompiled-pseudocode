/*
 * XREFs of ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x18054A740
 * Callers:
 *     ?OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ @ 0x18054A510 (-OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ.c)
 *     ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x18054A530 (-PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1801E0A00 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ @ 0x18054AA88 (-_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::SetDropEffect(CDragVisualAcc *this, const unsigned __int16 *a2)
{
  IRawElementProviderSimple *v2; // rbx
  char *v4; // rsi

  v2 = (IRawElementProviderSimple *)((char *)this - 32);
  if ( *((_BYTE *)this + 20) )
  {
    v4 = (char *)this + 128;
    if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
           (__int64)this + 128,
           a2,
           -1) != 2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        (__int64)v4,
        (__int64)a2,
        0xFFFFFFFFFFFFFFFFuLL);
      CDragVisualAcc::_RaiseDropEffectChangeEvent(v2);
    }
  }
}
