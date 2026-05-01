/*
 * XREFs of ?GetCurrentRegionCode@RegionHelpers@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2345@@Z @ 0x1806514A4
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18031FF80 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1803E858C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ActivateInstance@UIGeographicRegion@Globalization@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIGeographicRegion@Globalization@1@@Z @ 0x180651408 (--$ActivateInstance@UIGeographicRegion@Globalization@Windows@@@Foundation@Windows@@YAJPEAUHSTRIN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::RegionHelpers::GetCurrentRegionCode(
        __int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r9
  const WCHAR *StringRawBuffer; // rax
  PCWSTR v11; // rax
  HSTRING string; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Globalization.GeographicRegion",
    0x27u,
    0x26u);
  v2 = v16;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  v3 = Windows::Foundation::ActivateInstance<Windows::Globalization::IGeographicRegion>(v2, &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    string = 0LL;
    v5 = v14;
    v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = v6(v5, &string);
    v4 = v7;
    if ( v7 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"ZZ", -1, 0) == 2 )
      {
        v4 = -2147467259;
        v9 = 2147500037LL;
        v8 = 26LL;
        goto LABEL_6;
      }
      v11 = WindowsGetStringRawBuffer(string, 0LL);
      v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             a1,
             (__int64)v11,
             0xFFFFFFFFFFFFFFFFuLL);
      v4 = v7;
      if ( v7 >= 0 )
      {
        WindowsDeleteString(string);
        string = 0LL;
        v4 = 0;
        goto LABEL_12;
      }
      v8 = 33LL;
    }
    else
    {
      v8 = 22LL;
    }
    v9 = (unsigned int)v7;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\regionhelpers.cpp",
      (const char *)v9);
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\regionhelpers.cpp",
    (const char *)(unsigned int)v3);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return v4;
}
