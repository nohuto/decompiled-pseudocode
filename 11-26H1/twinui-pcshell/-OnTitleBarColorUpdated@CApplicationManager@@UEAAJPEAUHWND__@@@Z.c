/*
 * XREFs of ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180061AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180063534 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064C74 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8290e632a916fcbfe496814c16b6608a___ @ 0x1802DC824 (Windows--Internal--ComTaskPool--QueueTask__lambda_8290e632a916fcbfe496814c16b6608a___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnTitleBarColorUpdated(CApplicationManager *this, HWND a2)
{
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v5; // rcx
  __int64 v7; // rcx
  int v8; // eax
  struct IApplicationFrameProxy *v9; // rcx
  struct IApplicationFrameProxy *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct IApplicationFrameProxy *v12; // [rsp+30h] [rbp+10h] BYREF
  char v13; // [rsp+40h] [rbp+20h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd((CApplicationManager *)((char *)this - 344), a2, &v12);
  if ( FrameByHwnd < 0 )
  {
    v5 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return (unsigned int)FrameByHwnd;
  }
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v13, &v12);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_8290e632a916fcbfe496814c16b6608a___(v7, &v13);
  FrameByHwnd = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x208F,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(&v13);
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return (unsigned int)FrameByHwnd;
  }
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(&v13);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
