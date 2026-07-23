/*
 * XREFs of IvtWaitForGlobalCommandCompletion @ 0x1405AA648
 * Callers:
 *     IvtDisableGlobalCommandRegisterField @ 0x1405A8808 (IvtDisableGlobalCommandRegisterField.c)
 *     IvtEnableGlobalCommandRegisterField @ 0x1405A8AA0 (IvtEnableGlobalCommandRegisterField.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall IvtWaitForGlobalCommandCompletion(__int64 a1, unsigned int a2, unsigned int a3)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // rbp
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 result; // rax

  v4 = a3;
  v5 = a2;
  v6 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL);
  while ( 1 )
  {
    result = (unsigned int)v5 & v7;
    if ( (_DWORD)result == (_DWORD)v4 )
      break;
    if ( v6 >= 0x186A0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, v5, v4, v7);
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL);
    KeStallExecutionProcessor(1u);
    ++v6;
  }
  return result;
}
