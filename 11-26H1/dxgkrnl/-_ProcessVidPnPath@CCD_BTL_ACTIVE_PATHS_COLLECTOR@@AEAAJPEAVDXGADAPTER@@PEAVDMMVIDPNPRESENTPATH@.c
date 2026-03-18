/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1402AAE98
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1402AA220 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x14034482C (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002BF30 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1402AC488 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402AD220 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1402CAFA0 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403200E0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x140346C50 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  unsigned __int16 v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // r14
  bool IsCoreResourceSharedOwner; // al
  unsigned int v13; // edx
  DXGMONITOR *v14; // rsi
  int v15; // esi
  bool v16; // cl
  char v17; // r8
  char v18; // dl
  __int64 v19; // rcx
  CCD_TOPOLOGY *v20; // rsi
  _DWORD *v21; // rax
  int v22; // r9d
  int v23; // r10d
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  CCD_TOPOLOGY *v27; // rdx
  int v28; // r8d
  __int64 v29; // r14
  char v30; // cl
  char v31; // al
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  struct DMMVIDPNTARGETMODESET *v36; // rdi
  __int64 v37; // rdx
  __int128 v38; // xmm3
  __int128 v39; // xmm4
  __int64 v40; // xmm0_8
  __int64 v41; // rcx
  struct DMMVIDPNTARGETMODESET *v42; // rbx
  DMMVIDPNSOURCEMODE *v43; // rcx
  int v44; // eax
  bool v45; // al
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v47; // xmm1
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v48; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v50; // r9
  __int64 v51; // r8
  int v52; // ecx
  __int64 result; // rax
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v55; // r9
  bool IsVirtualModeSupportDisabled; // [rsp+58h] [rbp-31h]
  bool v57; // [rsp+59h] [rbp-30h]
  _WORD v58[7]; // [rsp+5Ah] [rbp-2Fh] BYREF
  int v59; // [rsp+68h] [rbp-21h]
  int v60; // [rsp+6Ch] [rbp-1Dh]
  int v61; // [rsp+70h] [rbp-19h]
  CCD_TOPOLOGY *v62; // [rsp+78h] [rbp-11h]
  DXGMONITOR *v63[4]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v64; // [rsp+A0h] [rbp+17h]
  bool v66; // [rsp+F8h] [rbp+6Fh]
  char v67; // [rsp+100h] [rbp+77h]

  v67 = a4;
  if ( (*(_BYTE *)(*(_QWORD *)this + 84LL) & 5) == 5 )
  {
    WdLogSingleEntry0(1LL);
    a4 = v67;
    WdLogGlobalForLineNumber = 221;
  }
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL);
  v10 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  if ( *(_DWORD *)(v9 + 92) )
  {
    if ( (v10 & 5) == 0 || (v10 & 4) != 0 && !*(_QWORD *)(v9 + 544) )
      return 0LL;
  }
  else if ( (v10 & 4) != 0 )
  {
    return 0LL;
  }
  if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    WdLogSingleEntry5(
      1LL,
      *((int *)a2 + 104),
      *((unsigned int *)a2 + 103),
      *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL),
      *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL),
      *(_QWORD *)(*(_QWORD *)this + 64LL));
    WdLogGlobalForLineNumber = 255;
    return 0LL;
  }
  ++*((_WORD *)this + 4);
  v11 = 0;
  v58[0] = 0;
  IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner(a2);
  v13 = *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( !IsCoreResourceSharedOwner )
  {
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)a2 + 412),
                                          v13,
                                          (__int64)v58,
                                          0LL,
                                          0LL,
                                          0LL);
    v17 = 0;
    v15 = IsVirtualizationDisabledForTarget;
    v18 = v58[0];
    v11 = 0;
    goto LABEL_25;
  }
  if ( !a2 || v13 == -1 )
  {
LABEL_61:
    v15 = -1073741811;
    v17 = HIBYTE(v58[0]);
LABEL_24:
    v18 = 0;
    goto LABEL_25;
  }
  *(_QWORD *)&v58[3] = *((_QWORD *)a2 + 395);
  if ( !*(_QWORD *)&v58[3] )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10231;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      10231LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_61;
  }
  IsVirtualModeSupportDisabled = 0;
  MONITOR_MGR::AcquireMonitorShared(v63, (__int64)a2, v13, 1u);
  v14 = v63[0];
  if ( v63[0] )
  {
    if ( *((_DWORD *)v63[0] + 70) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5280;
    }
    IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v14);
    *(_DWORD *)&v58[1] = 0;
  }
  else
  {
    *(_DWORD *)&v58[1] = -1073741632;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v63);
  v15 = 0;
  if ( *(_DWORD *)&v58[1] != -1073741632 )
    v15 = *(_DWORD *)&v58[1];
  v16 = 0;
  if ( *(_DWORD *)&v58[1] != -1073741632 )
    v16 = IsVirtualModeSupportDisabled;
  if ( v16 )
  {
    v17 = 1;
    v11 = 1;
  }
  else
  {
    v17 = *(_BYTE *)(*(_QWORD *)&v58[3] + 290LL) == 0;
    v11 = *(_BYTE *)(*(_QWORD *)&v58[3] + 289LL) == 0;
  }
  if ( !v11 && (*(_DWORD *)(*(_QWORD *)&v58[3] + 24LL) & 0x20) != 0 )
    goto LABEL_24;
  v18 = 1;
