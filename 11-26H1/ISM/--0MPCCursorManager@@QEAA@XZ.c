/*
 * XREFs of ??0MPCCursorManager@@QEAA@XZ @ 0x1800BEBEC
 * Callers:
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800BA1E0 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180098EE0 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009985C (--1last_error_context@wil@@QEAA@XZ.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A1010 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

MPCCursorManager *__fastcall MPCCursorManager::MPCCursorManager(
        MPCCursorManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct ISMTestMode *v4; // rax
  int v16; // esi
  HMODULE LibraryW; // rax
  const char *v23; // r9
  HMODULE v24; // rsi
  HMODULE v25; // rbx
  FARPROC ProcAddress; // rax
  const char *v27; // r9
  const char *v28; // r9
  _DWORD Buf1[2]; // [rsp+24h] [rbp-Ch] BYREF
  int v31; // [rsp+2Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  char v33; // [rsp+40h] [rbp+10h] BYREF

  v4 = ISMTestMode::s_instance;
  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  *((_DWORD *)this + 15) = 1;
  *((_WORD *)this + 32) = 0;
  *((_BYTE *)this + 66) = 0;
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      a4);
  if ( !*(_BYTE *)v4 )
  {
    if ( !IsEdition(10LL) )
      goto LABEL_23;
    _RAX = 1LL;
    __asm { cpuid }
    Buf1[0] = _RBX;
    v31 = _RDX;
    if ( (int)_RCX >= 0 )
      goto LABEL_9;
    _RAX = 0x40000000LL;
    __asm { cpuid }
    Buf1[1] = _RCX;
    v31 = _RDX;
    v16 = _RAX;
    Buf1[0] = _RBX;
    if ( memcmp_0(Buf1, "Microsoft Hv", 0xCuLL) )
      goto LABEL_9;
    _RAX = 1073741827LL;
    if ( v16 < 1073741827 )
      goto LABEL_9;
    __asm { cpuid }
    if ( (_RBX & 0x1000) != 0 )
    {
LABEL_9:
      LibraryW = LoadLibraryW(L"User32.dll");
      v24 = (HMODULE)*((_QWORD *)this + 5);
      v25 = LibraryW;
      if ( v24 )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)&v33);
        FreeLibrary(v24);
        wil::last_error_context::~last_error_context((wil::last_error_context *)&v33);
      }
      *((_QWORD *)this + 5) = v25;
      if ( !v25 )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x2F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v23);
      ProcAddress = GetProcAddress(v25, "ShowSystemCursor");
      *((_QWORD *)this + 6) = ProcAddress;
      if ( !ProcAddress )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x32,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v27);
      *((_BYTE *)this + 64) = 1;
    }
    else
    {
LABEL_23:
      if ( IsEdition(1024LL) )
      {
        if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
          wil::details::in1diag3::_FailFast_GetLastError(
            retaddr,
            (void *)0x38,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
            v28);
        *((_BYTE *)this + 66) = 1;
      }
    }
  }
  return this;
}
