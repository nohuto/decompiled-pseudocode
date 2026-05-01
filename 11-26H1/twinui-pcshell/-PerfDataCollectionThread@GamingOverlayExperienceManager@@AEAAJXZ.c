/*
 * XREFs of ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550
 * Callers:
 *     ?StaticPerfDataCollectionThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x180354C00 (-StaticPerfDataCollectionThread@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1800CC7FC (-at@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017DF48 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180188DFC (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ??$_Emplace_reallocate@AEBN@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z @ 0x180234C04 (--$_Emplace_reallocate@AEBN@-$vector@NV-$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAH$$QEAH@Z @ 0x180249ECC (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@AEAAPEAHQEAH$$QEAH@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Emplace_front_internal@AEBUtagPRESENTFRAME@@@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXAEBUtagPRESENTFRAME@@@Z @ 0x18033D3CC (--$_Emplace_front_internal@AEBUtagPRESENTFRAME@@@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRES.c)
 *     ??1?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ @ 0x180342054 (--1-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?PdhCloseQuery@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1803423B8 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-PdhCloseQuery@@YAJ0@ZU-$integral_constan.c)
 *     ?GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z @ 0x180347EF4 (-GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z.c)
 *     ?GetDedicatedVideoMemoryCap@GamingOverlayExperienceManager@@AEAA_KXZ @ 0x180349014 (-GetDedicatedVideoMemoryCap@GamingOverlayExperienceManager@@AEAA_KXZ.c)
 *     ?GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@@Z @ 0x180349F38 (-GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV-$vector@U_PDH_RAW_COUNTER_ITEM_W@@.c)
 *     ?Pdh_Failed@GamingOverlayExperienceManager@@AEAA_NJ@Z @ 0x180350524 (-Pdh_Failed@GamingOverlayExperienceManager@@AEAA_NJ@Z.c)
 *     ?StopPerfThread@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035541C (-StopPerfThread@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?_Tidy@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ @ 0x180358620 (-_Tidy@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ.c)
 *     ?erase@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@0@Z @ 0x180359278 (-erase@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA-AV-$_Deque_iter.c)
 *     ?erase@?$vector@NV?$allocator@N@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@N@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@N@std@@@std@@@2@@Z @ 0x1803593C0 (-erase@-$vector@NV-$allocator@N@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_t.c)
 *     ?reset@?$unique_any_array_ptr@UtagPRESENTFRAME@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAXXZ @ 0x18035A0BC (-reset@-$unique_any_array_ptr@UtagPRESENTFRAME@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1Cpu@@UEAA@XZ @ 0x18035D334 (--1Cpu@@UEAA@XZ.c)
 *     ?GetMemoryUsage@Cpu@@QEAAJPEAN0@Z @ 0x18035D418 (-GetMemoryUsage@Cpu@@QEAAJPEAN0@Z.c)
 *     ?InitializeCpuQuery@Cpu@@QEAAJXZ @ 0x18035D530 (-InitializeCpuQuery@Cpu@@QEAAJXZ.c)
 *     ?TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z @ 0x18035D738 (-TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z.c)
 *     ?UpdateCpuQuery@Cpu@@QEAAJPEAN@Z @ 0x18035D8C0 (-UpdateCpuQuery@Cpu@@QEAAJPEAN@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall GamingOverlayExperienceManager::PerfDataCollectionThread(GamingOverlayExperienceManager *this)
{
  int v2; // r15d
  struct _RTL_CRITICAL_SECTION *v3; // r12
  PDH_STATUS v4; // eax
  GamingOverlayExperienceManager *v5; // rcx
  int v6; // edx
  void **v7; // r14
  PDH_STATUS v8; // eax
  GamingOverlayExperienceManager *v9; // rcx
  int v10; // edx
  GamingOverlayExperienceManager *v11; // rcx
  int updated; // eax
  int PcwCounter; // ebx
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  DWORD v16; // ebx
  __int64 v17; // rax
  HRESULT v18; // eax
  BOOL ExitCodeProcess; // eax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int128 *, unsigned int *); // rbx
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned __int64 v25; // r13
  __int32 v26; // r15d
  struct _RTL_CRITICAL_SECTION *v27; // rdi
  int v28; // ebx
  int v29; // r14d
  unsigned __int64 v30; // r12
  unsigned __int64 *v31; // rax
  __int32 v32; // ecx
  void **v33; // rdi
  _BYTE *v34; // rdx
  PDH_STATUS Data; // eax
  GamingOverlayExperienceManager *v36; // rcx
  int v37; // edx
  wil::details::in1diag3 *v38; // rcx
  _DWORD *v39; // rbx
  PDH_STATUS RawData; // eax
  GamingOverlayExperienceManager *v41; // rcx
  int v42; // edx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  Cpu *v46; // rcx
  GamingOverlayExperienceManager *v47; // rcx
  Cpu *v48; // rcx
  _QWORD *v49; // rbx
  __int64 v50; // rcx
  double v51; // xmm0_8
  __int64 v52; // rax
  double v53; // xmm0_8
  double *v54; // rdx
  _QWORD *v55; // rbx
  __int64 *v56; // r8
  _BYTE *v57; // rdx
  _QWORD *v58; // rbx
  __int64 v59; // rax
  _BYTE *v60; // rdx
  __int64 v61; // rdx
  unsigned __int64 v63; // r9
  struct _RTL_CRITICAL_SECTION *v64; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v65; // [rsp+40h] [rbp-C8h] BYREF
  int v66; // [rsp+48h] [rbp-C0h] BYREF
  clock_t v67; // [rsp+4Ch] [rbp-BCh]
  __int64 v68; // [rsp+50h] [rbp-B8h]
  HANDLE hProcess; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v70[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v71[3]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v72[8]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v73[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v74[8]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v75[24]; // [rsp+A8h] [rbp-60h] BYREF
  DWORD ExitCode[2]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v77; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID ppv; // [rsp+D0h] [rbp-38h] BYREF
  PDH_HQUERY phQuery; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v80; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v81; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v82; // [rsp+100h] [rbp-8h]
  __int128 v83; // [rsp+108h] [rbp+0h] BYREF
  void *v84[2]; // [rsp+118h] [rbp+10h] BYREF
  struct _COUNTER_BUFFER *v85[2]; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v83 = 0uLL;
  v77 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(&v80);
  v2 = 0;
  LODWORD(v68) = 0;
  v3 = 0LL;
  v65 = 0LL;
  v67 = clock();
  v84[1] = 0LL;
  v84[0] = &Cpu::`vftable';
  *(_OWORD *)v85 = 0LL;
  hProcess = 0LL;
  phQuery = 0LL;
  v4 = PdhOpenQueryW(0LL, 0LL, &phQuery);
  if ( GamingOverlayExperienceManager::Pdh_Failed(v5, v4) && v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x478,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v6);
  v7 = (void **)((char *)this + 1160);
  v8 = PdhAddCounterW(phQuery, L"\\GPU Adapter Memory(*)\\Dedicated Usage", 0LL, (PDH_HCOUNTER *)this + 145);
  if ( GamingOverlayExperienceManager::Pdh_Failed(v9, v8) )
  {
    v11 = retaddr;
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x47E,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v10);
  }
  _InterlockedExchange64(
    (volatile __int64 *)this + 147,
    GamingOverlayExperienceManager::GetDedicatedVideoMemoryCap(v11));
  updated = Cpu::InitializeCpuQuery((Cpu *)v84);
  PcwCounter = updated;
  if ( updated >= 0 )
  {
    while ( 1 )
    {
      v15 = (_QWORD *)((char *)this + 1136);
      v16 = *((_DWORD *)this + 262);
      if ( v16 && !*((_QWORD *)this + 119) || v2 != v16 || !*((_BYTE *)this + 1052) )
      {
        *((_BYTE *)this + 1052) = 1;
        LODWORD(v68) = v16;
        std::deque<tagPRESENTFRAME>::_Tidy(&v80);
        v65 = 0LL;
        wil::EnterCriticalSection(&v65, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1064));
        v17 = *((_QWORD *)this + 138);
        if ( v17 != *((_QWORD *)this + 139) )
          *((_QWORD *)this + 139) = v17;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v65);
        _InterlockedExchange((volatile __int32 *)this + 264, 0);
        v3 = 0LL;
        v65 = 0LL;
        v67 = clock();
        *(_QWORD *)ExitCode = OpenProcess(0x1000u, 0, v16);
        wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
          &hProcess,
          (void **)ExitCode);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)ExitCode);
        if ( !*((_DWORD *)this + 262) )
          goto LABEL_50;
        ppv = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
        v18 = CoCreateInstance(
                &GUID_805a61d6_44c1_48c0_8af1_721a248effed,
                0LL,
                4u,
                &GUID_2b43fa87_6398_400f_8ed8_0b5d2ed75db7,
                &ppv);
        PcwCounter = v18;
        if ( v18 < 0 )
        {
          v61 = 1181LL;
          goto LABEL_87;
        }
        v18 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, char *))(*(_QWORD *)ppv + 24LL))(
                ppv,
                *((unsigned int *)this + 262),
                (char *)this + 952);
        PcwCounter = v18;
        if ( v18 < 0 )
        {
          v61 = 1182LL;
LABEL_87:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v61,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
          goto LABEL_95;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      }
      if ( *((_DWORD *)this + 262) )
      {
        ExitCode[0] = 0;
        ExitCodeProcess = GetExitCodeProcess(hProcess, ExitCode);
        if ( ExitCode[0] != 259 || !ExitCodeProcess )
          goto LABEL_88;
        v20 = *((_QWORD *)this + 119);
        v21 = *(__int64 (__fastcall **)(__int64, __int128 *, unsigned int *))(*(_QWORD *)v20 + 40LL);
        wil::unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset(&v83);
        v22 = v21(v20, &v83, &v77);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4B1,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v22);
        v23 = v82;
        if ( v77 || v82 )
        {
          v24 = 0;
          if ( v77 )
          {
            do
              std::deque<tagPRESENTFRAME>::_Emplace_front_internal<tagPRESENTFRAME const &>(
                &v80,
                (_OWORD *)(v83 + 32LL * v24++));
            while ( v24 < v77 );
            v23 = v82;
          }
          if ( v23 > 0x3E8 )
          {
            v70[1] = 0LL;
            v70[0] = v80;
            v70[2] = *((_QWORD *)&v81 + 1) + v23;
            v71[1] = 0LL;
            v71[0] = v80;
            v71[2] = *((_QWORD *)&v81 + 1) + 1000LL;
            std::deque<tagPRESENTFRAME>::erase(&v80, v75, v71, v70);
          }
          v25 = *(_QWORD *)std::deque<winrt::guid>::at(&v80, 0LL) - 100000LL;
          v26 = 0;
          if ( v3 )
          {
            v27 = v65;
          }
          else
          {
            v27 = *(struct _RTL_CRITICAL_SECTION **)std::deque<winrt::guid>::at(&v80, v82 - 1);
            v65 = v27;
          }
          v28 = 0;
          v66 = 0;
          v29 = v82 - 1;
          if ( (int)v82 - 1 >= 0 )
          {
            v30 = v29;
            do
            {
              v31 = (unsigned __int64 *)std::deque<winrt::guid>::at(&v80, v30);
              v32 = v26 + 1;
              if ( *v31 < v25 )
                v32 = v26;
              v26 = v32;
              if ( *(_QWORD *)std::deque<winrt::guid>::at(&v80, v30) >= (unsigned __int64)v27 )
              {
                if ( *(_QWORD *)std::deque<winrt::guid>::at(&v80, v30) >= (unsigned __int64)&v27[2500] )
                {
                  v65 = v27 + 2500;
                  v64 = 0LL;
                  wil::EnterCriticalSection(&v64, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1064));
                  v33 = (void **)((char *)this + 1104);
                  v34 = (_BYTE *)*((_QWORD *)this + 139);
                  if ( v34 == *((_BYTE **)this + 140) )
                  {
                    std::vector<int>::_Emplace_reallocate<int>((const void **)this + 138, v34, &v66);
                  }
                  else
                  {
                    *(_DWORD *)v34 = v28;
                    *((_QWORD *)this + 139) += 4LL;
                  }
                  v28 = 0;
                  v66 = 0;
                  if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 139) - (_QWORD)*v33) >> 2) > 0x3C )
                  {
                    memmove_0(*v33, (char *)*v33 + 4, *((_QWORD *)this + 139) - ((_QWORD)*v33 + 4));
                    *((_QWORD *)this + 139) -= 4LL;
                  }
                  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v64);
                  v27 = v65;
                }
                else
                {
                  v66 = ++v28;
                }
              }
              --v30;
              --v29;
            }
            while ( v29 >= 0 );
          }
          _InterlockedExchange((volatile __int32 *)this + 264, v26);
          v7 = (void **)((char *)this + 1160);
        }
        v15 = (_QWORD *)((char *)this + 1136);
      }
LABEL_50:
      Data = PdhCollectQueryData(phQuery);
      if ( GamingOverlayExperienceManager::Pdh_Failed(v36, Data) )
      {
        v38 = retaddr;
        if ( v37 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4FB,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v37);
      }
      v39 = (_DWORD *)((char *)this + 1128);
      RawData = GamingOverlayExperienceManager::GetRawData((__int64)v38, *v7, (DWORD *)this + 282, (__int64)v15);
      if ( GamingOverlayExperienceManager::Pdh_Failed(v41, RawData) && v42 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x501,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v42);
      v43 = 0LL;
      if ( *v39 )
      {
        v44 = (_QWORD *)(*v15 + 24LL);
        v45 = (unsigned int)*v39;
        do
        {
          v43 += *v44;
          v44 += 6;
          --v45;
        }
        while ( v45 );
      }
      v46 = (Cpu *)_InterlockedExchange64((volatile __int64 *)this + 146, v43);
      PcwCounter = Cpu::TmQueryPcwCounter(v46, v85, &v85[1], v84[1]);
      if ( PcwCounter < 0 )
      {
        v63 = (unsigned int)PcwCounter;
        v14 = 1291LL;
        goto LABEL_94;
      }
      updated = Cpu::UpdateCpuQuery((Cpu *)v84, (double *)this + 156);
      PcwCounter = updated;
      if ( updated < 0 )
      {
        v14 = 1292LL;
        goto LABEL_92;
      }
      v64 = 0LL;
      updated = GamingOverlayExperienceManager::GetCpuSpeed(v47, (double *)&v64);
      PcwCounter = updated;
      if ( updated < 0 )
      {
        v14 = 1295LL;
        goto LABEL_92;
      }
      _InterlockedExchange64((volatile __int64 *)this + 157, (__int64)v64);
      v64 = 0LL;
      *(_QWORD *)ExitCode = 0LL;
      updated = Cpu::GetMemoryUsage(v48, (double *)&v64, (double *)ExitCode);
      PcwCounter = updated;
      if ( updated < 0 )
      {
        v14 = 1300LL;
        goto LABEL_92;
      }
      _InterlockedExchange64((volatile __int64 *)this + 166, (__int64)v64);
      _InterlockedExchange64((volatile __int64 *)this + 167, *(__int64 *)ExitCode);
      if ( clock() - v67 > 1000 )
      {
        v67 += 1000;
        v64 = 0LL;
        wil::EnterCriticalSection(&v64, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1184));
        v49 = (_QWORD *)((char *)this + 1224);
        v50 = *((_QWORD *)this + 146);
        if ( v50 < 0 )
        {
          v52 = *((_QWORD *)this + 146) & 1LL | ((unsigned __int64)v50 >> 1);
          v51 = (double)(int)v52 + (double)(int)v52;
        }
        else
        {
          v51 = (double)(int)v50;
        }
        v53 = v51 / 1048576000.0;
        *(double *)ExitCode = v53;
        v54 = (double *)*((_QWORD *)this + 154);
        if ( v54 == *((double **)this + 155) )
        {
          std::vector<double>::_Emplace_reallocate<double const &>((__int64 *)this + 153, v54, (__int64 *)ExitCode);
        }
        else
        {
          *v54 = v53;
          *((_QWORD *)this + 154) = v54 + 1;
        }
        if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 154) - *v49) >> 3) > 0x3C )
          std::vector<double>::erase((char *)this + 1224, v72, *v49);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v64);
        v64 = 0LL;
        wil::EnterCriticalSection(&v64, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1264));
        v55 = (_QWORD *)((char *)this + 1304);
        v56 = (__int64 *)((char *)this + 1248);
        v57 = (_BYTE *)*((_QWORD *)this + 164);
        if ( v57 == *((_BYTE **)this + 165) )
        {
          std::vector<double>::_Emplace_reallocate<double const &>((__int64 *)this + 163, v57, v56);
        }
        else
        {
          *(_QWORD *)v57 = *v56;
          *((_QWORD *)this + 164) = v57 + 8;
        }
        if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 164) - *v55) >> 3) > 0x3C )
          std::vector<double>::erase((char *)this + 1304, v73, *v55);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v64);
        v64 = 0LL;
        wil::EnterCriticalSection(&v64, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1352));
        v58 = (_QWORD *)((char *)this + 1392);
        v59 = *((_QWORD *)this + 166);
        *(_QWORD *)ExitCode = v59;
        v60 = (_BYTE *)*((_QWORD *)this + 175);
        if ( v60 == *((_BYTE **)this + 176) )
        {
          std::vector<double>::_Emplace_reallocate<double const &>((__int64 *)this + 174, v60, (__int64 *)ExitCode);
        }
        else
        {
          *(_QWORD *)v60 = v59;
          *((_QWORD *)this + 175) = v60 + 8;
        }
        if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 175) - *v58) >> 3) > 0x3C )
          std::vector<double>::erase((char *)this + 1392, v74, *v58);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v64);
      }
      Sleep(0xC8u);
      if ( *((_BYTE *)this + 1344) )
      {
LABEL_88:
        GamingOverlayExperienceManager::StopPerfThread(this);
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long PdhCloseQuery(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long PdhCloseQuery(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&phQuery);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hProcess);
        Cpu::~Cpu((Cpu *)v84);
        std::deque<tagPRESENTFRAME>::~deque<tagPRESENTFRAME>((void **)&v80);
        wil::unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset(&v83);
        return 0LL;
      }
      v3 = v65;
      v2 = v68;
    }
  }
  v14 = 1155LL;
LABEL_92:
  v63 = (unsigned int)updated;
LABEL_94:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)v63);
LABEL_95:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long PdhCloseQuery(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long PdhCloseQuery(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&phQuery);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hProcess);
  Cpu::~Cpu((Cpu *)v84);
  std::deque<tagPRESENTFRAME>::~deque<tagPRESENTFRAME>((void **)&v80);
  wil::unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset(&v83);
  return (unsigned int)PcwCounter;
}
