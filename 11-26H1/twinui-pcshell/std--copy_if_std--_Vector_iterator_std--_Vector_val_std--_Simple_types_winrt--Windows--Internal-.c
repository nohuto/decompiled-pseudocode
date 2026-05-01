/*
 * XREFs of std::copy_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId______std::back_insert_iterator_std::vector_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_std::allocator_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_______lambda_b3007e5732dafc6e72073e6a3605e07b___ @ 0x1806A8774
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18009B7CC (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18026730C (--$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-.c)
 *     ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x1806A93D4 (-DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z.c)
 */

_QWORD *__fastcall std::copy_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId______std::back_insert_iterator_std::vector_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_std::allocator_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_______lambda_b3007e5732dafc6e72073e6a3605e07b___(
        _QWORD *a1,
        int *a2,
        int *a3,
        _QWORD *a4,
        XamlSnapAssistViewHost *a5)
{
  int *i; // rsi
  int *v9; // rdx
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( !XamlSnapAssistViewHost::DoesWindowOverlapPrimaryOrEmptyRegion(a5, (HWND)(unsigned int)*i) )
    {
      v9 = (int *)a4[1];
      if ( v9 == (int *)a4[2] )
      {
        std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Emplace_reallocate<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId const &>(
          a4,
          (__int64)v9,
          i);
      }
      else
      {
        *v9 = *i;
        a4[1] += 4LL;
      }
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
