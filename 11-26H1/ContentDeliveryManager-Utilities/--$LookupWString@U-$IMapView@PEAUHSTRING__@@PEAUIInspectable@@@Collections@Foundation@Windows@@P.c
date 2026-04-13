/*
 * XREFs of ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800AB254
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800AB5F0 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x18005CCB4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ??$LookupHString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x1800AB180 (--$LookupHString@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@P.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
        __int64 a1,
        HSTRING a2,
        _QWORD *a3)
{
  _WORD *v5; // rax
  char v6; // di
  __int64 v7; // rdx
  PCWSTR StringRawBuffer; // rax
  HSTRING string; // [rsp+38h] [rbp+10h] BYREF

  string = a2;
  if ( a3[3] < 8uLL )
    v5 = a3;
  else
    v5 = (_WORD *)*a3;
  v6 = 0;
  a3[2] = 0LL;
  *v5 = 0;
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( PropertySetHelper::LookupHString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
         a1,
         v7,
         &string) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    std::wstring::assign((__int64)a3, (__int64)StringRawBuffer);
    v6 = 1;
  }
  WindowsDeleteString(string);
  return v6;
}
