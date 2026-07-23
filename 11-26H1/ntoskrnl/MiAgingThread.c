/*
 * XREFs of MiAgingThread @ 0x1402A84E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     MiComputeAgingNeed @ 0x1402A85EC (MiComputeAgingNeed.c)
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 */

__int64 __fastcall MiAgingThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // esi
  NTSTATUS v4; // eax
  __int64 v5; // r8
  int v6; // eax
  PVOID Object[3]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v9[40]; // [rsp+58h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 18304) = CurrentThread;
  memset(v9, 0, 32);
  v3 = KeSetPriorityThread(CurrentThread, 17);
  KeSetPriorityThread(CurrentThread, 17);
  Object[0] = (PVOID)(a1 + 88);
  Object[1] = (PVOID)(a1 + 21264);
  Object[2] = (PVOID)(a1 + 21288);
  while ( 1 )
  {
    v4 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( !v4 )
      break;
    v6 = v4 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        MiWalkAllHardLimitWorkingSets(a1, 0LL);
    }
    else if ( (unsigned int)MiComputeAgingNeed(a1, v9) )
    {
      *(_BYTE *)(a1 + 18616) = 1;
      MiWalkAllWorkingSets(a1, v9);
      *(_BYTE *)(a1 + 18616) = 0;
    }
  }
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v3, v5);
}
