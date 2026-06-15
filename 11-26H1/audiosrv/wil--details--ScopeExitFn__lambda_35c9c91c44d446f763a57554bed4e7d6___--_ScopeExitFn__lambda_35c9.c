/*
 * XREFs of wil::details::ScopeExitFn__lambda_35c9c91c44d446f763a57554bed4e7d6___::_ScopeExitFn__lambda_35c9c91c44d446f763a57554bed4e7d6___ @ 0x1800C4290
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$7 @ 0x180167B8B (_BuildDeviceGraphForStream_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_35c9c91c44d446f763a57554bed4e7d6___::_ScopeExitFn__lambda_35c9c91c44d446f763a57554bed4e7d6___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_QWORD *)(result + 144) = 0LL;
  }
  return result;
}
