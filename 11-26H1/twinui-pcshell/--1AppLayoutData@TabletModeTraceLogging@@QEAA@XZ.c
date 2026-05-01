/*
 * XREFs of ??1AppLayoutData@TabletModeTraceLogging@@QEAA@XZ @ 0x18051529C
 * Callers:
 *     ??1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ @ 0x1805152C4 (--1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall TabletModeTraceLogging::AppLayoutData::~AppLayoutData(TabletModeTraceLogging::AppLayoutData *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 80);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 40);
}
