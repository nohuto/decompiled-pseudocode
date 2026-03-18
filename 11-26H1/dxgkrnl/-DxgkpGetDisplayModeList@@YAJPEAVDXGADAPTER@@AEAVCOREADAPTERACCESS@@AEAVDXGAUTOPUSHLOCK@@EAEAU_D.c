/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401CE964 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkPrepareModeListCache@@YAJU_LUID@@I@Z @ 0x1401D2480 (-DxgkPrepareModeListCache@@YAJU_LUID@@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140433430 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x140438C50 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x140070784 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1401951A8 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402AD220 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z @ 0x1402CC298 (-MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z.c)
 *     _CombineModeList @ 0x1402DA420 (_CombineModeList.c)
 *     ??8@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z @ 0x1403170F0 (--8@YA_NAEBU_D3DKMT_DISPLAYMODE@@0@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x140347990 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140363988 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1403D497C (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140431C9C (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        ADAPTER_DISPLAY **a1,
        struct COREADAPTERACCESS *a2,
        struct DXGAUTOPUSHLOCK *a3,
        unsigned int *a4,
        struct _D3DKMT_GETDISPLAYMODELIST *a5,
        const struct _D3DKMT_DISPLAYMODE **a6,
        unsigned __int8 *a7)
{
  COREADAPTERACCESS *v7; // rbx
  const struct _D3DKMT_DISPLAYMODE **v8; // r14
  unsigned __int8 v9; // si
  unsigned __int8 *v10; // rax
  int v12; // r12d
  int v13; // r13d
  DXGAUTOPUSHLOCK *v14; // rcx
  int CachedModeList; // eax
  __int64 v16; // r14
  __int64 v17; // rdx
  ADAPTER_DISPLAY *v18; // rax
  struct SESSION_VIEW *SessionViewOwner; // r11
  SESSION_VIEW *v20; // r11
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rax
  struct DXGADAPTER *v26; // rsi
  int v27; // eax
  unsigned int *v28; // r9
  int v29; // eax
  char v30; // al
  int DisplayModeList; // eax
  __int64 v32; // rcx
  int v33; // eax
  int ModeList; // eax
  D3DKMT_DISPLAYMODE **p_pModeList; // r14
  UINT *p_ModeCount; // rsi
  int v37; // eax
  D3DKMT_DISPLAYMODE *v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // r11d
  unsigned int v41; // ebx
  D3DKMT_DISPLAYMODE *v42; // r8
  UINT v43; // r9d
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // edx
  __int64 v47; // rcx
  unsigned __int8 *v48; // rbx
  UINT i; // edx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rdx
  int v54; // r8d
  const struct _D3DKMT_DISPLAYMODE *v55; // rax
  __int64 v56; // r8
  int v57; // esi
  unsigned __int8 v59; // [rsp+50h] [rbp-B0h]
  _BYTE v60[11]; // [rsp+51h] [rbp-AFh] BYREF
  BOOL v61; // [rsp+5Ch] [rbp-A4h]
  void *v62; // [rsp+60h] [rbp-A0h] BYREF
  DXGAUTOPUSHLOCK *v63; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v64; // [rsp+70h] [rbp-90h]
  COREADAPTERACCESS *v65; // [rsp+78h] [rbp-88h]
  const struct _D3DKMT_DISPLAYMODE **v66; // [rsp+80h] [rbp-80h]
  struct _D3DKMT_GETDISPLAYMODELIST v67; // [rsp+88h] [rbp-78h] BYREF
  char v68[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+B0h] [rbp-50h]
  _BYTE v71[144]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = a6;
  v9 = (unsigned __int8)a4;
  v10 = a7;
  v12 = 0;
  v66 = a6;
  v64 = a7;
  v59 = (unsigned __int8)a4;
  v63 = a3;
  v65 = a2;
  while ( 1 )
  {
    *(_DWORD *)&v60[3] = 0;
    LOBYTE(v7) = 0;
    v61 = (int)v7;
    v13 = 0;
    *(_DWORD *)&v60[7] = 0;
    v62 = 0LL;
    *v10 = 0;
    if ( v8 )
      *v8 = 0LL;
    if ( MonitorGetMonitorOrientationsFromTarget(
           a1,
           *(_DWORD *)(4024LL * a5->VidPnSourceId + *((_QWORD *)a1[395] + 16) + 1072),
           (unsigned int *)&v60[3],
           a4) >= 0 )
      v61 = *(_DWORD *)&v60[3] != 0;
    if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      v14 = v63;
      *((_QWORD *)v63 + 1) = 4024LL * a5->VidPnSourceId + 1128 + *((_QWORD *)a1[395] + 16);
      DXGAUTOPUSHLOCK::AcquireShared(v14);
    }
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(a1[395], a5);
    LODWORD(v7) = CachedModeList;
    if ( (int)(CachedModeList + 0x80000000) >= 0 && CachedModeList != -1073741275 )
    {
      WdLogSingleEntry3(7LL, a5->VidPnSourceId, a1, CachedModeList);
      WdLogGlobalForLineNumber = 5416;
      return (unsigned int)v7;
    }
    if ( CachedModeList != -1073741275 )
    {
      v12 = 0;
      goto LABEL_85;
    }
    v16 = 0LL;
    v17 = 4024LL * a5->VidPnSourceId;
    v18 = a1[395];
    v60[1] = 0;
    if ( *(_DWORD *)(v17 + *((_QWORD *)v18 + 16) + 1072) != -1
      && (int)DxgkQueryMonitorTypeLockHeld(a1, 0LL, (__int64)&v60[1], 0LL, 0LL, 0LL, 0LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5440;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5440LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v63);
    v7 = v65;
    if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v65 + 11)) )
      COREADAPTERACCESS::Release(v7);
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[395], a5->VidPnSourceId);
    if ( SessionViewOwner
      && *((_DWORD *)SessionViewOwner + 10) > 1u
      && (SESSION_VIEW::IsCrossAdapterView(SessionViewOwner) || v9) )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v20);
      if ( PrimaryDisplaySource == (struct DISPLAY_SOURCE *)(*((_QWORD *)a1[395] + 16) + 4024LL * a5->VidPnSourceId) )
      {
        v23 = *((_QWORD *)PrimaryDisplaySource + 7);
        v24 = v22 + 48;
        if ( v23 != v22 + 48 )
          v16 = v23 - 56;
        if ( v16 )
        {
          while ( 1 )
          {
            v25 = *(_QWORD *)(v16 + 8);
            v60[0] = 0;
            v26 = *(struct DXGADAPTER **)(v25 + 16);
            v60[2] = 0;
            memset(&v67, 0, sizeof(v67));
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v71, v26, 0LL);
            v69 = 0LL;
            v70 = 0;
            if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
            {
              v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v71, 0LL);
              LODWORD(v7) = v29;
              if ( v29 < 0 )
              {
                WdLogSingleEntry2(7LL, v26, v29);
                WdLogGlobalForLineNumber = 5497;
                goto LABEL_29;
              }
            }
            else
            {
              v27 = COREADAPTERACCESS::AcquireExclusive((__int64)v71, 1LL);
              LODWORD(v7) = v27;
              if ( v27 < 0 )
              {
                WdLogSingleEntry2(7LL, v26, v27);
                WdLogGlobalForLineNumber = 5512;
LABEL_29:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71);
                return (unsigned int)v7;
              }
            }
            if ( MonitorGetMonitorOrientationsFromTarget(v26, *(_DWORD *)(v16 + 1072), (unsigned int *)&v60[3], v28) >= 0 )
            {
              v30 = v61;
              if ( *(_DWORD *)&v60[3] )
                v30 = 1;
              LOBYTE(v61) = v30;
            }
            if ( (int)DxgkQueryMonitorTypeLockHeld(v26, 0LL, (__int64)v60, 0LL, 0LL, 0LL, 0LL) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5545;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5545LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( v60[1] == v60[0] )
            {
              v67.VidPnSourceId = *(_DWORD *)(v16 + 16);
              DisplayModeList = DxgkpGetDisplayModeList(
                                  v26,
                                  (struct COREADAPTERACCESS *)v71,
                                  (struct DXGAUTOPUSHLOCK *)v68,
                                  v59,
                                  &v67,
                                  0LL,
                                  &v60[2]);
              v7 = (COREADAPTERACCESS *)DisplayModeList;
              if ( DisplayModeList < 0 )
              {
                if ( DisplayModeList == -1071775483 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 5565;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"Status != STATUS_GRAPHICS_TRY_AGAIN_NOW",
                    5565LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                WdLogSingleEntry3(7LL, v26, v67.VidPnSourceId, v7);
                WdLogGlobalForLineNumber = 5569;
LABEL_50:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71);
                goto LABEL_51;
              }
              v7 = (COREADAPTERACCESS *)(int)CombineModeList(
                                               (unsigned int)&v60[7],
                                               (unsigned int)&v62,
                                               v67.ModeCount,
                                               v67.pModeList,
                                               1);
              if ( v60[2] )
                DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v67.pModeList);
              if ( (int)v7 < 0 )
              {
                WdLogSingleEntry3(7LL, v26, v67.VidPnSourceId, v7);
                WdLogGlobalForLineNumber = 5594;
                goto LABEL_50;
              }
            }
            v32 = *(_QWORD *)(v16 + 56);
            v16 = 0LL;
            if ( v32 != v24 )
              v16 = v32 - 56;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71);
            if ( !v16 )
            {
              v13 = *(_DWORD *)&v60[7];
              v9 = v59;
              v7 = v65;
              break;
            }
          }
        }
        v12 = (int)v62;
      }
    }
    if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      LODWORD(v7) = COREADAPTERACCESS::AcquireShared(v7, 0LL);
      DXGAUTOPUSHLOCK::AcquireExclusive(v63);
    }
    else
    {
      LODWORD(v7) = COREADAPTERACCESS::AcquireExclusive((__int64)v7, 1LL);
    }
    if ( (int)v7 < 0 )
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 5620;
      goto LABEL_51;
    }
    v33 = ADAPTER_DISPLAY::GetCachedModeList(a1[395], a5);
    LODWORD(v7) = v33;
    if ( v33 >= 0 )
    {
LABEL_51:
      v12 = 0;
    }
    else
    {
      if ( v33 != -1073741275 )
      {
        WdLogSingleEntry3(7LL, a5->VidPnSourceId, a1, v33);
        WdLogGlobalForLineNumber = 5633;
        goto LABEL_51;
      }
      ModeList = ADAPTER_DISPLAY::CreateModeList(a1[395], v9, a5);
      v7 = (COREADAPTERACCESS *)ModeList;
      if ( ModeList < 0 )
      {
        v12 = 0;
        if ( v9 && ModeList == -1071775483 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5650;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"!ForceCrossAdapterClone || (Status != STATUS_GRAPHICS_TRY_AGAIN_NOW)",
            5650LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        WdLogSingleEntry2(7LL, a5->VidPnSourceId, v7);
        WdLogGlobalForLineNumber = 5653;
        goto LABEL_52;
      }
      if ( !v13 )
      {
        v12 = 0;
LABEL_77:
        v48 = v64;
        *v64 = 1;
        if ( v61 )
        {
          for ( i = 0; i < a5->ModeCount; *((_DWORD *)&a5->pModeList[v50].Flags + 1) &= ~0x80u )
            v50 = i++;
        }
        v51 = ADAPTER_DISPLAY::SetCachedModeList(a1[395], a5);
        if ( v51 >= 0 )
        {
          *v48 = 0;
        }
        else
        {
          WdLogSingleEntry3(7LL, a5->VidPnSourceId, a5, v51);
          WdLogGlobalForLineNumber = 5707;
        }
        LODWORD(v7) = 0;
        goto LABEL_52;
      }
      p_pModeList = &a5->pModeList;
      p_ModeCount = &a5->ModeCount;
      v37 = CombineModeList((int)a5 + 16, (int)a5 + 8, v13, v12, 1);
      v12 = 0;
      LODWORD(v7) = v37;
      if ( v37 >= 0 )
      {
        *(_DWORD *)&v60[7] = 0;
        if ( *p_ModeCount )
        {
          v39 = 0LL;
          v40 = 1;
          v41 = 0;
          do
          {
            v42 = *p_pModeList;
            v43 = v40;
            v44 = v39;
            v45 = v41;
            *(_DWORD *)&v60[7] = v40;
            v41 = v40;
            v46 = *((_DWORD *)&v42[v44].Flags + 1);
            v47 = v45;
            v39 = v40++;
            *((_DWORD *)&v42[v47].Flags + 1) = v46 & 0xFFFFFF7F;
          }
          while ( v43 < *p_ModeCount );
        }
        goto LABEL_77;
      }
      WdLogSingleEntry3(7LL, a1, a5->VidPnSourceId, v37);
      v38 = *p_pModeList;
      WdLogGlobalForLineNumber = 5671;
      *p_ModeCount = 0;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v38);
      *p_pModeList = 0LL;
    }
