/*
 * XREFs of MiRelocateCleanup @ 0x14099B9E4
 * Callers:
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 * Callees:
 *     PsRevertToUserPagePriorityThread @ 0x140481AA0 (PsRevertToUserPagePriorityThread.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiFreeRelocations @ 0x140AA79E0 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x140AA7AAC (MiFreeImageLoadConfig.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiRelocateCleanup(__int64 a1)
{
  int v2; // eax
  char *v3; // rbx
  struct _KTHREAD *CurrentThread; // rbx

  if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiRemoveFromSystemSpace(*(_QWORD *)(a1 + 64));
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, *(unsigned int *)(a1 + 52));
  }
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(char **)(a1 + 56);
  if ( (v2 & 0x200) != 0 )
  {
    if ( (v2 & 0x20) == 0 )
      MiFreeRelocations(*(_QWORD *)a1);
  }
  else if ( v3 )
  {
    if ( (v2 & 0x400) != 0 )
      MiFreeImageLoadConfig(v3 + 72);
    ExFreePoolWithTag(v3, 0);
  }
}
