/*
 * XREFs of PopFxIsDripsBlockingDevice @ 0x1404CDF84
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404CD980 (PopFxBuildDripsBlockingDeviceList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall PopFxIsDripsBlockingDevice(__int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  char v7; // si
  __int64 v8; // r12
  KIRQL v9; // dl
  __int64 i; // rbx
  __int64 v11; // rdi
  KIRQL v12; // dl

  v3 = a1 + 640;
  v7 = 0;
  v8 = MEMORY[0xFFFFF78000000008];
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 640));
  if ( *(_DWORD *)(v3 + 16) == 2
    && !PopFxDeviceAccountingPaused
    && *(_BYTE *)(v3 + 8)
    && v8 - *(_QWORD *)(v3 + 24) >= a2 )
  {
    v7 = 1;
    *a3 = -1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v9);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 868); i = (unsigned int)(i + 1) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 8 * i);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 200));
    if ( *(_DWORD *)(v11 + 216) == 2
      && !PopFxDeviceAccountingPaused
      && *(_BYTE *)(v11 + 208)
      && v8 - *(_QWORD *)(v11 + 224) >= a2 )
    {
      v7 = 1;
      *a3 = i;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 200), v12);
  }
  return v7;
}
