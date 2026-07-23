/*
 * XREFs of IopCheckDeviceAndDriver @ 0x140516280
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  KIRQL v4; // dl
  unsigned int v5; // ebx
  __int64 v7; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (*(_DWORD *)(a2 + 48) & 0x80u) != 0 )
  {
    v5 = -1073741810;
  }
  else if ( (*(_DWORD *)(a2 + 48) & 8) == 0
         || !*(_DWORD *)(a2 + 4)
         || *(_QWORD *)(a1 + 40)
         || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    if ( (int)++*(_DWORD *)(a2 + 4) <= 0 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( v7 )
      {
        IoAddTriageDumpDataBlock(v7, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
    }
    v5 = 0;
  }
  else
  {
    v5 = -1073741790;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v5;
}
