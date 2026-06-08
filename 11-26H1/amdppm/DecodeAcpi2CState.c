/*
 * XREFs of DecodeAcpi2CState @ 0x140025FD8
 * Callers:
 *     RegisterHiddenIdleStates @ 0x140034D40 (RegisterHiddenIdleStates.c)
 *     RegisterKernelCStates @ 0x140035148 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1400360D8 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterHvCStates @ 0x14003D678 (RegisterHvCStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x140026034 (DecodeAcpiIdleState.c)
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
