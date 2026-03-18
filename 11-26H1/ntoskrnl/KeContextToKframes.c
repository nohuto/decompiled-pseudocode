/*
 * XREFs of KeContextToKframes @ 0x140533AE0
 * Callers:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     KyRaiseException @ 0x1403D3E8C (KyRaiseException.c)
 *     KiContinueEx @ 0x1403D58B0 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x1403D5A70 (KiContinuePreviousModeUser.c)
 *     KiRestoreProcessorState @ 0x1405FD4A8 (KiRestoreProcessorState.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 * Callees:
 *     KxContextToKframes @ 0x1403D52E0 (KxContextToKframes.c)
 */

__int64 __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( (_BYTE)result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
