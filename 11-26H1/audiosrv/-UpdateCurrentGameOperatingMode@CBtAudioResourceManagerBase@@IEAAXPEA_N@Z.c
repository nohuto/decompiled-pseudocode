/*
 * XREFs of ?UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z @ 0x1800E788C
 * Callers:
 *     ?OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800E4AF0 (-OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z.c)
 *     ?ReevaluateGameModeOperation@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E537C (-ReevaluateGameModeOperation@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

void __fastcall CBtAudioResourceManagerBase::UpdateCurrentGameOperatingMode(
        CBtAudioResourceManagerBase *this,
        bool *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // ecx
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v5 = *((_DWORD *)this + 126);
  v6 = 0;
  v7 = v2;
  if ( *((_DWORD *)this + 125) )
  {
    v6 = 2;
    if ( *((int *)this + 124) <= 0 )
      v6 = 1;
  }
  *((_DWORD *)this + 126) = v6;
  *a2 = v5 != v6;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v7);
}