LABEL_25:
  if ( v15 >= 0 )
  {
    v19 = *((_QWORD *)a3 + 12);
    v20 = *(CCD_TOPOLOGY **)this;
    LOBYTE(v58[0]) = v18 == 0;
    v62 = v20;
    v21 = *(_DWORD **)(v19 + 96);
    v66 = v17 == 0;
    v57 = !v11;
    v22 = v21[23];
    v23 = v21[21];
    v60 = v21[20];
    v59 = *(_DWORD *)(v19 + 24);
    v24 = *((_QWORD *)a3 + 11);
    *(_DWORD *)&v58[3] = v22;
    v61 = v23;
    *(_DWORD *)&v58[1] = *(_DWORD *)(v24 + 24);
    CCD_TOPOLOGY::ClearModalitySetId(v20);
    v25 = *((_QWORD *)v20 + 8);
    if ( v25 && (v26 = *(unsigned __int16 *)(v25 + 20), (unsigned __int16)v26 < *(_WORD *)(v25 + 22)) )
    {
      v27 = v62;
      v28 = v60;
      v29 = 296 * v26;
      v30 = 4 * LOBYTE(v58[0]);
      *(_QWORD *)(v29 + v25 + 72) = *(_QWORD *)((char *)a2 + 412);
      *(_DWORD *)(v29 + v25 + 80) = *(_DWORD *)&v58[1];
      *(_DWORD *)(v29 + v25 + 84) = v59;
      v31 = v30 | (2 * v66);
      v32 = 0x8700000000000LL;
      *(_OWORD *)(v29 + v25 + 312) = 0LL;
      *(_BYTE *)(v29 + v25 + 185) = v57 | v31;
      v64 = 0LL;
      *(_QWORD *)(v29 + v25 + 56) = 0x8700000000000LL;
      *(_OWORD *)(v29 + v25 + 328) = 0LL;
      *(_QWORD *)(v29 + v25 + 344) = v64;
      *(_DWORD *)(v29 + v25 + 312) = *((_DWORD *)v27 + 22);
      if ( v28 != -2 )
      {
        v33 = v61;
        if ( v61 != -2 )
        {
          v32 = 0x8F00000000000LL;
          *(_DWORD *)(v29 + v25 + 144) = v28;
          *(_QWORD *)(v29 + v25 + 56) = 0x8F00000000000LL;
          *(_DWORD *)(v29 + v25 + 148) = v33;
        }
      }
      v34 = *(_DWORD *)&v58[3];
      *(_DWORD *)(v29 + v25 + 268) = *(_DWORD *)&v58[3];
      if ( v34 )
        *(_QWORD *)(v29 + v25 + 56) = v32 | 0x1000000000LL;
      ++*(_WORD *)(*((_QWORD *)v27 + 8) + 20LL);
      *(_DWORD *)(v29 + v25 + 332) = *((unsigned __int16 *)a3 + 54);
      *(_DWORD *)(v29 + v25 + 144) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL);
      *(_DWORD *)(v29 + v25 + 148) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL);
      v35 = *(_QWORD *)(v29 + v25 + 56) | 0x800000000000LL;
      *(_QWORD *)(v29 + v25 + 56) = v35;
      if ( v67 )
      {
        *(_QWORD *)(v29 + v25 + 56) = v35 | 0x8000000000000000uLL;
        *(_QWORD *)(v29 + v25 + 56) |= -(__int64)((unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(
                                                                     *((ADAPTER_DISPLAY **)a2 + 395),
                                                                     *(_DWORD *)(v29 + v25 + 80)) != 0) & 0x20000000000LL;
        *(_QWORD *)(v29 + v25 + 56) |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                                    *((ADAPTER_DISPLAY **)a2 + 395),
                                                    *(_DWORD *)(v29 + v25 + 80)) != 0) & 0x80000000000LL;
        v36 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)a3 + 12));
        v37 = *((_QWORD *)v36 + 18);
        if ( v37 )
        {
          v38 = *(_OWORD *)(v37 + 88);
          v39 = *(_OWORD *)(v37 + 104);
          v40 = *(_QWORD *)(v37 + 120);
          *(_OWORD *)(v29 + v25 + 88) = *(_OWORD *)(v37 + 72);
          *(_OWORD *)(v29 + v25 + 104) = v38;
          *(_OWORD *)(v29 + v25 + 120) = v39;
          *(_QWORD *)(v29 + v25 + 136) = v40;
          *(_QWORD *)(v29 + v25 + 56) |= 0x87uLL;
          v41 = *(_QWORD *)(v29 + v25 + 56);
          *(_DWORD *)(v29 + v25 + 260) = *(_DWORD *)(v37 + 132);
          v41 |= 8uLL;
          *(_DWORD *)(v29 + v25 + 264) = *(_DWORD *)(v37 + 136);
          *(_QWORD *)(v29 + v25 + 56) = v41;
          *(_QWORD *)(v29 + v25 + 280) = *(_QWORD *)(v37 + 152);
          *(_QWORD *)(v29 + v25 + 288) = *(_QWORD *)(v37 + 144);
          *(_DWORD *)(v29 + v25 + 296) = *(_DWORD *)(v37 + 160);
          *(_QWORD *)(v29 + v25 + 56) = v41 | 0x801000000LL;
        }
        else
        {
          *(_DWORD *)(v29 + v25 + 260) = 0;
          *(_DWORD *)(v29 + v25 + 264) = 4;
        }
        v42 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)a3 + 11));
        v43 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v42 + 18);
        if ( v43 )
        {
          v44 = *((_DWORD *)v43 + 18);
          v45 = v44 == 3 || v44 == 4;
          *(_BYTE *)(v29 + v25 + 184) = v45;
          GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v43);
          v47 = *(_OWORD *)&GraphicsInfo->Stride;
          *(_OWORD *)(v29 + v25 + 152) = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
          *(_OWORD *)(v29 + v25 + 168) = v47;
          *(_QWORD *)(v29 + v25 + 56) |= 0x100uLL;
          v48 = *((_DWORD *)a3 + 29);
          *(_DWORD *)(v29 + v25 + 188) = v48;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
            *(_DWORD *)(v29 + v25 + 188) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                             *((ADAPTER_DISPLAY **)a2 + 395),
                                             v48,
                                             *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
          *(_DWORD *)(v29 + v25 + 192) = *((_DWORD *)a3 + 28);
          *(_QWORD *)(v29 + v25 + 56) |= 0x40000000200uLL;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                                 *((ADAPTER_DISPLAY **)a2 + 395),
                                 *(_DWORD *)(v29 + v25 + 80));
            *(_QWORD *)(v29 + v25 + 336) = SessionViewOwner;
            if ( SessionViewOwner )
            {
              v50 = 4024LL * *(unsigned int *)(v29 + v25 + 80);
              v51 = *(_QWORD *)(*((_QWORD *)a2 + 395) + 128LL);
              *(_DWORD *)(v29 + v25 + 208) = *((_DWORD *)SessionViewOwner + 8) - *((_DWORD *)SessionViewOwner + 6);
              *(_DWORD *)(v29 + v25 + 212) = *((_DWORD *)SessionViewOwner + 9) - *((_DWORD *)SessionViewOwner + 7);
              *(_DWORD *)(v29 + v25 + 200) = *((_DWORD *)SessionViewOwner + 6);
              *(_DWORD *)(v29 + v25 + 204) = *((_DWORD *)SessionViewOwner + 7);
              *(_DWORD *)(v29 + v25 + 224) = *(_DWORD *)(v50 + v51 + 688);
              *(_DWORD *)(v29 + v25 + 232) = *(_DWORD *)(v50 + v51 + 696);
              *(_DWORD *)(v29 + v25 + 228) = *(_DWORD *)(v50 + v51 + 692);
              *(_DWORD *)(v29 + v25 + 236) = *(_DWORD *)(v50 + v51 + 700);
              *(_QWORD *)(v29 + v25 + 56) |= 0x820800uLL;
              *(_QWORD *)(v29 + v25 + 252) = *((_QWORD *)SessionViewOwner + 8);
            }
            *(_DWORD *)(v29 + v25 + 272) = *(_DWORD *)(4024LL * *(unsigned int *)(v29 + v25 + 80)
                                                     + *(_QWORD *)(*((_QWORD *)a2 + 395) + 128LL)
                                                     + 3804);
            *(_QWORD *)(v29 + v25 + 56) |= 0x1000000000000uLL;
            v52 = (unsigned __int8)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 536LL) + 168LL);
            if ( v52 == 12 )
            {
              *(_DWORD *)(v29 + v25 + 248) = 259;
            }
            else if ( v52 == 13 )
            {
              *(_DWORD *)(v29 + v25 + 248) = -1073741437;
            }
          }
        }
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v42 + 88));
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v36 + 88));
      }
    }
    else
    {
      v55 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v55 )
        v8 = *(_WORD *)(v55 + 22);
      WdLogSingleEntry5(3LL, this, *(_QWORD *)this, v55, v8, *((unsigned __int16 *)this + 4));
      WdLogGlobalForLineNumber = 312;
    }
    return 0LL;
  }
  WdLogSingleEntry3(
    2LL,
    *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL),
    *((int *)a2 + 104),
    *((unsigned int *)a2 + 103));
  result = (unsigned int)v15;
  WdLogGlobalForLineNumber = 290;
  return result;
}
