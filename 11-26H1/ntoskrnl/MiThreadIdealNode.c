/*
 * XREFs of MiThreadIdealNode @ 0x1402F0BA4
 * Callers:
 *     MiComputePreferredNode @ 0x1402F0B60 (MiComputePreferredNode.c)
 *     MiPrefetchPreallocatePages @ 0x1406FBE0C (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiCreatePagingFileCommit @ 0x1409894E4 (MiCreatePagingFileCommit.c)
 *     MiGetLargePagesForSystemMapping @ 0x140B4E990 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiThreadIdealNode(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 v3; // r8
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( a1 && (*(_DWORD *)(a1 + 184) & 0xF) == 0 && CurrentThread->ApcStateIndex == 1 )
  {
    result = CurrentThread->ApcState.Process->IdealGlobalNode;
  }
  else
  {
    v3 = KiProcessorBlock[CurrentThread->IdealProcessor];
    result = *(unsigned int *)(v3 + 34644);
  }
  if ( a2 )
  {
    if ( v3 )
      *a2 = v3;
    else
      *a2 = (__int64)KeGetCurrentPrcb();
  }
  return result;
}
