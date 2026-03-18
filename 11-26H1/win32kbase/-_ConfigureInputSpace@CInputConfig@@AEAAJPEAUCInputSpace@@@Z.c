/*
 * XREFs of ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x14008DB84
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x14008D61C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x140212358 (-zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x14008DACC (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x14008DF44 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x14008E5A0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14008E5EC (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x14008EE48 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x14008EF74 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x14008F0A8 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x14008F15C (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  unsigned int v7; // edi
  __int64 UserSessionState; // rsi
  CInputConfig *v9; // rbx
  CInputConfig *v10; // rdx
  _DWORD *v11; // rcx
  CInputConfig *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  CInputConfig *v15; // rcx
  __int64 v16; // rcx
  CInputConfig **v17; // rax
  CInputConfig *v18; // rcx
  CInputConfig *v19; // rcx
  __int64 CurrentProcessWin32Process; // rax

  v7 = 0;
  if ( !CInputConfig::LockExclusivelyHeld() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  v9 = *(CInputConfig **)this;
  v10 = **(CInputConfig ***)this;
  while ( 1 )
  {
    v11 = 0LL;
    v12 = v10;
    if ( v9 != this )
      v11 = (_DWORD *)((char *)v9 + 16);
    if ( !v11 )
      break;
    if ( *v11 == *(_DWORD *)a2 && v11[1] == *((_DWORD *)a2 + 1) )
    {
      if ( !CInputConfig::LockExclusivelyHeld() )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 391LL);
      CInputConfig::_FreeInputSpace(v18, (struct _LIST_ENTRY *)v9);
      break;
    }
    v10 = *(CInputConfig **)v10;
    v9 = v12;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  if ( *((_DWORD *)a2 + 363) || *((_BYTE *)a2 + 1448) )
  {
    v13 = Win32AllocPoolZInitImpl(256LL, 0x5D0uLL, 0x496E436Fu);
    v14 = v13;
    if ( !v13 )
      return (unsigned int)-1073741801;
    CInputSpace::Reset((CInputSpace *)(v13 + 16), a2);
    CInputConfig::_ProcessInputSpace(v15, (struct CInputSpace *)(v14 + 16));
    v17 = (CInputConfig **)*((_QWORD *)this + 1);
    if ( *v17 != this )
      __fastfail(3u);
    *(_QWORD *)v14 = this;
    *(_QWORD *)(v14 + 8) = v17;
    *v17 = (CInputConfig *)v14;
    *((_QWORD *)this + 1) = v14;
    if ( !*(_BYTE *)(v14 + 1464) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      *(_QWORD *)(v14 + 32) = CurrentProcessWin32Process;
      *(_QWORD *)(CurrentProcessWin32Process + 808) |= 0x2000000uLL;
    }
  }
  CInputConfig::_EnsureInputSpace(this);
  CInputConfig::_FindDefaultInputSpace(v19);
  InputConfig::TraceCurrentConfig();
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)this + 16));
  return v7;
}
