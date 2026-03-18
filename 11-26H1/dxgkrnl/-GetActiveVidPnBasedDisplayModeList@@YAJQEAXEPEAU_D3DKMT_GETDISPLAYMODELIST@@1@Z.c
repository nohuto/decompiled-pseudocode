/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140363C84
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140363988 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0xxqqqqqqqqx_EtwWriteTransfer @ 0x140078298 (McTemplateK0xxqqqqqqqqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??1MODE_UNION_LIST@@QEAA@XZ @ 0x140192250 (--1MODE_UNION_LIST@@QEAA@XZ.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1401951A8 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402AD220 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1402D77B8 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     _CombineModeList @ 0x1402DA420 (_CombineModeList.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x140347990 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x14034A3DC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x140363614 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     DxgkQueryDmmInterface @ 0x140365A0C (DxgkQueryDmmInterface.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1403DD814 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        D3DKMT_DISPLAYMODE **a4)
{
  DXGADAPTER *v5; // rsi
  struct DXGGLOBAL *Global; // rdi
  ULONG RuntimeThread; // eax
  ULONG v8; // ebx
  ULONG v9; // eax
  unsigned int v10; // edx
  __int64 VidPnSourceId; // rdi
  int DmmInterface; // eax
  __int64 v13; // r12
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r14
  void (__fastcall *v18)(DXGADAPTER *); // r13
  struct D3DKMDT_HVIDPN__ *v19; // r14
  __int64 (__fastcall *v20)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **); // rax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  ADAPTER_DISPLAY *v24; // rcx
  unsigned __int64 v25; // rbx
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v27; // r11
  __int64 v28; // r11
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  char v30; // r12
  __int64 v31; // rax
  __int64 v32; // rcx
  char v33; // r12
  int v34; // eax
  __int64 v35; // rbx
  int v36; // eax
  unsigned int v37; // ebx
  bool v38; // zf
  void **v39; // r9
  unsigned int *v40; // rax
  unsigned int *p_ModeCount; // r13
  __int64 v42; // r15
  unsigned int v43; // r14d
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 v46; // r12
  __int64 v47; // r12
  int v48; // r13d
  int v49; // r12d
  int v50; // r15d
  int v51; // r14d
  unsigned int v52; // esi
  int v53; // edi
  __int64 v54; // rbx
  struct DXGGLOBAL *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 hAdapter; // [rsp+28h] [rbp-D8h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v60; // [rsp+28h] [rbp-D8h]
  unsigned int v61[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v62[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v63[8]; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v64[8]; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v65; // [rsp+50h] [rbp-B0h]
  unsigned int *v66; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v67; // [rsp+60h] [rbp-A0h]
  char v68; // [rsp+70h] [rbp-90h] BYREF
  char v69; // [rsp+71h] [rbp-8Fh]
  ULONG UserTime[2]; // [rsp+78h] [rbp-88h] BYREF
  void *v71; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v72; // [rsp+88h] [rbp-78h] BYREF
  void (__fastcall *v73)(DXGADAPTER *); // [rsp+90h] [rbp-70h]
  D3DKMT_DISPLAYMODE **p_pModeList; // [rsp+98h] [rbp-68h]
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v75; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v76; // [rsp+A8h] [rbp-58h] BYREF
  struct D3DKMDT_HVIDPN__ *v77; // [rsp+B0h] [rbp-50h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST *v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h]
  DXGADAPTER *v80; // [rsp+D0h] [rbp-30h]
  _QWORD v81[5]; // [rsp+D8h] [rbp-28h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v82; // [rsp+100h] [rbp+0h]
  bool v83; // [rsp+104h] [rbp+4h]
  char v84; // [rsp+105h] [rbp+5h]
  int v85; // [rsp+108h] [rbp+8h]
  int v86; // [rsp+10Ch] [rbp+Ch]
  char v87; // [rsp+110h] [rbp+10h]
  __int128 v88; // [rsp+118h] [rbp+18h] BYREF
  __int64 v89; // [rsp+128h] [rbp+28h]
  int v90; // [rsp+130h] [rbp+30h]
  char v91; // [rsp+134h] [rbp+34h]
  __int64 v92; // [rsp+138h] [rbp+38h]
  __int128 v93; // [rsp+140h] [rbp+40h] BYREF
  __int64 v94; // [rsp+150h] [rbp+50h]
  int v95; // [rsp+158h] [rbp+58h]
  char v96; // [rsp+15Ch] [rbp+5Ch]
  __int64 v97; // [rsp+160h] [rbp+60h]
  unsigned int v98[16]; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v99[16]; // [rsp+1B0h] [rbp+B0h] BYREF

  p_pModeList = a4;
  v78 = a3;
  v5 = a1;
  v69 = a2;
  v80 = a1;
  UserTime[0] = 0;
  Global = DXGGLOBAL::GetGlobal();
  RuntimeThread = KeQueryRuntimeThread(KeGetCurrentThread(), UserTime);
  UserTime[0] = 0;
  v8 = RuntimeThread;
  v9 = KeQueryRuntimeThread(KeGetCurrentThread(), UserTime);
  v10 = v9 - v8;
  if ( v8 > v9 )
    v10 = v9 - v8 - 1;
  _InterlockedAdd64((volatile signed __int64 *)Global + 17, v10);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 20);
  VidPnSourceId = a3->VidPnSourceId;
  *(_QWORD *)UserTime = 0LL;
  DmmInterface = DxgkQueryDmmInterface(v5);
  v13 = DmmInterface;
  if ( DmmInterface < 0 )
  {
    WdLogSingleEntry4(2LL, DmmInterface, a3->hAdapter, v5, (unsigned int)VidPnSourceId);
    hAdapter = a3->hAdapter;
    WdLogGlobalForLineNumber = 4965;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status=0x%I64x QueryDxgDmmInterface failed hAdapter=0x%I64x pAdapter=0x%I64x VidPnSourceId=0x%I64x",
      v13,
      hAdapter,
      (__int64)v5,
      (unsigned int)VidPnSourceId,
      0LL);
    return (unsigned int)v13;
  }
  v15 = *(_QWORD *)UserTime;
  v72 = 0LL;
  v77 = 0LL;
  v16 = (*(__int64 (__fastcall **)(DXGADAPTER *, struct D3DKMDT_HVIDPN__ **, struct _DXGDMM_VIDPN_INTERFACE **))(*(_QWORD *)UserTime + 48LL))(
          v5,
          &v77,
          &v72);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, v5, v16);
    WdLogGlobalForLineNumber = 4985;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)v5,
      v17,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v17;
  }
  v18 = *(void (__fastcall **)(DXGADAPTER *))(v15 + 64);
  v19 = v77;
  v75 = 0LL;
  v76 = 0LL;
  v20 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v72;
  v73 = v18;
  v21 = v20(v77, &v75, &v76);
  v13 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry5(2LL, v21, v19, v5, VidPnSourceId, v72);
    WdLogGlobalForLineNumber = 5008;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status=0x%I64x pfnGetTopology failed hVidPn=0x%I64x pAdapter=0x%I64x VidPnSrcId=%0x%I64x pDmmVidPnInterface=0x%I64x",
      v13,
      (__int64)v19,
      (__int64)v5,
      VidPnSourceId,
      (__int64)v72);
    goto LABEL_10;
  }
  v24 = (ADAPTER_DISPLAY *)*((_QWORD *)v5 + 395);
  v25 = 0LL;
  v71 = 0LL;
  v68 = 0;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v24, (unsigned int)VidPnSourceId, v22, v23);
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView(SessionViewOwner)
    || v69 )
  {
LABEL_39:
    *(__m128i *)v98 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *(_OWORD *)&v98[4] = *(_OWORD *)v98;
    *(_OWORD *)&v98[8] = *(_OWORD *)v98;
    *(_OWORD *)&v98[12] = *(_OWORD *)v98;
    v36 = PrepareUnpinnedPathsFromSource(
            *(const struct _DXGDMM_INTERFACE *const *)UserTime,
            v5,
            v19,
            v72,
            v75,
            v76,
            VidPnSourceId,
            1u,
            1u,
            1u,
            (unsigned __int64 *const)&v71,
            (unsigned int (*)[16])v98,
            0LL);
    v13 = v36;
    v37 = -1071774925;
    if ( v36 == -1071774925 )
    {
      WdLogSingleEntry2(7LL, VidPnSourceId, v5);
      WdLogGlobalForLineNumber = 5130;
    }
    else
    {
      v37 = -1071774886;
      if ( v36 != -1071774886 )
      {
        if ( v36 < 0 )
        {
          WdLogSingleEntry3(2LL, VidPnSourceId, v5, v36);
          WdLogGlobalForLineNumber = 5144;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to ensure unpinned paths from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
            VidPnSourceId,
            (__int64)v5,
            v13,
            0LL,
            0LL);
LABEL_10:
          if ( v19 )
            ((void (__fastcall *)(DXGADAPTER *, struct D3DKMDT_HVIDPN__ *))v18)(v5, v19);
          return (unsigned int)v13;
        }
        v25 = (unsigned __int64)v71;
        v33 = v68;
LABEL_49:
        v38 = *((_QWORD *)v5 + 396) == 0LL;
        v81[2] = v72;
        v83 = v38;
        v81[3] = v75;
        v81[4] = v76;
        v82 = v78->VidPnSourceId;
        v89 = 0LL;
        v94 = 0LL;
        v81[0] = v5;
        v81[1] = v19;
        v84 = 1;
        v85 = -1;
        v86 = 0;
        v87 = 0;
        v90 = 0;
        v91 = 1;
        v92 = 0LL;
        v95 = 0;
        v96 = 1;
        v97 = 0LL;
        v88 = 0LL;
        v93 = 0LL;
        if ( p_pModeList )
        {
          v39 = (void **)(p_pModeList + 1);
          v40 = (unsigned int *)(p_pModeList + 2);
        }
        else
        {
          v39 = 0LL;
          v40 = 0LL;
        }
        p_ModeCount = &v78->ModeCount;
        p_pModeList = &v78->pModeList;
        v42 = (int)OBTAIN_MODES_ON_SOURCE::operator()((__int64)v81, &v78->pModeList, &v78->ModeCount, v39, v40);
        MODE_UNION_LIST::~MODE_UNION_LIST((void **)&v93);
        MODE_UNION_LIST::~MODE_UNION_LIST((void **)&v88);
        if ( (int)v42 >= 0 )
        {
          if ( v33 )
          {
            v43 = 0;
            if ( v25 )
            {
              v44 = 0LL;
              do
              {
                v45 = v99[v44];
                v71 = 0LL;
                UserTime[0] = 0;
                *(_QWORD *)v98 = v5;
                v98[2] = v78->VidPnSourceId;
                *(_QWORD *)&v98[14] = 0LL;
                v98[3] = v45;
                LOBYTE(v98[4]) = 1;
                memset(&v98[6], 0, 28);
                LOBYTE(v98[13]) = 1;
                v46 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
                             v98,
                             (struct _D3DKMT_DISPLAYMODE **)&v71,
                             UserTime);
                MODE_UNION_LIST::~MODE_UNION_LIST((void **)&v98[6]);
                if ( (int)v46 >= 0 )
                {
                  if ( v71 )
                  {
                    v47 = (int)CombineModeList(
                                 p_ModeCount,
                                 (const void **)p_pModeList,
                                 UserTime[0],
                                 (unsigned int *)v71,
                                 0);
                    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v71);
                    if ( (int)v47 < 0 )
                    {
                      WdLogSingleEntry4(3LL, VidPnSourceId, v45, v5, v47);
                      WdLogGlobalForLineNumber = 5314;
                    }
                  }
                }
                else
                {
                  WdLogSingleEntry4(3LL, VidPnSourceId, (unsigned int)v45, v5, v46);
                  WdLogGlobalForLineNumber = 5253;
                }
                v44 = ++v43;
              }
              while ( v43 < v25 );
            }
          }
          _InterlockedAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal() + 8, *p_ModeCount);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
          {
            p_pModeList = (D3DKMT_DISPLAYMODE **)*((_QWORD *)DXGGLOBAL::GetGlobal() + 17);
            UserTime[0] = *((_DWORD *)DXGGLOBAL::GetGlobal() + 33);
            LODWORD(v71) = *((_DWORD *)DXGGLOBAL::GetGlobal() + 32);
            v48 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 29);
            v49 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 28);
            v50 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 25);
            v51 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 24);
            v52 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 23);
            v53 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 20);
            v54 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 9);
            v55 = DXGGLOBAL::GetGlobal();
            LODWORD(v67) = UserTime[0];
            LODWORD(v66) = (_DWORD)v71;
            LODWORD(v65) = v48;
            *(_DWORD *)v64 = v49;
            *(_DWORD *)v63 = v50;
            *(_DWORD *)v62 = v51;
            v61[0] = v52;
            LODWORD(v60) = v53;
            McTemplateK0xxqqqqqqqqx_EtwWriteTransfer(
              v57,
              v56,
              v58,
              *((_QWORD *)v55 + 8),
              v54,
              v60,
              *(_QWORD *)v61,
              *(_QWORD *)v62,
              *(_QWORD *)v63,
              *(_QWORD *)v64,
              v65,
              v66,
              v67,
              p_pModeList);
            v5 = v80;
          }
          if ( v77 )
            v73(v5);
          return 0LL;
        }
        else
        {
          WdLogSingleEntry5(3LL, v42, v19, v5, VidPnSourceId, v25);
          WdLogGlobalForLineNumber = 5168;
          if ( v19 )
            ((void (__fastcall *)(DXGADAPTER *, struct D3DKMDT_HVIDPN__ *))v73)(v5, v19);
          return (unsigned int)v42;
        }
      }
      WdLogSingleEntry2(7LL, VidPnSourceId, v5);
      WdLogGlobalForLineNumber = 5137;
    }
    if ( v19 )
      ((void (__fastcall *)(DXGADAPTER *, struct D3DKMDT_HVIDPN__ *))v18)(v5, v19);
    return v37;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v27);
  if ( PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)v5 + 395) + 128LL)
                                                       + 4024 * VidPnSourceId) )
  {
LABEL_38:
    v18 = v73;
    goto LABEL_39;
  }
  v30 = 0;
  v79 = v28 + 48;
  do
  {
    v31 = *((_QWORD *)PrimaryDisplaySource + 1);
    v68 = 0;
    if ( *(DXGADAPTER **)(v31 + 16) != v5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5044;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplaySource->GetAdapter() == pAdapter",
        5044LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                v5,
                *((_DWORD *)PrimaryDisplaySource + 268),
                0LL,
                0LL,
                0LL,
                &v68,
                0LL,
                0LL,
                0LL,
                0LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5059;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5059LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v25 )
    {
      if ( v30 != v68 )
        goto LABEL_30;
      if ( v25 >= *(unsigned int *)(*((_QWORD *)v5 + 395) + 96LL) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5070;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NumPathsFromSource < pAdapter->GetDisplayCore()->GetNumVidPnSources()",
          5070LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v98[v25++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v25 = 1LL;
      v30 = v68;
      v99[0] = *((_DWORD *)PrimaryDisplaySource + 268);
      v98[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v71 = (void *)v25;
LABEL_30:
    v32 = *((_QWORD *)PrimaryDisplaySource + 7);
    PrimaryDisplaySource = 0LL;
    if ( v32 != v79 )
      PrimaryDisplaySource = (struct DISPLAY_SOURCE *)(v32 - 56);
  }
  while ( PrimaryDisplaySource );
  if ( v25 <= 1 )
  {
    v68 = 0;
    goto LABEL_38;
  }
  v33 = 1;
  v34 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(v5, v98, v25, v19, v99);
  if ( v34 >= 0 )
    goto LABEL_49;
  v35 = v34;
  LODWORD(v13) = -1071775483;
  WdLogSingleEntry4(2LL, VidPnSourceId, v5, v34, -1071775483LL);
  WdLogGlobalForLineNumber = 5101;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to convert DWM clone to hardware clone from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x), re"
              "turning 0x%I64x to rety the cross adapter clone way.",
    VidPnSourceId,
    (__int64)v5,
    v35,
    -1071775483LL,
    0LL);
  if ( v19 )
    ((void (__fastcall *)(DXGADAPTER *, struct D3DKMDT_HVIDPN__ *))v73)(v5, v19);
  return (unsigned int)v13;
}
