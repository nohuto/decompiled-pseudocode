/*
 * XREFs of wil::details::lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___::_lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___ @ 0x1800B0284
 * Callers:
 *     _EffectPack::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$1 @ 0x180165287 (_EffectPack--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$1.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x18004BF24 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___::_lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___(
        __int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = 2;
    if ( **(_DWORD **)(a1 + 8) != 3 )
      v1 = 0;
    return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)(*(_QWORD *)a1 + 1584LL), v1);
  }
  return result;
}
