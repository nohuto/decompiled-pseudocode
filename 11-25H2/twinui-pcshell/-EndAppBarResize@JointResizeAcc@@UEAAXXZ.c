/*
 * XREFs of ?EndAppBarResize@JointResizeAcc@@UEAAXXZ @ 0x180518970
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E9770 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     _anonymous_namespace_::RaiseUiaNotificationFromString @ 0x180518D78 (_anonymous_namespace_--RaiseUiaNotificationFromString.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall JointResizeAcc::EndAppBarResize(JointResizeAcc *this)
{
  _BYTE v1[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v1, 0, 24);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
    (__int64)v1,
    (__int64)&_ImageBase,
    2013LL);
  anonymous_namespace_::RaiseUiaNotificationFromString(v1);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v1);
}
