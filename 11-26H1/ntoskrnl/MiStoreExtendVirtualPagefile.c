/*
 * XREFs of MiStoreExtendVirtualPagefile @ 0x14050B248
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 *     MiPageFileNoFreeSpace @ 0x14050BDA8 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404D0E00 (MiIsStoreVirtualPagefileFull.c)
 *     MiFinishPageFileExtension @ 0x140508B3C (MiFinishPageFileExtension.c)
 *     MiAttemptChangePagingFileMaximum @ 0x1406FD33C (MiAttemptChangePagingFileMaximum.c)
 */

__int64 __fastcall MiStoreExtendVirtualPagefile(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // esi
  unsigned int v6; // r8d
  int v7; // r14d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  ULONG v10; // r8d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = dword_140FBF21C;
  v6 = a2[1];
  v7 = *a2;
  if ( (unsigned int)dword_140FBF21C < 0x4000 )
    v5 = 0x4000;
  if ( v6 - v7 < v5 )
  {
    v8 = *(unsigned int *)(a1 + 1308);
    v9 = (*(_QWORD *)(a1 + 17224) + 0x3FFFFLL) & 0xFFFFFFFFFFFC0000uLL;
    if ( v9 <= v8 )
      v8 = (unsigned int)v9;
    if ( (unsigned int)v8 > v6 && !*(_DWORD *)(a1 + 1328) )
    {
      if ( v6 + 0x40000 <= (unsigned int)v8 )
        v8 = v6 + 0x40000;
      if ( (int)MiAttemptChangePagingFileMaximum(a2, v8) < 0 )
      {
        *(_DWORD *)(a1 + 1328) = 1;
        KiSetTimerEx(a1 + 1336, MiFiveSeconds.QuadPart, 0, 0, 0LL);
        if ( (unsigned int)MiIsStoreVirtualPagefileFull((_DWORD *)a1) )
          KeSetEvent((PRKEVENT)(a1 + 1008), 0, 0);
      }
      v6 = a2[1];
    }
  }
  v10 = v6 - v7;
  if ( v10 )
  {
    if ( v5 <= v10 )
      v10 = v5;
    MiFinishPageFileExtension((struct _KEVENT *)a1, (__int64)a2, v10);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
