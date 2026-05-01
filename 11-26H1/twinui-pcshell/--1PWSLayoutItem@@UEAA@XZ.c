/*
 * XREFs of ??1PWSLayoutItem@@UEAA@XZ @ 0x1803F2D34
 * Callers:
 *     ??_EPWSLayoutItem@@UEAAPEAXI@Z @ 0x1803F2D70 (--_EPWSLayoutItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall PWSLayoutItem::~PWSLayoutItem(PWSLayoutItem *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 40);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 16);
  *((_DWORD *)this + 3) = -1073741823;
}
