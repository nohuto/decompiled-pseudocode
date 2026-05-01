/*
 * XREFs of ??1?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x180574754
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180574950 (--_G-$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_42dce70c870a3964e7319458b8bf7bca_>::~CTaskWrapper<_lambda_42dce70c870a3964e7319458b8bf7bca_>(
        __int64 a1)
{
  __int64 result; // rax

  result = std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
