/*
 * XREFs of ?_Xran@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@CAXXZ @ 0x1802C7278
 * Callers:
 *     ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1800CC7FC (-at@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z.c)
 * Callees:
 *     <none>
 */

void std::deque<tagPRESENTFRAME>::_Xran()
{
  std::_Xout_of_range("invalid deque<T> subscript");
  __debugbreak();
  JUMPOUT(0x1802C7290LL);
}
