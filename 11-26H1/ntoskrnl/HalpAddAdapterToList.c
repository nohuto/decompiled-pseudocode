/*
 * XREFs of HalpAddAdapterToList @ 0x14057A2A0
 * Callers:
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall HalpAddAdapterToList(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  v3 = (_QWORD *)qword_140FBD268;
  v4 = (_QWORD *)(a1 + 464);
  if ( *(__int64 **)qword_140FBD268 != &HalpDmaAdapterList )
    __fastfail(3u);
  *v4 = &HalpDmaAdapterList;
  v4[1] = v3;
  *v3 = v4;
  qword_140FBD268 = (__int64)v4;
  KeReleaseSpinLock(&HalpDmaAdapterListLock, v2);
}
