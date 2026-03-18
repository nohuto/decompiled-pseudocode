/*
 * XREFs of xxxSafeLoadKeyboardLayoutEx @ 0x14011B590
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x14016CE40 (NtUserLoadKeyboardLayoutEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x14011B724 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rbp
  unsigned int i; // ebx
  void *v18; // rax
  void *v19; // rcx
  PETHREAD *v20; // rbx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d

  KeyboardLayout = 0LL;
  v15 = ConvertHandleAndVerifyLoc(Handle);
  if ( v15 )
  {
    if ( a6 )
    {
      if ( *(_DWORD *)a6 >= 8u )
      {
        UserSetLastError(87);
        *(_DWORD *)a6 = 0;
LABEL_4:
        ZwClose(v15);
        for ( i = 0; i < *(_DWORD *)a6; ++i )
        {
          v19 = (void *)*((_QWORD *)a6 + 2 * i + 81);
          if ( v19 )
            ZwClose(v19);
        }
        return KeyboardLayout;
      }
      if ( *(_DWORD *)a6 )
      {
        do
        {
          v18 = ConvertHandleAndVerifyLoc(*((HANDLE *)a6 + 2 * (unsigned int)KeyboardLayout + 81));
          *((_QWORD *)a6 + 2 * (unsigned int)KeyboardLayout + 81) = v18;
          if ( !v18 )
            break;
          LODWORD(KeyboardLayout) = (_DWORD)KeyboardLayout + 1;
        }
        while ( (unsigned int)KeyboardLayout < *(_DWORD *)a6 );
        *(_DWORD *)a6 = (_DWORD)KeyboardLayout;
      }
    }
    KeyboardLayout = xxxLoadKeyboardLayoutEx(a1, v15, a3, a4, a5, a6, a7, a8, a9);
    goto LABEL_4;
  }
  if ( (a9 & 0x40000000) != 0 )
  {
    v20 = (PETHREAD *)PtiCurrent(v14, v13);
    W32GetUserSessionState(v22, v21, v23);
    PsGetThreadProcessId(*v20);
  }
  if ( (a9 & 0x40000200) == 0 )
    UserSetLastError(0);
  return KeyboardLayout;
}
