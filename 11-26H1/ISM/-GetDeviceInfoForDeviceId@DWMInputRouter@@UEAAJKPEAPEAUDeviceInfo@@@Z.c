/*
 * XREFs of ?GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180053F40
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@std@@@std@@@2@AEBW4InputType@@@Z @ 0x1800CD1C0 (-find@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_compare@W4InputType@@U-$hash@W4I.c)
 */

__int64 __fastcall DWMInputRouter::GetDeviceInfoForDeviceId(DWMInputRouter *this, int a2, struct DeviceInfo **a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::find(
    (char *)this + 144,
    &v6,
    &v7);
  if ( v6 == *((_QWORD *)this + 19) )
    return 2147500037LL;
  result = 0LL;
  *a3 = *(struct DeviceInfo **)(v6 + 24);
  return result;
}