LABEL_52:
    if ( v62 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v62);
    v8 = v66;
    v9 = v59;
LABEL_85:
    if ( (_DWORD)v7 != -1071775483 )
      break;
    if ( v9 )
      return (unsigned int)v7;
    if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v63);
    v10 = v64;
    if ( *v64 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5738;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!*FreeModeList", 5738LL, 0LL, 0LL, 0LL, 0LL);
      v10 = v64;
    }
    v9 = 1;
    v59 = 1;
  }
  if ( (int)v7 >= 0 )
  {
    if ( v8 )
    {
      v52 = 4024LL * a5->VidPnSourceId;
      v53 = *((_QWORD *)a1[395] + 16);
      v54 = *(_DWORD *)(v52 + v53 + 1104);
      if ( v54 != 1 )
      {
        v55 = (const struct _D3DKMT_DISPLAYMODE *)(v53 + v52 + 644);
        *v8 = v55;
        if ( v54 == -1 )
        {
          LODWORD(v56) = 1;
          if ( v55->Width )
          {
            if ( v55->Height )
            {
              v57 = 0;
              v56 = 0LL;
              if ( a5->ModeCount )
              {
                while ( !(unsigned __int8)operator==(&a5->pModeList[v57], *v8, v56) )
                {
                  if ( ++v57 >= a5->ModeCount )
                  {
                    LODWORD(v56) = 0;
                    goto LABEL_105;
                  }
                }
                *v8 = 0LL;
                LODWORD(v56) = 1;
              }
            }
          }
LABEL_105:
          *(_DWORD *)(4024LL * a5->VidPnSourceId + *((_QWORD *)a1[395] + 16) + 1104) = v56;
        }
      }
    }
  }
  return (unsigned int)v7;
}
