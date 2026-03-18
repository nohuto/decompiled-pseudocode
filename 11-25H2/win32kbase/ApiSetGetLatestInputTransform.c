/*
 * XREFs of ApiSetGetLatestInputTransform @ 0x140225EA8
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140222370 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetLatestInputTransform(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6232LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 6240LL);
      if ( v8 )
        return (unsigned int)v8(a1, a2) != 0;
    }
  }
  return v4;
}
