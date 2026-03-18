/*
 * XREFs of ApiSetGetLatestInputTransform @ 0x140228148
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x140213C90 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140224AD4 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetLatestInputTransform(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5792LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 5800LL);
      if ( v7 )
        return (unsigned int)v7(a1, a2) != 0;
    }
  }
  return v4;
}
