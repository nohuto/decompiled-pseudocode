/*
 * XREFs of ExGetPrmInterface @ 0x140844F70
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExGetPrmInterface(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( !a2 )
    return 3221225712LL;
  *(_DWORD *)(a2 + 4) = 0;
  *(_QWORD *)(a2 + 24) = PrmInvokeHandler;
  *(_QWORD *)(a2 + 16) = PrmLockModule;
  *(_QWORD *)(a2 + 8) = PrmUnlockModule;
  *(_QWORD *)(a2 + 32) = PrmQueryHandler;
  result = 0LL;
  *(_DWORD *)a2 = a1;
  return result;
}
