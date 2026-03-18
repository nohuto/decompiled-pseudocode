/*
 * XREFs of ?Run@CKstBase@@AEAAKXZ @ 0x180150618
 * Callers:
 *     ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z @ 0x180294F50 (-RunKernelThreadStatic@CKstBase@@CAKPEAX@Z.c)
 * Callees:
 *     ?EnterWait@DWM@KST@InputTraceLogging@@SAXXZ @ 0x18015079C (-EnterWait@DWM@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x1801507DC (-ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180150EAC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802016C8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x18021DEA4 (-ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKstBase::Run(CKstBase *this)
{
  signed int v2; // ebx
  DWORD CurrentThreadId; // eax
  void *v4; // rdx
  const char *v5; // r9
  signed int LastError; // eax
  char v7; // bp
  unsigned int v8; // edi
  const char *v9; // r9
  unsigned int v10; // edi
  int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)this + 6) = CurrentThreadId;
  InputTraceLogging::KST::DWM::ThreadStart(CurrentThreadId);
  if ( !(unsigned int)NtKSTInitialize(*((_QWORD *)this + 4), *((_QWORD *)this + 1)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 16LL))(this) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x7B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
        v5);
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2147467259;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x89,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)(unsigned int)v2,
      v13);
  }
  wil::details::SetEvent(*((wil::details **)this + 5), v4);
  if ( v2 >= 0 )
  {
    v7 = 1;
    while ( v7 )
    {
      InputTraceLogging::KST::DWM::EnterWait();
      v8 = NtKSTWait();
      InputTraceLogging::KST::DWM::ExitWait(v8);
      if ( v8 )
      {
        v10 = v8 - 1;
        if ( !v10 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xA7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
            v9);
        if ( v10 != 1 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xB0,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
            v9);
        v11 = (*(__int64 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 8LL))(this);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAB,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
            (const char *)(unsigned int)v11,
            v13);
      }
      else
      {
        v7 = 0;
      }
    }
  }
  result = (unsigned __int16)v2;
  *((_DWORD *)this + 6) = 0;
  if ( (v2 & 0x1FFF0000) != 0x70000 )
    return (unsigned int)v2;
  return result;
}
