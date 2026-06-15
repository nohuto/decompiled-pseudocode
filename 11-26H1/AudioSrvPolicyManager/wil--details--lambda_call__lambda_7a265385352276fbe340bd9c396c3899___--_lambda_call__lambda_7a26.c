/*
 * XREFs of wil::details::lambda_call__lambda_7a265385352276fbe340bd9c396c3899___::_lambda_call__lambda_7a265385352276fbe340bd9c396c3899___ @ 0x18002E790
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$12 @ 0x18004BF90 (_CApplicationManager--RpcGetProcess_--_1_--dtor$12.c)
 * Callees:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020B2C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_7a265385352276fbe340bd9c396c3899___::_lambda_call__lambda_7a265385352276fbe340bd9c396c3899___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return CApplicationManager::Unregister(*(CApplicationManager **)a1, **(struct CProcess ***)(a1 + 8));
  }
  return result;
}
