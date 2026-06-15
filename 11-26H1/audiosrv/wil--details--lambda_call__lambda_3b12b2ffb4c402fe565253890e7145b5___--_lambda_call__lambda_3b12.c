/*
 * XREFs of wil::details::lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___::_lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___ @ 0x1800C42F8
 * Callers:
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800CBEE0 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$10 @ 0x18016825B (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$10.c)
 * Callees:
 *     _lambda_3b12b2ffb4c402fe565253890e7145b5_::operator() @ 0x1800C45EC (_lambda_3b12b2ffb4c402fe565253890e7145b5_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___::_lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_3b12b2ffb4c402fe565253890e7145b5_::operator()();
  }
  return result;
}
