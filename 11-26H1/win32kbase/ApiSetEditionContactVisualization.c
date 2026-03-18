/*
 * XREFs of ApiSetEditionContactVisualization @ 0x140065F78
 * Callers:
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x140065F04 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     EditionContactVisualization @ 0x140160B70 (EditionContactVisualization.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionContactVisualization(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  int v7; // ebp
  unsigned int v8; // ebx
  int (*v9)(void); // rax
  int v10; // r8d

  v7 = a1;
  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6096LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)EditionContactVisualization(v7, a2, v10, a4, a5);
  return v8;
}
