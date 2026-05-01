/*
 * XREFs of std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CLauncherTipContextMenu::LTCMITEM______std::back_insert_iterator_std::vector_unsigned_long_std::allocator_unsigned_long_______lambda_d78cea801e174b4d7e0aca6d1c25d446___ @ 0x180600274
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18026730C (--$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-.c)
 */

_QWORD *__fastcall std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_CLauncherTipContextMenu::LTCMITEM______std::back_insert_iterator_std::vector_unsigned_long_std::allocator_unsigned_long_______lambda_d78cea801e174b4d7e0aca6d1c25d446___(
        _QWORD *a1,
        int *a2,
        int *a3,
        _QWORD *a4,
        int a5)
{
  int *i; // rsi
  _DWORD *v9; // rdx
  int v10; // eax
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 3 )
  {
    v9 = (_DWORD *)a4[1];
    v10 = *i;
    a5 = *i;
    if ( v9 == (_DWORD *)a4[2] )
    {
      std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Emplace_reallocate<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId const &>(
        a4,
        (__int64)v9,
        &a5);
    }
    else
    {
      *v9 = v10;
      a4[1] += 4LL;
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
