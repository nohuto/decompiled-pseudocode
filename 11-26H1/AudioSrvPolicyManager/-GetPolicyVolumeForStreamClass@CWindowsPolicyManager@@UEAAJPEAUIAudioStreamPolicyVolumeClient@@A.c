/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x18001F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001FE70 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
        CWindowsPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        struct StreamCategoryPolicyVolumes *a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rbx
  const unsigned __int16 *v11; // r15
  int v12; // esi
  DWORD v13; // ebx
  struct _RTL_CRITICAL_SECTION *v14; // r12
  __int64 v15; // rcx
  struct TSSession *v16; // rbx
  struct _RTL_CRITICAL_SECTION *v17; // r15
  float v18; // xmm6_4
  float v19; // xmm7_4
  struct _RTL_CRITICAL_SECTION *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r13
  _QWORD *i; // rbx
  struct _RTL_CRITICAL_SECTION *v24; // rbx
  __int64 v25; // r15
  _QWORD *k; // rdi
  __int64 v27; // rax
  __int64 v29; // rdi
  float v30; // xmm0_4
  __int64 v31; // rsi
  float v32; // xmm0_4
  _QWORD *j; // rdi
  __int64 v34; // rsi
  float v35; // xmm0_4
  int v36; // eax
  struct TSSession *v37; // [rsp+20h] [rbp-40h] BYREF
  __int64 v38; // [rsp+28h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+30h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp+48h] BYREF
  int v43; // [rsp+B0h] [rbp+50h]
  __int64 v44; // [rsp+B8h] [rbp+58h] BYREF

  *((_DWORD *)a3 + 3) = 1065353216;
  *((_BYTE *)a3 + 8) = 0;
  v5 = *(_QWORD *)a2;
  v44 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, __int64 *))(v5 + 24))(a2, &v44);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)(unsigned int)v6);
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    goto LABEL_43;
  }
  v8 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 56LL))(a2);
  v9 = v8;
  v10 = v44;
  if ( v8 >= 0x18 )
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)0x80070057LL);
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    goto LABEL_43;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v44 + 96LL))(v44)
    && dword_180056680[v9]
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 136LL))(v10) )
  {
    v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 376LL))(v10) != 0 ? (unsigned int)v9 : 0;
  }
  v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 40LL))(a2);
  v43 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 72LL))(a2);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 104LL))(v44);
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 48LL))(v44);
  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v40 = v14;
  LODWORD(lpCriticalSection) = v13;
  v37 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v39 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v15,
    &v38,
    &lpCriticalSection);
  if ( v38 != qword_180068A38 )
  {
    v16 = *(struct TSSession **)(v38 + 24);
    v37 = v16;
    LeaveCriticalSection(&stru_180068A08);
LABEL_6:
    lpCriticalSection = 0LL;
    CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
      (struct TSSession *)((char *)v16 + 72),
      v11,
      (struct CStreamClassPolicyGains **)&lpCriticalSection);
    v17 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    v39 = v17;
    v18 = FLOAT_1_0;
    v19 = FLOAT_1_0;
    v20 = 0LL;
    lpCriticalSection = 0LL;
    v21 = v12 != 0 ? 232LL : 40LL;
    if ( (unsigned int)v9 < 0x18 )
    {
      v22 = (unsigned int)v9;
      for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v17->DebugInfo + 8 * v9 + v21); i; i = (_QWORD *)*i )
      {
        v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
        v30 = (***(float (__fastcall ****)(_QWORD))(i[1] + 56LL))(*(_QWORD *)(i[1] + 56LL));
        v19 = fminf(ConvertDbToEngineVolume(v30), v19);
        v20 = lpCriticalSection;
        if ( v29 > (__int64)lpCriticalSection )
          v20 = (struct _RTL_CRITICAL_SECTION *)v29;
        lpCriticalSection = v20;
      }
      if ( v17 )
      {
        LeaveCriticalSection(v17);
        v20 = lpCriticalSection;
      }
      *((float *)a3 + 1) = v19;
      *((_QWORD *)a3 + 2) = v20;
      if ( v43 )
      {
        v24 = (struct _RTL_CRITICAL_SECTION *)((char *)v37 + 560);
        EnterCriticalSection((LPCRITICAL_SECTION)v37 + 14);
        v25 = 0LL;
        for ( j = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v24->DebugInfo + 8 * v22 + v21); j; j = (_QWORD *)*j )
        {
          v34 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(j[1] + 56LL) + 16LL))(*(_QWORD *)(j[1] + 56LL));
          v35 = (***(float (__fastcall ****)(_QWORD))(j[1] + 56LL))(*(_QWORD *)(j[1] + 56LL));
          v18 = fminf(ConvertDbToEngineVolume(v35), v18);
          if ( v34 > v25 )
            v25 = v34;
        }
      }
      else
      {
        v24 = (struct _RTL_CRITICAL_SECTION *)((char *)v37 + 136);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v37 + 136));
        v25 = 0LL;
        for ( k = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v24->DebugInfo + 8 * v22 + v21); k; k = (_QWORD *)*k )
        {
          v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(k[1] + 56LL) + 16LL))(*(_QWORD *)(k[1] + 56LL));
          v32 = (***(float (__fastcall ****)(_QWORD))(k[1] + 56LL))(*(_QWORD *)(k[1] + 56LL));
          v18 = fminf(ConvertDbToEngineVolume(v32), v18);
          if ( v31 > v25 )
            v25 = v31;
        }
      }
      if ( v24 )
        LeaveCriticalSection(v24);
      *((float *)a3 + 1) = fminf(*((float *)a3 + 1), v18);
      v27 = *((_QWORD *)a3 + 2);
      if ( v27 <= v25 )
        v27 = v25;
      *((_QWORD *)a3 + 2) = v27;
      if ( v14 )
        LeaveCriticalSection(v14);
      if ( v44 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
LABEL_26:
      *(_BYTE *)a3 = 0;
      return 0LL;
    }
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)0x8000FFFFLL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v39);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)0x8000FFFFLL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6CF,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x8000FFFFLL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v40);
    goto LABEL_23;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v39);
  v36 = TsSessionCreate(v13, &v37);
  v7 = v36;
  if ( v36 >= 0 )
  {
    v16 = v37;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43C,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v36);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6C8,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)v7);
  if ( v14 )
    LeaveCriticalSection(v14);
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
    (const char *)v7);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( (v7 & 0x80000000) == 0 )
    goto LABEL_26;
LABEL_43:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1BE,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)v7);
  return v7;
}
