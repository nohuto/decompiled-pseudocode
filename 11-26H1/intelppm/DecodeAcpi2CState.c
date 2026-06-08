/*
 * XREFs of DecodeAcpi2CState @ 0x1400426F8
 * Callers:
 *     RegisterHiddenIdleStates @ 0x1400386F0 (RegisterHiddenIdleStates.c)
 *     RegisterHvCStates @ 0x14003E288 (RegisterHvCStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x140041DEC (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelCStates @ 0x140042198 (RegisterKernelCStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x140042754 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall DecodeAcpi2CState(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = DecodeAcpiIdleState(a1, a2, *(unsigned __int8 *)(a2 + 12), 0, a3, a4, 0LL, a5);
  if ( (int)result >= 0 )
  {
    if ( a5 )
      *(_BYTE *)(a5 + 83) = *(_BYTE *)(a2 + 12);
  }
  return result;
}
