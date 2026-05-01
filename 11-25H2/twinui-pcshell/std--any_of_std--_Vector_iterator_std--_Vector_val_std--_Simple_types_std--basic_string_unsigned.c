/*
 * XREFs of std::any_of_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___________lambda_e0cb6d42b7b600bc273267a5e4fc27a3___ @ 0x1801FB240
 * Callers:
 *     ?IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z @ 0x1801FB218 (-IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::any_of_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___________lambda_e0cb6d42b7b600bc273267a5e4fc27a3___(
        __int64 a1,
        __int64 a2,
        LPCWCH *a3)
{
  const WCHAR *v6; // rcx

  while ( 1 )
  {
    if ( a1 == a2 )
      return 0;
    v6 = (const WCHAR *)a1;
    if ( *(_QWORD *)(a1 + 24) > 7uLL )
      v6 = *(const WCHAR **)a1;
    if ( CompareStringOrdinal(v6, -1, *a3, -1, 1) == 2 )
      break;
    a1 += 32LL;
  }
  return 1;
}
