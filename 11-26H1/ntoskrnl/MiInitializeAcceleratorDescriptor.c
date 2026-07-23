/*
 * XREFs of MiInitializeAcceleratorDescriptor @ 0x140714428
 * Callers:
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiThreadWorker @ 0x1403CD1F0 (MiThreadWorker.c)
 *     MiSoloZeroHugeRange @ 0x14070A054 (MiSoloZeroHugeRange.c)
 *     MiCreateAcceleratorDescriptor @ 0x140714104 (MiCreateAcceleratorDescriptor.c)
 * Callees:
 *     AccelInitializeDescriptor @ 0x1406E3224 (AccelInitializeDescriptor.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_QWORD *__fastcall MiInitializeAcceleratorDescriptor(__int64 a1, _QWORD *a2)
{
  memset_0(a2, 0, *(_QWORD *)(a1 + 32) + 32LL);
  if ( (int)AccelInitializeDescriptor(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 32), (__int64)(a2 + 4)) < 0 )
    return 0LL;
  a2[2] = a1;
  return a2 + 4;
}
