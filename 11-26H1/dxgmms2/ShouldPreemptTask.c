/*
 * XREFs of ShouldPreemptTask @ 0x1400B88E8
 * Callers:
 *     ?Execute@VIDMM_TASK_PAGING_QUEUE@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400B8410 (-Execute@VIDMM_TASK_PAGING_QUEUE@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z.c)
 *     ?Execute@VIDMM_TASK_PROCESS_TERMINATIONS@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400B85D0 (-Execute@VIDMM_TASK_PROCESS_TERMINATIONS@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShouldPreemptTask(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 16) == a1 + 5392 )
  {
    if ( *(_BYTE *)(a1 + 5928) || *(_DWORD *)(a1 + 5488) )
      return 1;
    if ( MEMORY[0xFFFFF78000000014] > *(_QWORD *)(a2 + 8) )
    {
      if ( *(_QWORD *)(a1 + 5464) >= MEMORY[0xFFFFF78000000014] && *(_DWORD *)(a1 + 5408) <= 1u )
        return KeReadStateEvent(*(PRKEVENT *)(a1 + 24)) != 0;
      return 1;
    }
  }
  return 0;
}
