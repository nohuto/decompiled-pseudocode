/*
 * XREFs of HalpAddAdapterToList @ 0x14057C7D0
 * Callers:
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140786454 (HalGetAdapterV2.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall HalpAddAdapterToList(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  v3 = (_QWORD *)qword_140FBD5E8;
  v4 = (_QWORD *)(a1 + 464);
  if ( *(__int64 **)qword_140FBD5E8 != &HalpDmaAdapterList )
    __fastfail(3u);
  *v4 = &HalpDmaAdapterList;
  v4[1] = v3;
  *v3 = v4;
  qword_140FBD5E8 = (__int64)v4;
  KeReleaseSpinLock(&HalpDmaAdapterListLock, v2);
}
