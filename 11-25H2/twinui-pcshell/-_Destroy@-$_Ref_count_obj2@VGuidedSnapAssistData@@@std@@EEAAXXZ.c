/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@EEAAXXZ @ 0x1802C3230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<GuidedSnapAssistData>::_Destroy(__int64 a1)
{
  return std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy(a1 + 16);
}
