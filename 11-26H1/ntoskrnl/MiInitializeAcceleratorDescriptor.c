/*
 * XREFs of MiInitializeAcceleratorDescriptor @ 0x14070F72C
 * Callers:
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiThreadWorker @ 0x1403C32F0 (MiThreadWorker.c)
 *     MiSoloZeroHugeRange @ 0x140705384 (MiSoloZeroHugeRange.c)
 *     MiCreateAcceleratorDescriptor @ 0x14070F408 (MiCreateAcceleratorDescriptor.c)
 * Callees:
 *     AccelInitializeDescriptor @ 0x1406DEF84 (AccelInitializeDescriptor.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

_QWORD *__fastcall MiInitializeAcceleratorDescriptor(__int64 a1, _QWORD *a2)
{
  memset_0(a2, 0, *(_QWORD *)(a1 + 32) + 32LL);
  if ( (int)AccelInitializeDescriptor(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 32), (__int64)(a2 + 4)) < 0 )
    return 0LL;
  a2[2] = a1;
  return a2 + 4;
}
