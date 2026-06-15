/*
 * XREFs of ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18000734C
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180005A70 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?ClearSmtcSubscriptions@CProcess@@QEAAXXZ @ 0x1800066E8 (-ClearSmtcSubscriptions@CProcess@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180006BA0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800158F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180026AE8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@std@@K@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@0@V10@V10@AEBK@Z @ 0x18002819C (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@K@std@@@std@@@std@@K@std@@YA-AV-$_Ve.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180029094 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ @ 0x18002EB38 (-ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RuntimeClassInitialize(
        CProcess *this,
        HANDLE hSourceHandle,
        int a3,
        int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        char *TargetHandle,
        const unsigned __int16 *a8,
        DWORD a9,
        const unsigned __int16 *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        DWORD a19,
        int a20,
        int a21)
{
  const unsigned __int16 *v23; // r15
  unsigned __int64 v24; // rdi
  HANDLE *v25; // r14
  void *v26; // rbx
  HANDLE CurrentProcess; // rbx
  HANDLE v28; // rax
  const char *v30; // r9
  __int64 result; // rax
  void *v32; // rbx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rdx
  char *v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // rdi
  signed __int64 v38; // r15
  char *v39; // r10
  __int16 v40; // ax
  __int64 v41; // r9
  char *v42; // rax
  unsigned __int64 v43; // rbx
  void *v44; // rdi
  int v45; // eax
  unsigned int v46; // ebx
  const char *v47; // r9
  const unsigned __int16 *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // ebx
  const unsigned __int16 *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  unsigned int v57; // ebx
  int v58; // eax
  unsigned int v59; // ebx
  DWORD v60; // r14d
  unsigned int v61; // r15d
  HANDLE v62; // rbx
  void *v63; // rdi
  HANDLE v64; // rax
  DWORD *v65; // rdx
  DWORD v66; // edi
  HANDLE v67; // rax
  unsigned int v68; // ebx
  const struct _tlgProvider_t *v69; // rax
  int v70; // r8d
  int v71; // r9d
  int dwDesiredAccess; // [rsp+20h] [rbp-78h]
  _OWORD ProcessInformation[2]; // [rsp+40h] [rbp-58h] BYREF
  DWORD dwProcessId[4]; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v76; // [rsp+A0h] [rbp+8h] BYREF

  v23 = a5;
  *((_DWORD *)this + 40) = a3;
  *((_DWORD *)this + 41) = a4;
  *((_DWORD *)this + 48) = a9;
  *((_DWORD *)this + 105) = a11;
  *((_DWORD *)this + 106) = a12;
  *((_DWORD *)this + 107) = a13;
  *((_DWORD *)this + 108) = a14;
  *((_DWORD *)this + 110) = a16;
  *((_DWORD *)this + 111) = a17;
  *((_DWORD *)this + 116) = a18;
  *((_DWORD *)this + 109) = a15;
  *((_QWORD *)this + 26) = TargetHandle;
  *((_BYTE *)this + 786) = a19;
  *((_DWORD *)this + 117) = a20;
  *((_DWORD *)this + 118) = a21;
  v24 = -1LL;
  if ( hSourceHandle )
  {
    v25 = (HANDLE *)((char *)this + 152);
    v26 = (void *)*((_QWORD *)this + 19);
    if ( v26 && v26 != (void *)-1LL )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v76);
      CloseHandle(v26);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v76);
    }
    *v25 = 0LL;
    CurrentProcess = GetCurrentProcess();
    v28 = GetCurrentProcess();
    if ( !DuplicateHandle(v28, hSourceHandle, CurrentProcess, v25, 0x101000u, 0, 0) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xA0F,
               (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
               v30);
  }
  v32 = (void *)*((_QWORD *)this + 21);
  if ( v32 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v76);
    CoTaskMemFree(v32);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v76);
  }
  *((_QWORD *)this + 21) = 0LL;
  do
    ++v24;
  while ( v23[v24] );
  try
  {
    v33 = v24 + 1;
    if ( v24 + 1 >= v24 && (v76 = 0LL, is_mul_ok(v33, 2uLL)) )
    {
      v35 = (char *)CoTaskMemAlloc(2 * v33);
      *((_QWORD *)this + 21) = v35;
      if ( v35 )
      {
        if ( v33 > 0x7FFFFFFF )
          goto LABEL_18;
        if ( v24 < 0x7FFFFFFF )
        {
          if ( !v23 )
          {
            v23 = (const unsigned __int16 *)&unk_180056CEC;
            v24 = 0LL;
          }
          if ( v33 )
          {
            v34 = v33;
            v36 = 0LL;
            v37 = v24 - v33;
            v38 = (char *)v23 - v35;
            v39 = v35;
            do
            {
              if ( !(v37 + v34) )
                break;
              v40 = *(_WORD *)&v35[v38];
              if ( !v40 )
                break;
              *(_WORD *)v35 = v40;
              v35 += 2;
              ++v36;
              --v34;
            }
            while ( v34 );
            v41 = v36 - 1;
            if ( v34 )
              v41 = v36;
            v42 = v35 - 2;
            if ( v34 )
              v42 = v35;
            *(_WORD *)v42 = 0;
            v43 = v33 - v41;
            if ( v34 && v43 > 1 && 2 * v43 > 2 )
              memset_0(&v39[2 * v41 + 2], 0, 2 * v43 - 2);
          }
          goto LABEL_34;
        }
        if ( v24 != -1LL )
LABEL_18:
          *(_WORD *)v35 = 0;
LABEL_34:
        v44 = (void *)*((_QWORD *)this + 23);
        if ( v44 )
        {
          wil::last_error_context::last_error_context((wil::last_error_context *)&v76);
          CoTaskMemFree(v44);
          wil::last_error_context::~last_error_context((wil::last_error_context *)&v76);
        }
        *((_QWORD *)this + 23) = 0LL;
        v45 = _AllocString<CTCoAllocPolicy>(v35, v34, a8, (char *)this + 184);
        v46 = v45;
        if ( v45 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA17,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
            (const char *)(unsigned int)v45,
            dwDesiredAccess);
          return v46;
        }
        v48 = a6;
        if ( a6 )
        {
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            (void **)this + 22,
            0LL);
          v51 = _AllocString<CTCoAllocPolicy>(v50, v49, v48, (char *)this + 176);
          v52 = v51;
          if ( v51 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA1E,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              (const char *)(unsigned int)v51,
              dwDesiredAccess);
            return v52;
          }
        }
        v53 = a10;
        if ( a10 )
        {
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            (void **)this + 25,
            0LL);
          v56 = _AllocString<CTCoAllocPolicy>(v55, v54, v53, (char *)this + 200);
          v57 = v56;
          if ( v56 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA22,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              (const char *)(unsigned int)v56,
              dwDesiredAccess);
            return v57;
          }
        }
        if ( hSourceHandle )
        {
          v58 = CProcess::SetupProcessTerminationWatcher(this);
          v59 = v58;
          if ( v58 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA2B,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              (const char *)(unsigned int)v58,
              dwDesiredAccess);
            return v59;
          }
        }
        v60 = *((_DWORD *)this + 40);
        a19 = v60;
        v61 = 0;
        TargetHandle = 0LL;
        v62 = GetCurrentProcess();
        v63 = (void *)*((_QWORD *)this + 19);
        v64 = GetCurrentProcess();
        if ( !DuplicateHandle(v64, v63, v62, (LPHANDLE)&TargetHandle, 0x1000u, 0, 0) )
          goto LABEL_57;
        while ( 1 )
        {
          v65 = (DWORD *)*((_QWORD *)this + 17);
          if ( v65 == *((DWORD **)this + 18) )
          {
            std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>(
              (_QWORD *)this + 16,
              (__int64)v65,
              (int *)&a19);
          }
          else
          {
            *v65 = v60;
            *((_QWORD *)this + 17) += 4LL;
          }
          v60 = 0;
          a19 = 0;
          v66 = 0;
          if ( TargetHandle )
          {
            memset(ProcessInformation, 0, sizeof(ProcessInformation));
            *(_OWORD *)dwProcessId = 0LL;
            if ( NtQueryInformationProcess(TargetHandle, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) >= 0 )
            {
              v60 = dwProcessId[2];
              a19 = dwProcessId[2];
              v66 = dwProcessId[2];
              if ( *(_QWORD *)std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned long>>>,unsigned long>(
                                &v76,
                                *((_QWORD *)this + 16),
                                *((_QWORD *)this + 17),
                                &a19) != *((_QWORD *)this + 17) )
              {
                v69 = AudioSrvPolicyManagerTelemetryProvider::Provider();
                if ( *(_DWORD *)v69 > 4u && (unsigned __int8)tlgKeywordOn(v69, 0x10000LL) )
                {
                  a19 = *((_DWORD *)this + 40);
                  a9 = v60;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    v70,
                    (unsigned int)&unk_18005A235,
                    v70,
                    v71,
                    (__int64)&a9,
                    (__int64)&a19);
                }
LABEL_57:
                CProcess::ResetDataFlowAccessCheckResults(this);
                CProcess::ClearSmtcSubscriptions(this);
                if ( (unsigned __int64)(TargetHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                  CloseHandle(TargetHandle);
                return 0LL;
              }
              v67 = OpenProcess(0x1000u, 0, v60);
              wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                &TargetHandle,
                v67);
            }
          }
          ++v61;
          if ( !v66 || v61 >= 0xA )
            goto LABEL_57;
        }
      }
      v68 = -2147024882;
    }
    else
    {
      v68 = -2147024362;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA15,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)v68,
      dwDesiredAccess);
    result = v68;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA5B,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v47);
  }
  return result;
}
