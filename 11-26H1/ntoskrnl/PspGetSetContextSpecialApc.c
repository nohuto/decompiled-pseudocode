/*
 * XREFs of PspGetSetContextSpecialApc @ 0x140735750
 * Callers:
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 */

int __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  void *SetContextInternal; // rax
  PRKEVENT Event[9]; // [rsp+C0h] [rbp-48h] BYREF

  SetContextInternal = (void *)PspGetSetContextInternal(a1, *a4, Event);
  if ( SetContextInternal )
    _fxrstor(SetContextInternal);
  if ( Event[0] )
    LODWORD(SetContextInternal) = KeSetEvent(Event[0], 1, 0);
  return (int)SetContextInternal;
}
