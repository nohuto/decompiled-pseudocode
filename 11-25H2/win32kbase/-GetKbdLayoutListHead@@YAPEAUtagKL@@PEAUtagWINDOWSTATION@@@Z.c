/*
 * XREFs of ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x140110498
 * Callers:
 *     _GetKeyboardLayoutList @ 0x1401103F0 (_GetKeyboardLayoutList.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x140212CFC (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x140212EE0 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     <none>
 */

struct tagKL *__fastcall GetKbdLayoutListHead(struct tagWINDOWSTATION *a1, __int64 a2)
{
  if ( a1 )
    return (struct tagKL *)*((_QWORD *)a1 + 9);
  else
    return *(struct tagKL **)(W32GetUserSessionState(0LL, a2) + 14712);
}
