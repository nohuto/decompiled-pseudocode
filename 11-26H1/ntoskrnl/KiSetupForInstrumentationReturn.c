/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x140488168
 * Callers:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     KiRaiseException @ 0x1403D3C10 (KiRaiseException.c)
 *     KiInitializeUserApc @ 0x140446248 (KiInitializeUserApc.c)
 *     KeRaiseUserException @ 0x140529EA0 (KeRaiseUserException.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall KiSetupForInstrumentationReturn(__int64 a1)
{
  struct _KTHREAD *result; // rax
  void *InstrumentationCallback; // r8

  result = KeGetCurrentThread();
  InstrumentationCallback = result->ApcState.Process->InstrumentationCallback;
  if ( InstrumentationCallback )
  {
    if ( *(_WORD *)(a1 + 368) == 51 )
    {
      result = *(struct _KTHREAD **)(a1 + 360);
      *(_QWORD *)(a1 + 88) = result;
      *(_QWORD *)(a1 + 360) = InstrumentationCallback;
    }
  }
  return result;
}
