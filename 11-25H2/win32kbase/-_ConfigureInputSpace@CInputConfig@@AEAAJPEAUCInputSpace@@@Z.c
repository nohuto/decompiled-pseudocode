/*
 * XREFs of ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F7EA8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1401F8AC8 (-zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14012F720 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x14012FF64 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x140142BF8 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401479E0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1401F7794 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F819C (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F81F0 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F84D4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1401F8548 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 */

__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  PERESOURCE *v7; // rbx
  struct _ERESOURCE *v8; // rcx
  CInputConfig *v9; // rdx
  CInputConfig *i; // rcx
  _DWORD *v11; // r8
  struct _LIST_ENTRY *v12; // rax
  CInputConfig *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  CInputConfig *v16; // rcx
  __int64 v17; // rcx
  CInputConfig **v18; // rax
  __int64 CurrentProcessWin32Process; // rax
  CInputConfig *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD v25[2]; // [rsp+20h] [rbp-38h] BYREF
  CInputConfig *v26; // [rsp+30h] [rbp-28h]
  CInputConfig *v27; // [rsp+38h] [rbp-20h]

  v6 = 0;
  if ( !CInputConfig::LockExclusivelyHeld((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 408);
  v7 = (PERESOURCE *)(W32GetUserSessionState(v5, v4) + 18640);
  v8 = *v7;
  v25[0] = v7;
  ExEnterCriticalRegionAndAcquireResourceShared(v8);
  v9 = *(CInputConfig **)this;
  v25[1] = this;
  v26 = v9;
  for ( i = *(CInputConfig **)v9; ; i = *(CInputConfig **)i )
  {
    v27 = i;
    v11 = 0LL;
    if ( v9 != this )
      v11 = (_DWORD *)((char *)v9 + 16);
    if ( !v11 )
      break;
    if ( *v11 == *(_DWORD *)a2 && v11[1] == *((_DWORD *)a2 + 1) )
    {
      v12 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v25, (__int64)v9);
      CInputConfig::_FreeInputSpace(v13, v12);
      break;
    }
    v9 = i;
    v26 = i;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*v7);
  if ( !*((_DWORD *)a2 + 363) && !*((_BYTE *)a2 + 1448) )
    goto LABEL_21;
  v14 = Win32AllocPoolZInitImpl(256LL, 0x5D0uLL, 0x496E436Fu);
  v15 = v14;
  if ( v14 )
  {
    CInputSpace::Reset((CInputSpace *)(v14 + 16), (struct CInputSpace ***)a2);
    CInputConfig::_ProcessInputSpace(v16, (struct CInputSpace *)(v15 + 16));
    v18 = (CInputConfig **)*((_QWORD *)this + 1);
    if ( *v18 != this )
      __fastfail(3u);
    *(_QWORD *)v15 = this;
    *(_QWORD *)(v15 + 8) = v18;
    *v18 = (CInputConfig *)v15;
    *((_QWORD *)this + 1) = v15;
    if ( !*(_BYTE *)(v15 + 1464) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      *(_QWORD *)(v15 + 32) = CurrentProcessWin32Process;
      *(_QWORD *)(CurrentProcessWin32Process + 808) |= 0x2000000uLL;
    }
LABEL_21:
    CInputConfig::_EnsureInputSpace(this);
    CInputConfig::_FindDefaultInputSpace(v20);
    InputConfig::TraceCurrentConfig(v22, v21);
    CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)this + 16), v23);
    return v6;
  }
  return (unsigned int)-1073741801;
}
