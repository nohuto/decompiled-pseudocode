/*
 * XREFs of MiStoreExtendVirtualPagefile @ 0x1405117D8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140408D88 (MiStoreWriteModifiedPages.c)
 *     MiPageFileNoFreeSpace @ 0x140512338 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404D7630 (MiIsStoreVirtualPagefileFull.c)
 *     MiFinishPageFileExtension @ 0x14050F0CC (MiFinishPageFileExtension.c)
 *     MiAttemptChangePagingFileMaximum @ 0x1406F866C (MiAttemptChangePagingFileMaximum.c)
 */

__int64 __fastcall MiStoreExtendVirtualPagefile(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r8d
  int v7; // r14d
  unsigned __int64 v8; // rax
  __int64 v9; // r8

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  --CurrentThread->KernelApcDisable;
  v5 = dword_140FBE21C;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)a2;
  if ( (unsigned int)dword_140FBE21C < 0x4000 )
    v5 = 0x4000;
  if ( v6 - v7 < v5 )
  {
    a2 = *(unsigned int *)(a1 + 1308);
    v8 = (*(_QWORD *)(a1 + 17224) + 0x3FFFFLL) & 0xFFFFFFFFFFFC0000uLL;
    if ( v8 <= a2 )
      a2 = (unsigned int)v8;
    if ( (unsigned int)a2 > v6 && !*(_DWORD *)(a1 + 1328) )
    {
      if ( v6 + 0x40000 <= (unsigned int)a2 )
        a2 = v6 + 0x40000;
      if ( (int)MiAttemptChangePagingFileMaximum(v3, a2) < 0 )
      {
        *(_DWORD *)(a1 + 1328) = 1;
        KiSetTimerEx(a1 + 1336, MiFiveSeconds.QuadPart, 0, 0, 0LL);
        if ( (unsigned int)MiIsStoreVirtualPagefileFull((_DWORD *)a1) )
          KeSetEvent((PRKEVENT)(a1 + 1008), 0, 0);
      }
      v6 = *(_DWORD *)(v3 + 4);
    }
  }
  v9 = v6 - v7;
  if ( (_DWORD)v9 )
  {
    if ( v5 <= (unsigned int)v9 )
      LODWORD(v9) = v5;
    MiFinishPageFileExtension((struct _KEVENT *)a1, v3, v9);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, a2, v9);
}
