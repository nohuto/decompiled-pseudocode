/*
 * XREFs of ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180008610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::RpcRegisterAudioStateMonitor(
        CWindowsPolicyManager *this,
        void *a2,
        enum AUDIO_DIRECTION *a3,
        enum _AUDIO_STREAM_CATEGORY *a4,
        const unsigned __int16 *a5,
        unsigned __int64 *a6)
{
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  struct CProcess *v10; // rbx
  int Process; // eax
  int v12; // ebp
  struct CProcess *v13; // r14
  struct CProcess *v14; // rbp
  int v15; // edi
  int v16; // eax
  int v18; // [rsp+20h] [rbp-48h]
  struct CProcess *v19; // [rsp+30h] [rbp-38h] BYREF
  struct CProcess *v20; // [rsp+38h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v21 = v9;
  v10 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a2, &v19);
  v12 = Process;
  if ( Process < 0 )
  {
    v15 = -2147023171;
    if ( Process != -2147023171 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x167,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)Process,
        v18);
      v15 = v12;
    }
    v14 = 0LL;
    v13 = 0LL;
  }
  else
  {
    v10 = v19;
    v20 = v19;
    v13 = v19;
    v14 = v19;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v19 + 8LL))(v19);
    v15 = 0;
  }
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v19);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x347,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v15,
      v18);
    if ( v14 )
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(struct CProcess *, enum AUDIO_DIRECTION *, enum _AUDIO_STREAM_CATEGORY *, const unsigned __int16 *))(*(_QWORD *)v10 + 416LL))(
            v10,
            a3,
            a4,
            a5);
    v15 = v16;
    if ( v16 >= 0 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x348,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v16,
      (int)a6);
    if ( v13 )
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return (unsigned int)v15;
}
