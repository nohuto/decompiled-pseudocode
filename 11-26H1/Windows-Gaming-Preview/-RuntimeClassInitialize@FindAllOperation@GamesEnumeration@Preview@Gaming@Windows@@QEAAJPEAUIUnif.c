/*
 * XREFs of ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x18000F204
 * Callers:
 *     _lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator() @ 0x18001AFF8 (_lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x18000E178 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E904 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180010A10 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *a2,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *a3,
        HSTRING a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  HRESULT v10; // eax
  PCWSTR StringRawBuffer; // rax
  _WORD *v12; // rax
  PCWSTR v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  INT32 result; // [rsp+20h] [rbp-40h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-38h] BYREF
  HSTRING v19; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  if ( *((struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager **)this + 14) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler **)this + 26) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)a3 + 8LL))(a3);
    v9 = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( !WindowsIsStringEmpty(a4) )
  {
    newString = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"processexe:", 0xBu, &hstringHeader, &string);
    if ( v10 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
      JUMPOUT(0x18000F42ELL);
    }
    WindowsDeleteString(newString);
    if ( WindowsSubstringWithSpecifiedLength(a4, 0, 0xBu, &newString) >= 0 )
    {
      result = 0;
      if ( WindowsCompareStringOrdinal(newString, string, &result) >= 0 && !result )
      {
        WindowsDeleteString(0LL);
        v19 = 0LL;
        if ( WindowsSubstring(a4, 0xCu, &v19) >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(v19, 0LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
            (__int64)this + 88,
            (__int64)StringRawBuffer);
        }
        WindowsDeleteString(v19);
      }
    }
    v12 = (_WORD *)*((_QWORD *)this + 11);
    if ( !v12 || !*v12 )
    {
      v13 = WindowsGetStringRawBuffer(a4, 0LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        (__int64)this + 64,
        (__int64)v13);
    }
    string = 0LL;
    WindowsDeleteString(newString);
  }
  v14 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start(this);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v14);
  return v15;
}
