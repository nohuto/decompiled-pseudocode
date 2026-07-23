/*
 * XREFs of ?ExpLookasideMgrQueueWorkers@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x1404E9338
 * Callers:
 *     ?ExpLookasideMgrTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1404E9320 (-ExpLookasideMgrTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     IoQueueWorkItemToNode @ 0x140202F90 (IoQueueWorkItemToNode.c)
 *     ?ExpLookasideMgrTraceScanStarting@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K1@Z @ 0x1404E9458 (-ExpLookasideMgrTraceScanStarting@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K1@Z.c)
 */

void __fastcall ExpLookasideMgrQueueWorkers(struct _EXP_LOOKASIDE_MGR *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  unsigned __int16 v7; // si
  unsigned int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // r9

  v2 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v3 = *((_QWORD *)a1 + 8);
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] < v3 )
    v4 = -1LL;
  else
    v4 = v2 - v3;
  *((_QWORD *)a1 + 8) = v2;
  v5 = 0LL;
  if ( v2 >= v3 )
    v5 = v4;
  v6 = v5;
  if ( *((_QWORD *)a1 + 3) > v5 )
    v6 = *((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 7) = v6;
  ExpLookasideMgrTraceScanStarting(a1, v2, v5);
  v7 = 0;
  for ( *((_DWORD *)a1 + 18) = *((_DWORD *)a1 + 148); v7 < *((_WORD *)a1 + 298); ++v7 )
  {
    v8 = 0;
    v9 = 16LL * v7;
    if ( *(_DWORD *)((char *)a1 + v9 + 600) )
    {
      do
      {
        v10 = *(_QWORD *)((char *)a1 + v9 + 608) + 32LL * v8;
        IoQueueWorkItemToNode(
          *(_QWORD *)(v10 + 8),
          (__int64)ExpLookasideMgrIoCallback,
          *(_DWORD *)(*(_QWORD *)v10 + 44LL),
          v10,
          *(_DWORD *)(v10 + 28));
        ++v8;
      }
      while ( v8 < *(_DWORD *)((char *)a1 + v9 + 600) );
    }
  }
}
