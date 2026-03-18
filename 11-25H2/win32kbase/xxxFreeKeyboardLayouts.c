/*
 * XREFs of xxxFreeKeyboardLayouts @ 0x14014C3BC
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x140212EE0 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

struct tagTHREADINFO *__fastcall xxxFreeKeyboardLayouts(struct tagWINDOWSTATION *a1)
{
  struct tagTHREADINFO *result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx

  while ( 1 )
  {
    result = PtiCurrent();
    v3 = *((_QWORD *)result + 60);
    if ( !v3 )
      break;
    v4 = *((_QWORD *)result + 60);
    while ( 1 )
    {
      v4 = *(_QWORD *)(v4 + 16);
      if ( (*(_DWORD *)(v4 + 32) & 0x20000000) == 0 )
        break;
      if ( v4 == v3 )
        return result;
    }
    if ( !v4 )
      break;
    xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v4, 0x80000000);
  }
  return result;
}
