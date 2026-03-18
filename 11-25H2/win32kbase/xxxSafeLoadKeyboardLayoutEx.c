/*
 * XREFs of xxxSafeLoadKeyboardLayoutEx @ 0x14011C890
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x1401BEF40 (NtUserLoadKeyboardLayoutEx.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x14011D058 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 */

HKL __fastcall xxxSafeLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        HANDLE Handle,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        struct tagKBDTABLE_MULT_INTERNAL *a6,
        unsigned __int16 *a7,
        unsigned int a8,
        unsigned int a9)
{
  HKL KeyboardLayout; // rsi
  void *v13; // rbp
  unsigned int i; // ebx
  void *v16; // rax
  void *v17; // rcx
  PETHREAD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx

  KeyboardLayout = 0LL;
  v13 = ConvertHandleAndVerifyLoc(Handle);
  if ( v13 )
  {
    if ( a6 )
    {
      if ( *(_DWORD *)a6 >= 8u )
      {
        UserSetLastError(87);
        *(_DWORD *)a6 = 0;
LABEL_4:
        ZwClose(v13);
        for ( i = 0; i < *(_DWORD *)a6; ++i )
        {
          v17 = (void *)*((_QWORD *)a6 + 2 * i + 81);
          if ( v17 )
            ZwClose(v17);
        }
        return KeyboardLayout;
      }
      if ( *(_DWORD *)a6 )
      {
        do
        {
          v16 = ConvertHandleAndVerifyLoc(*((HANDLE *)a6 + 2 * (unsigned int)KeyboardLayout + 81));
          *((_QWORD *)a6 + 2 * (unsigned int)KeyboardLayout + 81) = v16;
          if ( !v16 )
            break;
          LODWORD(KeyboardLayout) = (_DWORD)KeyboardLayout + 1;
        }
        while ( (unsigned int)KeyboardLayout < *(_DWORD *)a6 );
        *(_DWORD *)a6 = (_DWORD)KeyboardLayout;
      }
    }
    KeyboardLayout = xxxLoadKeyboardLayoutEx(a1, v13, a3, a4, a5, a6, a7, a8, a9);
    goto LABEL_4;
  }
  if ( (a9 & 0x40000000) != 0 )
  {
    v18 = (PETHREAD *)PtiCurrent();
    W32GetUserSessionState(v20, v19);
    PsGetThreadProcessId(*v18);
  }
  if ( (a9 & 0x40000200) == 0 )
    UserSetLastError(0);
  return KeyboardLayout;
}
