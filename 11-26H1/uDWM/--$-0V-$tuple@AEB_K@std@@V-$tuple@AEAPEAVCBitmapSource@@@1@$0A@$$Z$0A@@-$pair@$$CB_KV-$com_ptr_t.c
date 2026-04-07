/*
 * XREFs of ??$?0V?$tuple@AEB_K@std@@V?$tuple@AEAPEAVCBitmapSource@@@1@$0A@$$Z$0A@@?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@AEAPEAVCBitmapSource@@@1@U?$integer_sequence@_K$0A@@1@2@Z @ 0x18009A43C
 * Callers:
 *     ??$_Try_emplace@AEB_KAEAPEAVCBitmapSource@@@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEB_KAEAPEAVCBitmapSource@@@Z @ 0x18009A4EC (--$_Try_emplace@AEB_KAEAPEAVCBitmapSource@@@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@VCBitmapSourc.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

_QWORD *__fastcall ____0V__tuple_AEB_K_std__V__tuple_AEAPEAVCBitmapSource___1__0A___Z_0A____pair___CB_KV__com_ptr_t_VCBitmapSource__Uerr_returncode_policy_wil___wil___std__AEAA_AEAV__tuple_AEB_K_1_AEAV__tuple_AEAPEAVCBitmapSource___1_U__integer_sequence__K_0A__1_2_Z(
        _QWORD *a1,
        _QWORD **a2,
        CBaseObject ***a3)
{
  _QWORD *v3; // r9
  CBaseObject *v4; // rcx

  v3 = a1;
  *a1 = **a2;
  v4 = **a3;
  v3[1] = v4;
  if ( v4 )
    CBaseObject::AddRef(v4);
  return v3;
}
