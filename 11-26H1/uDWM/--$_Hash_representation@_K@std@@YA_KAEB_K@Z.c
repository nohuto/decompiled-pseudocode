/*
 * XREFs of ??$_Hash_representation@_K@std@@YA_KAEB_K@Z @ 0x18009A4DC
 * Callers:
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x18009A81C (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18009B164 (-find@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash_representation<unsigned __int64>(const unsigned __int8 *a1)
{
  return std::_Fnv1a_append_value<unsigned __int64>((__int64)a1, a1);
}
