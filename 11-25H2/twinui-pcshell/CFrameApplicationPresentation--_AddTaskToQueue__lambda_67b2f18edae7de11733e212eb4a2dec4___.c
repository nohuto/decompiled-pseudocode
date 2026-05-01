/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_67b2f18edae7de11733e212eb4a2dec4___ @ 0x18030801C
 * Callers:
 *     ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x18021B720 (-UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5a89b6450af0da03016498a5e0f8799e___ @ 0x180307A8C (Windows--Internal--ComTaskPool--QueueTask__lambda_5a89b6450af0da03016498a5e0f8799e___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_67b2f18edae7de11733e212eb4a2dec4___(
        _DWORD *a1,
        __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _DWORD *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( a1[14] == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v11 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v5 = a1[12];
    v9[1] = (__int64)a1;
    v9[2] = a2;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_5a89b6450af0da03016498a5e0f8799e___(
           v7,
           v6,
           v5,
           (volatile signed __int32 *)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
    if ( v4 >= 0 )
      ++a1[52];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  }
  return (unsigned int)v4;
}
