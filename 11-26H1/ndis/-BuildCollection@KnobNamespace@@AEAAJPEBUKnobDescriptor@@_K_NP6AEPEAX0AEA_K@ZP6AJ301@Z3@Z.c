/*
 * XREFs of ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70
 * Callers:
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x14013BA78 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x140164E40 (-AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?SetCurrentValue@KnobDescriptor@@QEBAX_K@Z @ 0x1400776D0 (-SetCurrentValue@KnobDescriptor@@QEBAX_K@Z.c)
 *     WPP_RECORDER_SF_Si @ 0x140096DC8 (WPP_RECORDER_SF_Si.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x140165090 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x140165290 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x140165340 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 */

__int64 __fastcall KnobNamespace::BuildCollection(
        KnobNamespace *this,
        struct KnobDescriptor *a2,
        unsigned __int64 a3,
        unsigned __int8 (*a4)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        unsigned __int8 (*a5)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a6)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  char v6; // bp
  struct KnobDescriptor *v10; // r14
  unsigned __int64 v11; // r15
  struct KnobCollection *v12; // rax
  KnobCollection *v13; // rbx
  int v14; // r14d
  KPushLock *p_m_lock; // rdi
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_m_collectionList; // rsi
  _LIST_ENTRY *v19; // rbx
  void *v20; // [rsp+28h] [rbp-60h]
  char v21[8]; // [rsp+28h] [rbp-60h]
  __int128 v22; // [rsp+40h] [rbp-48h] BYREF
  char v23; // [rsp+50h] [rbp-38h]

  v6 = (char)a4;
  if ( a3 )
  {
    v10 = a2;
    v11 = a3;
    do
    {
      KnobDescriptor::SetCurrentValue(v10, v10->DefaultValue);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Si(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          1u,
          0xAu,
          (struct _GUID *)&WPP_1cc6a0a69d4d33edc5e419684ff2d750_Traceguids,
          v10->Name);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  v12 = KnobCollection::Create(this, a2, a3, a4, a6, v20);
  v13 = v12;
  if ( !v12 )
    return 3221225626LL;
  v23 = 0;
  v22 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct KnobCollection *, __int64, __int128 *))(*(_QWORD *)v12 + 8LL))(v12, 1LL, &v22);
  p_m_lock = &this->m_lock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  if ( v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v21 = v14;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_1cc6a0a69d4d33edc5e419684ff2d750_Traceguids,
        *(_QWORD *)v21);
    }
  }
  else
  {
    KnobCollection::PrepareUpdatedKnobValues(v13, (struct KnobTransaction *)&v22);
    KnobCollection::CommitUpdatedKnobValues(v13, 1);
  }
  if ( v6 )
  {
    Blink = this->m_collectionList.Blink;
    p_m_collectionList = &this->m_collectionList;
    v19 = (_LIST_ENTRY *)((char *)v13 + 8);
    if ( Blink->Flink != p_m_collectionList )
      __fastfail(3u);
    v19->Flink = p_m_collectionList;
    v19->Blink = Blink;
    Blink->Flink = v19;
    p_m_collectionList->Blink = v19;
    ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
    KeLeaveCriticalRegion();
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v22 + 1);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v22);
  }
  else
  {
    ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
    KeLeaveCriticalRegion();
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v22 + 1);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v22);
    (**(void (__fastcall ***)(KnobCollection *, __int64))v13)(v13, 1LL);
  }
  return 0LL;
}
