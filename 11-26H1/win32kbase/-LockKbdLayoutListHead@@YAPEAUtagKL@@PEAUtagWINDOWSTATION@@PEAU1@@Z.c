/*
 * XREFs of ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x14011B534
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1401BBA70 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1402199E0 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 */

struct tagKL *__fastcall LockKbdLayoutListHead(struct tagWINDOWSTATION *a1, struct tagKL *a2, int a3)
{
  __int64 *v4; // rax
  int v5; // edx
  __int64 *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v4 = (__int64 *)((char *)a1 + 40);
    v5 = 1;
  }
  else
  {
    v4 = (__int64 *)(W32GetUserSessionState(0, (_DWORD)a2, a3) + 14704);
    v5 = 0;
  }
  v7[0] = v4;
  v7[1] = (__int64 *)a2;
  return (struct tagKL *)HMAssignmentLock(v7, v5, a3);
}
