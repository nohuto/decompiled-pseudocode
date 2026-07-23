/*
 * XREFs of MiWakeList @ 0x1407149F4
 * Callers:
 *     MiFreeDeferredAcceleratorPool @ 0x1402A5E74 (MiFreeDeferredAcceleratorPool.c)
 *     MiUnlinkAccelerator @ 0x1407148A4 (MiUnlinkAccelerator.c)
 * Callees:
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 */

void __fastcall MiWakeList(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx

  if ( a1 )
  {
    do
    {
      v3 = (_QWORD *)*a1;
      KeSignalGate((__int64)(a1 + 1), 1LL, a3);
      a1 = v3;
    }
    while ( v3 );
  }
}
