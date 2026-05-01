/*
 * XREFs of ??1ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x1804C50E8
 * Callers:
 *     ??_GSwitchItemCloseAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804C5330 (--_GSwitchItemCloseAnimationCoordinator@@UEAAPEAXI@Z.c)
 *     ??_GVirtualDesktopAddAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804CEFC0 (--_GVirtualDesktopAddAnimationCoordinator@@UEAAPEAXI@Z.c)
 *     ??_EVirtualDesktopRemoveAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804CF790 (--_EVirtualDesktopRemoveAnimationCoordinator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180067A40 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

void __fastcall ItemAnimationCoordinatorBase::~ItemAnimationCoordinatorBase(ItemAnimationCoordinatorBase *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi

  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((ItemAnimationCoordinatorBase *)((char *)this + 216));
  v2 = (unsigned __int64 *)((char *)this + 192);
  if ( *((_QWORD *)this + 23) )
  {
    v3 = 0LL;
    if ( *v2 )
    {
      v4 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v4 + *((_QWORD *)this + 23)));
        ++v3;
        v4 += 24LL;
      }
      while ( v3 < *v2 );
    }
    CoTaskMemFree(*((LPVOID *)this + 23));
    *((_QWORD *)this + 23) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  if ( *((_QWORD *)this + 19) )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 20) )
    {
      v6 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v6 + *((_QWORD *)this + 19)));
        ++v5;
        v6 += 48LL;
      }
      while ( v5 < *((_QWORD *)this + 20) );
    }
    CoTaskMemFree(*((LPVOID *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  if ( *((_QWORD *)this + 15) )
  {
    v7 = 0LL;
    if ( *((_QWORD *)this + 16) )
    {
      v8 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v8 + *((_QWORD *)this + 15) + 8LL));
        ++v7;
        v8 += 32LL;
      }
      while ( v7 < *((_QWORD *)this + 16) );
    }
    CoTaskMemFree(*((LPVOID *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    v9 = 0LL;
    if ( *((_QWORD *)this + 12) )
    {
      v10 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v10 + *((_QWORD *)this + 11) + 8LL));
        ++v9;
        v10 += 32LL;
      }
      while ( v9 < *((_QWORD *)this + 12) );
    }
    CoTaskMemFree(*((LPVOID *)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v11 = 0LL;
    if ( *((_QWORD *)this + 8) )
    {
      v12 = 0LL;
      do
      {
        _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)(v12 + *((_QWORD *)this + 7)));
        ++v11;
        v12 += 16LL;
      }
      while ( v11 < *((_QWORD *)this + 8) );
    }
    CoTaskMemFree(*((LPVOID *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  if ( *((_QWORD *)this + 3) )
  {
    v13 = 0LL;
    if ( *((_QWORD *)this + 4) )
    {
      v14 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v14 + *((_QWORD *)this + 3) + 8LL));
        ++v13;
        v14 += 32LL;
      }
      while ( v13 < *((_QWORD *)this + 4) );
    }
    CoTaskMemFree(*((LPVOID *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
}
