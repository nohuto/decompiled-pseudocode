/*
 * XREFs of ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180125B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082D78 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1800D6428 (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180124F48 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x18012860C (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 *     ?LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z @ 0x180128C68 (-LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  CSpatialAudioResourceManagerTraceLogger *v9; // rcx
  Sarm::CStreamResource *Stream; // rax
  __int64 v11; // rdx
  int v12; // ebp
  __int64 v13; // rdx
  struct Sarm::CStreamResource *v15; // rax
  int v16[2]; // [rsp+20h] [rbp-58h] BYREF
  Sarm::CSpatialAudioResourceManager *v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  unsigned int v19; // [rsp+38h] [rbp-40h]
  unsigned int v20; // [rsp+3Ch] [rbp-3Ch]
  int *v21; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  CSpatialAudioResourceManagerTraceLogger::LogRequestDynamicObjects(v9, a2, a3, a4);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
  if ( !Stream )
  {
    v11 = 452LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)0x887C0109LL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2289828105LL;
  }
  v12 = Sarm::CStreamResource::ValidateDynamicObjectRequest(Stream, a3, a4);
  if ( v12 >= 0 )
  {
    v17 = this;
    *(_QWORD *)v16 = &off_1801782F8;
    v18 = a2;
    v21 = v16;
    v19 = a3;
    v20 = a4;
    v12 = CWorkFifo::ScheduleWorkItem((PTP_WORK *)this + 38, (__int64)v16);
    if ( v12 < 0 )
    {
      v13 = 459LL;
      goto LABEL_5;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    if ( a3 )
    {
      if ( !*((_QWORD *)this + 66)
        || !_wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(
              (HANDLE *)this + 66,
              0xFFFFFFFF)
        || std::_Atomic_storage<bool,1>::load((__int64)this + 440) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D0,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)0x887C010CLL);
        return 2289828108LL;
      }
      EnterCriticalSection(v4);
      v15 = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
      if ( !v15 )
      {
        v11 = 469LL;
        goto LABEL_18;
      }
      if ( *((_DWORD *)v15 + 20) < a3 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D8,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)0x887C010CLL);
        if ( v4 )
          LeaveCriticalSection(v4);
        return 2289828108LL;
      }
      if ( v4 )
        LeaveCriticalSection(v4);
    }
    return 0LL;
  }
  v13 = 455LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v12);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v12;
}
