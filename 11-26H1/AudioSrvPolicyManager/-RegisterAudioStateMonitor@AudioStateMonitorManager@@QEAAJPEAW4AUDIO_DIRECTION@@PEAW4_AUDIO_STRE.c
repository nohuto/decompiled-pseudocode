/*
 * XREFs of ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180005674
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x1800055B0 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 * Callees:
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x1800059E8 (--1AudioStateMonitor@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180005A70 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x180013324 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4434AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800279EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgW.c)
 *     ??$emplace@AEA_KPEAUAudioStateMonitor@@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x1800295D8 (--$emplace@AEA_KPEAUAudioStateMonitor@@@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonit.c)
 *     ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x18002A2DC (-DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioStateMonitorManager::RegisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        unsigned __int64 *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  AudioStateMonitor *v10; // rax
  AudioStateMonitor *v11; // rdi
  unsigned int v12; // ebx
  _DWORD *v13; // rax
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  unsigned int v20; // edx
  unsigned int *v21; // r8
  int v22; // eax
  __int64 v23; // r8
  void *v24; // rcx
  int SoundLevelForExtendedAudioCategory; // ebx
  _DWORD *v26; // rax
  void *v27; // rcx
  _DWORD *v28; // rbx
  _DWORD *v29; // r8
  int v30; // eax
  enum _AUDIO_STREAM_CATEGORY v31; // ecx
  int v32; // r8d
  int v33; // r9d
  int v35; // [rsp+28h] [rbp-51h]
  enum _AUDIO_STREAM_CATEGORY v36; // [rsp+68h] [rbp-11h] BYREF
  int v37; // [rsp+6Ch] [rbp-Dh] BYREF
  int v38; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-1h] BYREF
  const unsigned __int16 *v40; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+90h] [rbp+17h] BYREF
  struct _RTL_CRITICAL_SECTION *v42; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]
  unsigned __int64 v44; // [rsp+D8h] [rbp+5Fh] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v42 = v9;
  v10 = (AudioStateMonitor *)operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 1) = 0LL;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v41 = (__int64)v11;
  if ( !v11 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x8007000ELL,
      v35);
    goto LABEL_32;
  }
  if ( a2 )
  {
    v13 = operator new[](4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v13 )
      *v13 = *(_DWORD *)a2;
    else
      v13 = 0LL;
    v14 = *(void **)v11;
    *(_QWORD *)v11 = v13;
    if ( v14 )
      operator delete(v14, (const struct std::nothrow_t *)4);
    if ( !*(_QWORD *)v11 )
    {
      v15 = 85LL;
LABEL_29:
      v12 = -2147024882;
      v19 = 2147942414LL;
      goto LABEL_30;
    }
  }
  if ( a4 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)v11 + 16,
      0LL);
    v18 = _AllocString<CTCoAllocPolicy>(v17, v16, a4, (char *)v11 + 16);
    v12 = v18;
    if ( v18 < 0 )
    {
      v19 = (unsigned int)v18;
      v15 = 90LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
        (const char *)v19,
        v35);
      AudioStateMonitor::~AudioStateMonitor(v11);
      operator delete(v11, (const struct std::nothrow_t *)0x20);
LABEL_43:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v42);
      return v12;
    }
  }
  if ( !a3 )
  {
LABEL_23:
    SoundLevelForExtendedAudioCategory = AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
                                           this,
                                           a2,
                                           *((_QWORD *)v11 + 1),
                                           a4);
    v26 = operator new[](4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v26 )
      *v26 = SoundLevelForExtendedAudioCategory;
    v27 = (void *)*((_QWORD *)v11 + 3);
    *((_QWORD *)v11 + 3) = v26;
    if ( v27 )
      operator delete(v27, (const struct std::nothrow_t *)4);
    if ( *((_QWORD *)v11 + 3) )
    {
      v28 = (_DWORD *)*((_QWORD *)this + 2);
      if ( *v28 > 4u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)this + 2), 0x80000LL) )
      {
        v39[0] = v11;
        LODWORD(v44) = *v29;
        v40 = a4;
        v30 = -1;
        if ( a3 )
          v31 = *a3;
        else
          v31 = -1;
        v36 = v31;
        if ( a2 )
          v30 = *(_DWORD *)a2;
        v37 = v30;
        v38 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 40LL))(*((_QWORD *)this + 17));
        v41 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 72LL))(*((_QWORD *)this + 17));
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (_DWORD)v28,
          (unsigned int)&unk_18005B9A7,
          v32,
          v33,
          (__int64)&v41,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v40,
          (__int64)&v44,
          (__int64)v39);
      }
      v44 = (unsigned __int64)v11;
      v41 = 0LL;
      v40 = (const unsigned __int16 *)v11;
      std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::emplace<unsigned __int64 &,AudioStateMonitor *>(
        (char *)this + 64,
        v39,
        &v44,
        &v40);
      *a5 = v44;
      v12 = 0;
      goto LABEL_43;
    }
    v15 = 105LL;
    goto LABEL_29;
  }
  v21 = (unsigned int *)operator new[](4uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v21 )
  {
    *v21 = 0;
    v22 = DeriveAudioServerStreamCategory(*a3, v20, v21);
    v12 = v22;
    if ( v22 < 0 )
    {
      v19 = (unsigned int)v22;
      v15 = 98LL;
      goto LABEL_30;
    }
    v24 = (void *)*((_QWORD *)v11 + 1);
    *((_QWORD *)v11 + 1) = v23;
    if ( v24 )
      operator delete(v24, (const struct std::nothrow_t *)4);
    goto LABEL_23;
  }
  v12 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x61,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
    (const char *)0x8007000ELL,
    v35);
  AudioStateMonitor::~AudioStateMonitor(v11);
  operator delete(v11, (const struct std::nothrow_t *)0x20);
LABEL_32:
  if ( v9 )
    LeaveCriticalSection(v9);
  return v12;
}
