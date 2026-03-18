/*
 * XREFs of ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1800F3840
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18022F184 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x18022F4C0 (-NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F6010 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FC280 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x180196E9C (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneResourceManager::ReleaseSceneCompositor(CSceneResourceManager *this)
{
  __int64 v2; // rsi
  CD3DResource *v3; // rcx
  __int64 v4; // rdi
  CComposition *v5; // rcx
  int v6; // ebx
  int v7; // ebx
  struct ISpectreRenderer *SpectreRenderer; // r14
  _QWORD *v9; // rdi
  _QWORD *i; // rbp
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  v3 = (CD3DResource *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    CD3DResource::RemoveResourceNotifier(v3, this);
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
    if ( SpectreRenderer )
    {
      v9 = (_QWORD *)*((_QWORD *)this + 5);
      for ( i = (_QWORD *)*((_QWORD *)this + 6); v9 != i; ++v9 )
        (*(void (__fastcall **)(_QWORD, struct ISpectreRenderer *))(*(_QWORD *)*v9 + 8LL))(*v9, SpectreRenderer);
    }
    v11 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v11 )
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease();
  }
  v4 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 8) == 2 )
    {
      v5 = g_pComposition;
      if ( g_pComposition )
        v2 = *((_QWORD *)g_pComposition + 110);
      *(_QWORD *)(v4 + 1480) = v2 + 5;
      if ( v5 && *((_BYTE *)v5 + 6465) )
        CComposition::ScheduleCompositionPass(v5, 1000LL, 0x20000LL);
    }
    v6 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 8));
    if ( v6 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v12);
    if ( !v6 )
    {
      if ( _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      v7 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 8));
      if ( v7 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v12);
      if ( !v7 )
      {
        if ( _InterlockedDecrement((volatile signed __int32 *)(v4 + 8)) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v12);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      }
    }
  }
}
