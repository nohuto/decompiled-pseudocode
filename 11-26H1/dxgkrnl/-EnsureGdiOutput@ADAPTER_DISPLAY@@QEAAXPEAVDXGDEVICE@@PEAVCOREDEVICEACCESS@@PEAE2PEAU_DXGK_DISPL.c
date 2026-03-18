/*
 * XREFs of ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2480
 * Callers:
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401C25AC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z @ 0x1400313D4 (--0ADAPTEROWNERTRACKER@@QEAA@PEAVDXGADAPTER@@0@Z.c)
 *     ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1400317B8 (-PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1402D290C (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D3940 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D3CBC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EC47C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C10C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall ADAPTER_DISPLAY::EnsureGdiOutput(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v9; // r15
  DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  struct DXGSESSIONDATA *SessionData; // rbx
  struct _KPROCESS *v16; // rbx
  __int64 i; // rbx
  unsigned int j; // ebx
  __int64 v19; // rsi
  unsigned int k; // esi
  DXGADAPTER *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  bool v25; // zf
  struct DXGPROCESS *Current; // rax
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rbx
  DXGADAPTER *v30; // rbx
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v37; // [rsp+20h] [rbp-A9h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v38; // [rsp+20h] [rbp-A9h]
  _BYTE v40[8]; // [rsp+60h] [rbp-69h] BYREF
  DXGADAPTER *v41; // [rsp+68h] [rbp-61h]
  DXGADAPTER *v42; // [rsp+70h] [rbp-59h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-51h] BYREF
  char v44; // [rsp+A8h] [rbp-21h]
  __int128 v45; // [rsp+B0h] [rbp-19h] BYREF

  v45 = 0LL;
  v9 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v11, v12, v13);
  if ( !SessionData )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2673;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 2673LL, 0LL, 0LL, 0LL, 0LL);
  }
  v44 = 0;
  v16 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v14) != v16 )
  {
    KeStackAttachProcess(v16, &ApcState);
    v44 = 1;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop(this, i) )
    {
      v22 = *((_QWORD *)this + 16);
      v23 = (unsigned int)i;
      v24 = 4024LL * (unsigned int)i;
      if ( *(_QWORD *)(v24 + v22 + 728) )
      {
        v25 = *(_DWORD *)(v24 + v22 + 736) == 3;
      }
      else
      {
        Current = DXGPROCESS::GetCurrent();
        v25 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 320LL))(0LL) == 0;
      }
      *((_BYTE *)&v45 + i) = v25;
      if ( v25 )
      {
        if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, i, 0) || !ADAPTER_DISPLAY::IsVidPnSourceVisible(this, i) )
        {
          v9 = 1;
          v31 = DmmEnablePathsFromVidPnSource(a2, i, 1u, a3, a6);
          if ( v31 < 0 )
          {
            v32 = (unsigned int)i;
            v33 = v31;
            WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v32, v31);
            v34 = *((_QWORD *)this + 2);
            WdLogGlobalForLineNumber = 2738;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to restore CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
              v34,
              v23,
              v33,
              0LL,
              0LL);
LABEL_42:
            ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this, 0LL, a6);
            goto LABEL_26;
          }
          DxgkInvalidateQdcCache();
        }
      }
      else
      {
        v9 = 1;
      }
    }
  }
  if ( v9 )
  {
    ADAPTEROWNERTRACKER::ADAPTEROWNERTRACKER(
      (ADAPTEROWNERTRACKER *)v40,
      *((struct DXGADAPTER **)this + 2),
      *(struct DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL));
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *, _QWORD, unsigned __int8 *))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL)
                                                                                        + 208LL))(
            *((_QWORD *)this + 2),
            &v45,
            *((unsigned int *)this + 24),
            a5) )
    {
      WdLogSingleEntry4(4LL, a2, (unsigned __int8)v45, BYTE1(v45), *((unsigned int *)this + 24));
      WdLogGlobalForLineNumber = 2777;
    }
    for ( j = 0; j < *((_DWORD *)this + 24); ++j )
    {
      v19 = j;
      if ( !*((_BYTE *)&v45 + j) )
      {
        if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, j, 1u) )
        {
          v27 = DmmDisablePathsFromVidPnSource(a2, j);
          if ( v27 < 0 )
          {
            v28 = j;
            v29 = v27;
            WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v28, v27);
            v37 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)*((_QWORD *)this + 2);
            WdLogGlobalForLineNumber = 2797;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to disable CDD mode on adapter 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
              (__int64)v37,
              v19,
              v29,
              0LL,
              0LL);
            v30 = v41;
            if ( v41 )
              DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v41);
            if ( v42 && v30 != v42 )
              DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v42);
            goto LABEL_42;
          }
        }
      }
    }
    if ( v44 )
    {
      KeUnstackDetachProcess(&ApcState);
      v44 = 0;
    }
    for ( k = 0; k < *((_DWORD *)this + 24); ++k )
    {
      if ( *((_BYTE *)&v45 + k) )
      {
        v35 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(this, k);
        if ( v35 < 0 )
        {
          v36 = v35;
          WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), k, v35);
          v38 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)*((_QWORD *)this + 2);
          WdLogGlobalForLineNumber = 2825;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in restoring copy protection on adapter 0x%I64x VidPnSourceId 0x%I64x %08I64x (Status = 0x%I64x)",
            (__int64)v38,
            k,
            v36,
            0LL,
            0LL);
        }
      }
    }
    v21 = v41;
    if ( v41 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v41);
    if ( v42 && v21 != v42 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v42);
  }
  *a4 = v9;
LABEL_26:
  if ( v44 )
    KeUnstackDetachProcess(&ApcState);
}
