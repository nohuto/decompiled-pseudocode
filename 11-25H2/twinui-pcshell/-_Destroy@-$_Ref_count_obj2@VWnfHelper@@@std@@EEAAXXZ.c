/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VWnfHelper@@@std@@EEAAXXZ @ 0x18047D670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<WnfHelper>::_Destroy(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    result = RtlUnsubscribeWnfStateChangeNotification(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
