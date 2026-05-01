/*
 * XREFs of _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__0 @ 0x18066C894
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802C2AC8 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A2CDC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5,
        struct winrt::hstring *a6,
        struct winrt::hstring *a7)
{
  __int64 *v9; // rcx
  __int64 *v10; // r8
  unsigned int v11; // r8d
  unsigned int v12; // r8d

  std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>((_QWORD *)a1, a2);
  v9 += 2;
  *v9 = *v10;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(v9);
  *(_QWORD *)(a1 + 24) = *a4;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *a5;
  winrt::hstring::hstring((winrt::hstring *)(a1 + 40), a6, v11);
  winrt::hstring::hstring((winrt::hstring *)(a1 + 48), a7, v12);
  return a1;
}
