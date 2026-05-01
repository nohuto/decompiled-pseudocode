/*
 * XREFs of ?push_back@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAX$$QEAVString@Internal@Windows@@@Z @ 0x1801C5E40
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Windows::Internal::String>::push_back(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r9
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 8);
  if ( v2 == *(__int64 **)(a1 + 16) )
    return std::vector<Windows::Internal::String>::_Emplace_reallocate<Windows::Internal::String>(
             a1,
             *(_QWORD *)(a1 + 8),
             a2);
  result = *a2;
  *v2 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 8) += 8LL;
  return result;
}
