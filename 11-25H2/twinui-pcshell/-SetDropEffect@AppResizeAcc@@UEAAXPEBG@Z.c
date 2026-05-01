/*
 * XREFs of ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x180511990
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1801EDBB0 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x1805115F8 (-ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z.c)
 *     ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x180511700 (-RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z.c)
 */

void __fastcall AppResizeAcc::SetDropEffect(AppResizeAcc *this, const unsigned __int16 *a2)
{
  if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
         (const WCHAR **)this + 10,
         a2,
         -1) != 2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
      (__int64)this + 80,
      (__int64)a2,
      0xFFFFFFFFFFFFFFFFuLL);
    AppResizeAcc::RaisePropertyChangeNotification((AppResizeAcc *)((char *)this - 16), 30139);
    AppResizeAcc::RaisePropertyChangeNotification((AppResizeAcc *)((char *)this - 16), 30140);
    AppResizeAcc::ProcessPendingNotifications((IRawElementProviderSimple *)this - 2, 1);
  }
}
