/*
 * XREFs of ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x18001A954
 * Callers:
 *     ?UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z @ 0x180029CF0 (-UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x1800059E8 (--1AudioStateMonitor@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x180037E00 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180049448 (-find@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioStateMonitorManager::UnregisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  AudioStateMonitor *v12; // rsi
  _BYTE *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-51h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-49h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v22; // [rsp+70h] [rbp-19h]
  int v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+7Ch] [rbp-Dh]
  _BYTE *v25; // [rsp+80h] [rbp-9h]
  int v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+8Ch] [rbp+3h]
  int *v28; // [rsp+90h] [rbp+7h]
  __int64 v29; // [rsp+98h] [rbp+Fh]
  unsigned __int64 *v30; // [rsp+A0h] [rbp+17h]
  __int64 v31; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v19 = v4;
  v5 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)v5 > 4u
    && (*(_DWORD *)(v5 + 16) & 0x80000LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x80000LL) == *(_QWORD *)(v5 + 24) )
  {
    v18 = *a2;
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 40LL))(*((_QWORD *)this + 17));
    v14 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 72LL))(*((_QWORD *)this + 17));
    v30 = &v18;
    v31 = 8LL;
    v28 = &v17;
    v29 = 4LL;
    if ( v14 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)&v14[2 * v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v14 = byte_180056CEC;
      v16 = 2;
    }
    v25 = v14;
    v26 = v16;
    v27 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 0x80000LL;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v22 = &unk_18005B962;
    v23 = 68;
    v24 = 1;
    LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::find(
    (char *)this + 64,
    &v18,
    a2);
  v6 = (_QWORD *)v18;
  if ( v18 == *((_QWORD *)this + 9) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x80070490LL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147943568LL;
  }
  else
  {
    v7 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()((unsigned __int8 *)(v18 + 16));
    v9 = 2 * (v7 & *((_QWORD *)this + 14));
    v10 = *((_QWORD *)this + 11);
    if ( *(_QWORD **)(v10 + 16 * (v7 & *((_QWORD *)this + 14)) + 8) == v6 )
    {
      if ( *(_QWORD **)(v10 + 16 * (v7 & *((_QWORD *)this + 14))) == v6 )
        *(_QWORD *)(v10 + 16 * (v7 & *((_QWORD *)this + 14))) = v8;
      else
        v8 = v6[1];
      *(_QWORD *)(v10 + 8 * v9 + 8) = v8;
    }
    else if ( *(_QWORD **)(v10 + 16 * (v7 & *((_QWORD *)this + 14))) == v6 )
    {
      *(_QWORD *)(v10 + 16 * (v7 & *((_QWORD *)this + 14))) = *v6;
    }
    v11 = *v6;
    --*((_QWORD *)this + 10);
    *(_QWORD *)v6[1] = v11;
    *(_QWORD *)(v11 + 8) = v6[1];
    v12 = (AudioStateMonitor *)v6[3];
    v6[3] = 0LL;
    if ( v12 )
    {
      AudioStateMonitor::~AudioStateMonitor(v12);
      operator delete(v12, (const struct std::nothrow_t *)0x20);
    }
    std::_Deallocate<16>(v6, 32LL);
    *a2 = 0LL;
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
}
