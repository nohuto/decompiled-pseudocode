/*
 * XREFs of sub_1400A6328 @ 0x1400A6328
 * Callers:
 *     sub_14000D2F0 @ 0x14000D2F0 (sub_14000D2F0.c)
 *     sub_14000D600 @ 0x14000D600 (sub_14000D600.c)
 *     sub_1400267A0 @ 0x1400267A0 (sub_1400267A0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400A6328(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 6072) )
    return 0;
  if ( *(_DWORD *)(a1 + 968) )
  {
    do
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(*(_QWORD *)(a1 + 960) + 320LL * v1),
        (PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6072) + 24LL * v1));
      ++v1;
    }
    while ( v1 < *(_DWORD *)(a1 + 968) );
  }
  return 1;
}
