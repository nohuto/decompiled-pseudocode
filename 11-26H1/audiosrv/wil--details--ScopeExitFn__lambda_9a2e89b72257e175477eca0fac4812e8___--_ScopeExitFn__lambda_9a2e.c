/*
 * XREFs of wil::details::ScopeExitFn__lambda_9a2e89b72257e175477eca0fac4812e8___::_ScopeExitFn__lambda_9a2e89b72257e175477eca0fac4812e8___ @ 0x1800C42AC
 * Callers:
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$32 @ 0x180167EA3 (_CAudioResourceManager--CreateStream_--_1_--dtor$32.c)
 * Callees:
 *     <none>
 */

volatile __int32 *__fastcall wil::details::ScopeExitFn__lambda_9a2e89b72257e175477eca0fac4812e8___::_ScopeExitFn__lambda_9a2e89b72257e175477eca0fac4812e8___(
        __int64 a1)
{
  volatile __int32 *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(volatile __int32 **)a1;
    if ( **(_BYTE **)a1 )
    {
      result = *(volatile __int32 **)(**(_QWORD **)(a1 + 8) + 96LL);
      _InterlockedExchange(result + 69, 0);
    }
  }
  return result;
}
