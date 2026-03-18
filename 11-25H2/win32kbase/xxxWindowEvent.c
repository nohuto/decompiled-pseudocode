/*
 * XREFs of xxxWindowEvent @ 0x1401455A4
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x14009F5D0 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x140212EE0 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall xxxWindowEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5))(_QWORD, __int64, _QWORD, _QWORD, int)
{
  unsigned int v8; // ebp
  __int64 (__fastcall *result)(_QWORD, __int64, _QWORD, _QWORD, int); // rax

  v8 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                          a1,
                                                                                          a2)
                                                                                      + 48)
                                                                          + 1360LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, int))result(v8, a2, a3, a4, a5);
  return result;
}
