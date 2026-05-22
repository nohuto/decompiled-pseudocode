/*
 * XREFs of ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x1800204B8
 * Callers:
 *     ?GetDeviceInstanceId@PnpApiWrapper@@YAJPEAUHSTRING__@@AEAPEAU2@@Z @ 0x1800202BC (-GetDeviceInstanceId@PnpApiWrapper@@YAJPEAUHSTRING__@@AEAPEAU2@@Z.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180020350 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x1800E5D0C (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800207CC (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceStringProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        HSTRING *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v11; // [rsp+A0h] [rbp+40h] BYREF
  HSTRING *string; // [rsp+B8h] [rbp+58h]

  string = a4;
  *a4 = 0LL;
  v11 = 0;
  v9 = 0;
  v4 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, int *, _QWORD))this)(
         a2,
         a3,
         &v11,
         0LL);
  if ( !v4 || v4 == 26 )
    return 0LL;
  if ( v4 == 37 )
    return 1LL;
  v7 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v4, v5);
  v8 = v7;
  if ( v7 == -2147023728 )
    return 2147943568LL;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AC,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
    (const char *)(unsigned int)v7,
    (int)&v9);
  return v8;
}
