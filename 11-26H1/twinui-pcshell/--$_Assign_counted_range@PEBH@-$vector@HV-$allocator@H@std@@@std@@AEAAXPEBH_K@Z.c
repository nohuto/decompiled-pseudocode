/*
 * XREFs of ??$_Assign_counted_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXPEBH_K@Z @ 0x180220F30
 * Callers:
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x18013B8F4 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180279DE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1802B45DC (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Copy_memmove_n@PEBHPEAH@std@@YAPEAHPEBH_KPEAH@Z @ 0x1802C0F48 (--$_Copy_memmove_n@PEBHPEAH@std@@YAPEAHPEBH_KPEAH@Z.c)
 */

__int64 __fastcall std::vector<int>::_Assign_counted_range<int const *>(__int64 *a1, char *a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  char *v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rbp

  v3 = *a1;
  v4 = a3;
  if ( a3 <= (a1[2] - *a1) >> 2 )
  {
    v9 = (a1[1] - v3) >> 2;
    if ( a3 > v9 )
    {
      std::_Copy_memmove_n<int const *,int *>(a2);
      v3 = a1[1];
      v7 = &a2[4 * v9];
      v4 -= v9;
      goto LABEL_4;
    }
  }
  else
  {
    std::vector<int>::_Clear_and_reserve_geometric(a1, a3);
    v3 = *a1;
  }
  v7 = a2;
LABEL_4:
  std::_Copy_memmove_n<int const *,int *>(v7);
  result = v3 + 4 * v4;
  a1[1] = result;
  return result;
}
