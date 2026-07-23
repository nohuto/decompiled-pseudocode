/*
 * XREFs of IoGetStackSizeWithoutRedirectionBias @ 0x1405CD890
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 */

char __fastcall IoGetStackSizeWithoutRedirectionBias(__int64 a1, _BYTE *a2)
{
  char v4; // si
  KIRQL v5; // al
  char v6; // bl
  int v7; // r8d
  int v8; // edx
  char result; // al

  v4 = 0;
  v5 = KeAcquireQueuedSpinLock(0xAuLL);
  v6 = *(_BYTE *)(a1 + 76);
  v7 = v6;
  while ( *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL) )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL);
    v8 = *(char *)(a1 + 76);
    if ( v7 > v8 + 1 )
    {
      v4 = 1;
      v6 += v8 - v7 + 1;
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v5);
  result = v4;
  *a2 = v6;
  return result;
}
