/*
 * XREFs of ?RmpReallocateHeap@@YAPEAXPEAX_K@Z @ 0x180049F94
 * Callers:
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x18001B9E0 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
 *     ??$RmpArrayGrow@U_HAM_TERMINATION_HOST_BLOCK@@@@YAJPEAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAKK@Z @ 0x180049EA8 (--$RmpArrayGrow@U_HAM_TERMINATION_HOST_BLOCK@@@@YAJPEAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAKK@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RmpReallocateHeap(void *a1, SIZE_T a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1, a2);
}
