/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@UREGKEYINFO@@@std@@EEAAXXZ @ 0x180584E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj2<REGKEYINFO>::_Destroy(__int64 a1)
{
  REGKEYINFO::~REGKEYINFO((wil::details::registry_watcher_state **)(a1 + 16));
}
