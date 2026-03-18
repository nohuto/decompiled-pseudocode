/*
 * XREFs of ApiSetEditionEdgyProcessInput @ 0x1401BCA9C
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x140065B14 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     EditionEdgyProcessInput @ 0x140190E3C (EditionEdgyProcessInput.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionEdgyProcessInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  int (*v8)(void); // rax
  __int64 v9; // rdx

  v7 = 0;
  v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6224LL);
  if ( v8 && v8() >= 0 )
    return (unsigned int)EditionEdgyProcessInput(a1, v9, a3, a4);
  return v7;
}
