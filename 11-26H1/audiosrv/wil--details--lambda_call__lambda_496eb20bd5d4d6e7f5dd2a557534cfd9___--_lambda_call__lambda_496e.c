/*
 * XREFs of wil::details::lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___::_lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___ @ 0x1800C4318
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800CB974 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$7 @ 0x1801681B9 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$7.c)
 * Callees:
 *     _lambda_8586584b4f8edc753e86ab7e770d4c6f_::operator() @ 0x1800C4670 (_lambda_8586584b4f8edc753e86ab7e770d4c6f_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___::_lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___(
        __int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    v2[0] = *(_QWORD *)a1;
    v2[1] = *(_QWORD *)(a1 + 8);
    v2[2] = *(_QWORD *)(a1 + 16);
    v2[3] = *(_QWORD *)(a1 + 24);
    v2[4] = *(_QWORD *)(a1 + 32);
    return lambda_8586584b4f8edc753e86ab7e770d4c6f_::operator()(v2);
  }
  return result;
}
