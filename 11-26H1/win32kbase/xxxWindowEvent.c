/*
 * XREFs of xxxWindowEvent @ 0x14011CB00
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1401BBA70 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
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
  result = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                      + 48)
                                                                          + 1136LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, int))result(v8, a2, a3, a4, a5);
  return result;
}
