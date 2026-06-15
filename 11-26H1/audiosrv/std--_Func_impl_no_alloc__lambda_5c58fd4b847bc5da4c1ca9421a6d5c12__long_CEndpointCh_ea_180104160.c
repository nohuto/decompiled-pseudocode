/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCharacteristics___::_Do_call @ 0x180104160
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013BAF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCharacteristics___::_Do_call(
        __int64 a1,
        CEndpointCharacteristics **a2)
{
  struct _GUID v2; // xmm0
  CEndpointCharacteristics *v3; // rcx
  struct _GUID Buf1; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(struct _GUID *)*(_QWORD *)(a1 + 8);
  v3 = *a2;
  Buf1 = v2;
  return CEndpointCharacteristics::RemoveEffectPack(v3, &Buf1);
}
