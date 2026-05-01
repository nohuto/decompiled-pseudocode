/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$16 @ 0x1806DC848
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ @ 0x1802D1D9C (--1-$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1_::_1_::dtor_16(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 352) = *(_QWORD *)(a2 + 448) + 392LL;
  std::enable_shared_from_this<CAppThumbnailWindow>::~enable_shared_from_this<CAppThumbnailWindow>(*(_QWORD *)(a2 + 352));
}
