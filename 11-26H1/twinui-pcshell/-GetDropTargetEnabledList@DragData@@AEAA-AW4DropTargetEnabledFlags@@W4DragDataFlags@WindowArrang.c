/*
 * XREFs of ?GetDropTargetEnabledList@DragData@@AEAA?AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180531BFC
 * Callers:
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180531F7C (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DragData::GetDropTargetEnabledList(__int64 a1, char a2)
{
  int v4; // ebp
  int v5; // edi
  unsigned int v6; // eax
  int v7; // ecx

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 80LL))(*(_QWORD *)(a1 + 40), 5LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 80LL))(*(_QWORD *)(a1 + 40), 1LL);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 184LL))(
          *(_QWORD *)(a1 + 40),
          *(_QWORD *)(a1 + 48)) )
    ++v5;
  v6 = (a2 & 1) == 0;
  if ( (a2 & 2) == 0 )
    v6 |= 2u;
  if ( (a2 & 4) != 0 )
  {
    v7 = 8;
  }
  else if ( v4 == 1 || v4 == 2 && v5 == 1 )
  {
    v7 = 12;
  }
  else
  {
    v7 = 32;
    if ( v5 == 2 )
      v7 = 16;
  }
  return v7 | v6;
}
