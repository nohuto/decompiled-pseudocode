/*
 * XREFs of NVMeCancelAllCompletionQueueDpc @ 0x140016168
 * Callers:
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140024790 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCancelAllCompletionQueueDpc(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned int i; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v8 = 0;
  for ( i = 0; ; ++i )
  {
    v6 = *(_QWORD *)(a1 + 944);
    if ( !v6 || i >= *(unsigned __int16 *)(a1 + 332) )
      break;
    v4 = 392LL * i;
    v5 = v6 + 264;
    if ( !*(_BYTE *)(v4 + v6 + 248) )
      v5 = v6 + 24;
    v2 = StorPortExtendedFunction(95LL, a1, v4 + v5, &v8);
  }
  return v2;
}
