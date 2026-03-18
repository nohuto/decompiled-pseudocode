/*
 * XREFs of KiUpdatePriorityMatrixForRunningTransition @ 0x1402C7F20
 * Callers:
 *     KiHandleDeferredPreemption @ 0x14022E730 (KiHandleDeferredPreemption.c)
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KiIdleSchedule @ 0x1402C7E00 (KiIdleSchedule.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F6610 (KiExecuteSmtIsolationThread.c)
 *     KiIdleLoop @ 0x140728DB0 (KiIdleLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdatePriorityMatrixForRunningTransition(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)(a1 + 8) = a2;
  if ( *(_BYTE *)(a2 + 388) == 1 )
    *(_DWORD *)(a2 + 132) += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
  *(_BYTE *)(a2 + 388) = 2;
  v3 = *(_QWORD *)(a1 + 192);
  v4 = *(_QWORD *)(a1 + 200);
  result = *(_QWORD *)(v3 + 400);
  if ( (v4 & result) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 400), ~v4);
  v6 = *(_QWORD *)(a2 + 104);
  if ( v6 )
  {
    result = v6 + *(unsigned int *)(a1 + 216);
    if ( result )
    {
      if ( (*(_WORD *)(result + 128) & 0x200) == 0 )
      {
        v7 = a1 + 35544;
        while ( result && (*(_WORD *)(result + 128) & 0x200) == 0 )
        {
          v8 = *(_QWORD **)(v7 + 8);
          v9 = (_QWORD *)(result + 88);
          if ( *v8 != v7 )
            __fastfail(3u);
          *v9 = v7;
          *(_QWORD *)(result + 96) = v8;
          *v8 = v9;
          *(_QWORD *)(v7 + 8) = v9;
          v7 = result + 88;
          *(_WORD *)(result + 128) = *(_WORD *)(result + 128) & 0xF1FF | 0x200;
          v10 = *(_QWORD *)(result + 440);
          result = v10;
          if ( v10 )
            ++*(_QWORD *)(v10 + 416);
        }
      }
    }
  }
  return result;
}
