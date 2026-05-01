/*
 * XREFs of ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x18017E65C
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18017DFA8 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18017E4B4 (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x1802F0AE0 (-OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x18008A80C (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ @ 0x18017E848 (-_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ.c)
 *     ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x18017E874 (-_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z.c)
 *     WPP_SF_d @ 0x180228808 (WPP_SF_d.c)
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x1802F0DA0 (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 *     WPP_SF_l @ 0x1802F1060 (WPP_SF_l.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CImmersiveMode::_HandleDesktopVisibilityChange(
        CImmersiveMode *this,
        struct IUnknown *a2,
        bool a3,
        char a4)
{
  struct IUnknown v4; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r14
  unsigned int v12; // r15d
  char v13; // di
  char v14; // r13
  __int64 v15; // rsi
  int v16; // edx
  char v17; // si
  unsigned int v18; // [rsp+20h] [rbp-58h]
  char v19; // [rsp+80h] [rbp+8h]
  int v20; // [rsp+88h] [rbp+10h] BYREF
  bool v21; // [rsp+90h] [rbp+18h]
  char v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v4.lpVtbl = a2->lpVtbl;
  v20 = 0;
  if ( ((int (__fastcall *)(struct IUnknown *, int *))v4.lpVtbl[2].QueryInterface)(a2, &v20) >= 0 && v20 )
    (*(void (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 41) + 56LL))(*((_QWORD *)this + 41), a2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *((_DWORD *)this + 94);
  v10 = 0LL;
  v11 = 0;
  v19 = 0;
  v12 = 0;
  v18 = v9;
  v13 = 1;
  if ( *((_QWORD *)this + 53) )
  {
    v14 = v21;
    do
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 52) + 8 * v10);
      if ( SHIsSameObject(*(struct IUnknown **)v15, a2) && *(_BYTE *)(v15 + 12) != v14 )
      {
        v16 = *((_DWORD *)this + 80);
        *(_BYTE *)(v15 + 12) = v14;
        v19 = 1;
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v15, v16);
      }
      if ( *(_BYTE *)(v15 + 12) )
        v11 = 1;
      else
        v12 = 1;
      ++v10;
    }
    while ( v10 < *((_QWORD *)this + 53) );
    v9 = v18;
  }
  if ( v12 == v9 )
  {
    v17 = 0;
  }
  else
  {
    v17 = 1;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        13LL,
        &WPP_7be50b031803361a15ec72c7fdc37b59_Traceguids,
        v12);
    }
    *((_DWORD *)this + 94) = v12;
    CImmersiveMode::_UpdateFallbackWindow(this);
  }
  if ( v11 == *((_BYTE *)this + 380) )
  {
    v13 = 0;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_l(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v7, v8, v11);
    }
    *((_BYTE *)this + 380) = v11;
  }
  if ( v19 || v22 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, (struct IImmersiveMonitor *)a2, v21);
  if ( v13 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, 0LL, v11);
  if ( v17 )
    CImmersiveMode::_ScheduleLegacyModeNotification(this, v9, v12);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
