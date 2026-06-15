/*
 * XREFs of ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x1800087D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::RpcUnregisterAudioStateMonitor(
        CWindowsPolicyManager *this,
        void *a2,
        unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  struct CProcess *v6; // rbx
  int Process; // eax
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CProcess *v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = 0LL;
  v14 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a2, &v14);
  v8 = Process;
  if ( Process < 0 )
  {
    v9 = -2147023171;
    if ( Process != -2147023171 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x167,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)Process,
        v12);
      v9 = v8;
    }
  }
  else
  {
    v6 = v14;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v14 + 8LL))(v14);
    v9 = 0;
  }
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v14);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x352,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v9,
      v12);
    if ( v6 )
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct CProcess *, unsigned __int64 *))(*(_QWORD *)v6 + 424LL))(v6, a3);
    v9 = v10;
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v5 )
        LeaveCriticalSection(v5);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x353,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v10,
      v12);
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v9;
}
