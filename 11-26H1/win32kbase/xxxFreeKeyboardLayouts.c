/*
 * XREFs of xxxFreeKeyboardLayouts @ 0x140186BE0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1401BBA70 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

struct tagTHREADINFO *__fastcall xxxFreeKeyboardLayouts(struct tagWINDOWSTATION *a1, __int64 a2)
{
  struct tagTHREADINFO *result; // rax
  __int64 v4; // r8
  __int64 v5; // rdx

  while ( 1 )
  {
    result = PtiCurrent((__int64)a1, a2);
    v4 = *((_QWORD *)result + 59);
    if ( !v4 )
      break;
    v5 = *((_QWORD *)result + 59);
    while ( 1 )
    {
      v5 = *(_QWORD *)(v5 + 16);
      if ( (*(_DWORD *)(v5 + 32) & 0x20000000) == 0 )
        break;
      if ( v5 == v4 )
        return result;
    }
    xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v5, 0x80000000);
  }
  return result;
}
