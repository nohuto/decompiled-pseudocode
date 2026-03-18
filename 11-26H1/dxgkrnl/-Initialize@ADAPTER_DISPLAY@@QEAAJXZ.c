/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x14038FCD0
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1404121A4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpiSetSchedulerCallbackState @ 0x1400858E0 (DpiSetSchedulerCallbackState.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x14018E508 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?MonitorCreateMonitorManager@@YAJPEAVADAPTER_DISPLAY@@PEAX@Z @ 0x140191D64 (-MonitorCreateMonitorManager@@YAJPEAVADAPTER_DISPLAY@@PEAX@Z.c)
 *     ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x1401A0B94 (--0DISPLAY_SOURCE@@QEAA@XZ.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1401A37D4 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1401DC6FC (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1401DD504 (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x140283214 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x140390A78 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x140390CA4 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 */

int __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this)
{
  int *v1; // rdi
  __int64 v3; // rcx
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rbx
  bool v7; // cf
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  DISPLAY_SOURCE *i; // r14
  unsigned int j; // ebx
  int result; // eax
  unsigned int *v14; // r14
  int RegistryValues; // ebx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  bool v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  bool v31; // sf
  bool v32; // of
  __int64 v33; // rcx
  int v34; // r12d
  int v35; // r14d
  struct DXGGLOBAL *v36; // rax
  struct _KEVENT *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // ecx
  struct _LUID v44; // rcx
  __int64 v45; // rax
  DXGGLOBAL *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  bool v49; // zf
  __int64 v50; // rcx
  _DWORD *v51; // rcx
  __int64 v52; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v55; // rcx
  int (__fastcall *v56)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *); // rax
  __int64 v57; // rdx
  __int64 k; // rcx
  int v59; // eax
  __int64 v60; // rcx
  unsigned int m; // r10d
  __int64 v62; // rcx
  __int64 v63; // [rsp+28h] [rbp-E0h]
  __int64 v64; // [rsp+28h] [rbp-E0h]
  __int64 v65; // [rsp+28h] [rbp-E0h]
  __int64 v66; // [rsp+28h] [rbp-E0h]
  __int64 v67; // [rsp+28h] [rbp-E0h]
  __int64 v68; // [rsp+28h] [rbp-E0h]
  __int64 v69; // [rsp+30h] [rbp-D8h]
  __int64 v70; // [rsp+30h] [rbp-D8h]
  __int64 v71; // [rsp+30h] [rbp-D8h]
  __int64 v72; // [rsp+30h] [rbp-D8h]
  __int64 v73; // [rsp+38h] [rbp-D0h]
  __int64 v74; // [rsp+38h] [rbp-D0h]
  void *EventHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+60h] [rbp-A8h] BYREF
  struct _LUID v77; // [rsp+68h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v78; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v79[50]; // [rsp+A8h] [rbp-60h] BYREF

  v1 = (int *)((char *)this + 24);
  *((_DWORD *)this + 6) = 0;
  v3 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v3 + 2320) >= 0x5010u && !*(_BYTE *)(v3 + 209) && (*(_DWORD *)(v3 + 3016) & 8) == 0 )
  {
    *(_QWORD *)&v78.Type = 16LL;
    *(_QWORD *)&v78.InputDataSize = 0LL;
    *(_QWORD *)&v78.Flags.0 = 0LL;
    HIDWORD(v78.hKmdProcessHandle) = 0;
    v78.pInputData = 0LL;
    v78.pOutputData = v1;
    v78.OutputDataSize = 4;
    v38 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v3, &v78);
    if ( v38 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v40, v39) + 24) = v38;
      *v1 = 0;
      v41 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 4739;
      if ( *(int *)(v41 + 2776) >= 8704 )
        *v1 = 2;
    }
    v42 = *((_QWORD *)this + 2);
    v43 = *v1;
    if ( *(int *)(v42 + 2776) >= 9472 )
    {
      if ( (v43 & 0xC) == 0xC )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4768;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter 0x%I64x: Both HdrFP16ScanoutSupport and HdrARGB10ScanoutSupport can't be set to 1 at the same time",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741811;
      }
    }
    else
    {
      v43 &= 0xFFFFFFF3;
      *v1 = v43;
    }
    if ( *(int *)(v42 + 2776) < 9984 )
    {
      v43 &= ~0x10u;
      *v1 = v43;
    }
    if ( *(int *)(v42 + 2776) < 10496 || *(_QWORD *)(v42 + 832) || !*(_DWORD *)(v42 + 1896) || (v43 & 2) == 0 )
    {
      v43 &= ~0x20u;
      *v1 = v43;
    }
    if ( *(int *)(v42 + 2776) < 12288 )
    {
      v43 &= ~0x40u;
      *v1 = v43;
    }
    if ( g_bDbgForceUsb4MonitorSupport )
      *v1 = v43 | 0x40;
  }
  v4 = *(_DWORD *)(*((_QWORD *)this + 2) + 1896LL);
  v5 = 4024LL * v4;
  *((_DWORD *)this + 24) = v4;
  v6 = v4;
  if ( !is_mul_ok(v4, 0xFB8uLL) )
    v5 = -1LL;
  v7 = __CFADD__(v5, 8LL);
  v8 = v5 + 8;
  if ( v7 )
    v8 = -1LL;
  v9 = (_QWORD *)operator new[](v8, 0x4B677844u, 64LL);
  if ( v9 )
  {
    *v9 = v6;
    v10 = v9 + 1;
    for ( i = (DISPLAY_SOURCE *)(v9 + 1); v6; --v6 )
    {
      DISPLAY_SOURCE::DISPLAY_SOURCE(i);
      i = (DISPLAY_SOURCE *)((char *)i + 4024);
    }
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 16) = v10;
  if ( !v10 )
  {
    WdLogSingleEntry3(6LL, *((unsigned int *)this + 24), *((_QWORD *)this + 2), -1073741801LL);
    v70 = *((_QWORD *)this + 2);
    v65 = *((unsigned int *)this + 24);
    WdLogGlobalForLineNumber = 4824;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate 0x%I64x of display sources for adapter 0x%I64x, returning 0x%I64x",
      v65,
      v70,
      -1073741801LL,
      0LL,
      0LL);
    return -1073741801;
  }
  for ( j = 0; j < *((_DWORD *)this + 24); ++j )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4024LL * j), this, j);
    if ( result < 0 )
      return result;
  }
  result = MonitorCreateMonitorManager(this, (MONITOR_MGR **)this + 14);
  if ( result >= 0 )
  {
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 13);
    if ( result > -1071774937 && (unsigned int)(result + 1071774934) > 0x3FE1FCD5 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 444LL) & 0x100) == 0 )
      {
        result = CreateOutputDuplManager(*((_DWORD *)this + 24), this, 0LL, 0LL, (struct OUTPUTDUPL_MGR **)this + 15);
        if ( result < 0 )
          return result;
LABEL_19:
        LODWORD(v76) = 1;
        *((_QWORD *)this + 77) = (char *)this + 608;
        *((_QWORD *)this + 76) = (char *)this + 608;
        v14 = (unsigned int *)((char *)this + 536);
        *((_DWORD *)this + 132) = 0;
        *((_DWORD *)this + 133) = 200;
        *((_DWORD *)this + 134) = 1000;
        *((_DWORD *)this + 135) = 20000000;
        *((_DWORD *)this + 136) = 0;
        memset(v79, 0, 0x188uLL);
        v79[5] = 0LL;
        LODWORD(v79[4]) = 0x4000000;
        LODWORD(v79[1]) = 288;
        v79[2] = L"ModeListCaching";
        LODWORD(v79[8]) = 288;
        v79[3] = &v76;
        LODWORD(v79[11]) = 0x4000000;
        v79[9] = L"SetTimingsFlags";
        v79[16] = L"ShortLinkTrainingTimeout";
        v79[23] = L"LongLinkTrainingTimeout";
        v79[30] = L"HPDFilterLimit";
        LODWORD(v79[15]) = 288;
        LODWORD(v79[18]) = 0x4000000;
        LODWORD(v79[22]) = 288;
        LODWORD(v79[25]) = 0x4000000;
        LODWORD(v79[29]) = 288;
        LODWORD(v79[32]) = 0x4000000;
        LODWORD(v79[36]) = 288;
        LODWORD(v79[39]) = 0x4000000;
        v79[37] = L"EnableVirtualRefreshRateOnExternalMonitor";
        LODWORD(v79[6]) = 0;
        v79[7] = 0LL;
        v79[10] = (char *)this + 528;
        v79[12] = 0LL;
        LODWORD(v79[13]) = 0;
        v79[14] = 0LL;
        v79[17] = (char *)this + 532;
        v79[19] = 0LL;
        LODWORD(v79[20]) = 0;
        v79[21] = 0LL;
        v79[24] = (char *)this + 536;
        v79[26] = 0LL;
        LODWORD(v79[27]) = 0;
        v79[28] = 0LL;
        v79[31] = (char *)this + 540;
        v79[33] = 0LL;
        LODWORD(v79[34]) = 0;
        v79[35] = 0LL;
        v79[38] = (char *)this + 544;
        v79[40] = 0LL;
        LODWORD(v79[41]) = 0;
        RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v79, 0LL, 0LL);
        if ( RegistryValues < 0 )
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 4973;
          if ( RegistryValues != -1073741772 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4976;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Status == STATUS_OBJECT_NAME_NOT_FOUND",
              4976LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v16 = 1;
          *((_DWORD *)this + 132) = 0;
          LODWORD(v76) = 1;
          RegistryValues = 0;
          *((_DWORD *)this + 133) = 200;
          *v14 = 1000;
        }
        else
        {
          v16 = v76;
        }
        *((_BYTE *)this + 292) = v16 == 1;
        v17 = *v14;
        if ( !*v14 || *((_DWORD *)this + 133) >= v17 || v17 >= 0x7530 )
        {
          WdLogSingleEntry3(2LL, *((unsigned int *)this + 133), *((unsigned int *)this + 133), *((_QWORD *)this + 2));
          v73 = *((_QWORD *)this + 2);
          v63 = *((unsigned int *)this + 133);
          WdLogGlobalForLineNumber = 5001;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid link training timeout registry value (0x%I64x, 0x%I64x) on adapter 0x%I64x, fallback to the default value.",
            v63,
            v63,
            v73,
            0LL,
            0LL);
          *((_DWORD *)this + 133) = 200;
          *((_DWORD *)this + 134) = 1000;
        }
        v18 = *((_DWORD *)this + 135);
        if ( v18 < 0xF4240 || v18 > 0x5F5E100 )
        {
          if ( v18 )
          {
            WdLogSingleEntry3(2LL, *((unsigned int *)this + 135), 20000000LL, *((_QWORD *)this + 2));
            v74 = *((_QWORD *)this + 2);
            v66 = *((unsigned int *)this + 135);
            WdLogGlobalForLineNumber = 5016;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid hot-plug filter limit of %#x on adapter 0x%I64x.  Using default of %#x.",
              v66,
              20000000LL,
              v74,
              0LL,
              0LL);
          }
          *((_DWORD *)this + 135) = 20000000;
        }
        if ( (*((_DWORD *)this + 132) & 1) != 0 )
        {
          v47 = *((_QWORD *)this + 2);
          if ( !*(_QWORD *)(v47 + 656) )
          {
            RegistryValues = -1073741735;
            WdLogSingleEntry3(2LL, *(int *)(v47 + 416), *(unsigned int *)(v47 + 412), -1073741735LL);
            v48 = *((_QWORD *)this + 2);
            v71 = *(unsigned int *)(v48 + 412);
            v67 = *(int *)(v48 + 416);
            WdLogGlobalForLineNumber = 5033;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Miniport driver wants t fallback to use DdiCommitVidPn but it does not supply pfnCommitVidPn on a"
                        "dapter (0x%I64x%08I64x), returning 0x%I64x.",
              v67,
              v71,
              -1073741735LL,
              0LL,
              0LL);
            return RegistryValues;
          }
        }
        v19 = *((_QWORD *)this + 2);
        v20 = *(_DWORD *)(v19 + 420);
        if ( (*(_DWORD *)(v19 + 444) & 0x400) != 0 )
        {
          if ( v20 == 1297040209
            && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 216) + 64LL) + 40LL) + 28LL) < 0x700Au )
          {
            *((_BYTE *)this + 289) = 1;
            v25 = 1;
          }
          else
          {
            LODWORD(EventHandle) = (*((_DWORD *)this + 6) >> 1) & 1;
            memset(v79, 0, 0x188uLL);
            LODWORD(v79[1]) = 288;
            v79[2] = L"ForceEnableDWMClone";
            LODWORD(v79[4]) = 67108868;
            v79[3] = &EventHandle;
            LODWORD(v79[6]) = 4;
            v79[5] = &EventHandle;
            RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v79, 0LL, 0LL);
            v49 = (_DWORD)EventHandle == 0;
            *((_BYTE *)this + 289) = (_DWORD)EventHandle != 0;
            v25 = !v49;
          }
          v26 = 290LL;
          v27 = (__int64)this;
        }
        else
        {
          if ( v20 == 1297040209 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5090;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"GetAdapter()->GetAdapterVendorId() != VENDOR_ID_QUALCOMM",
              5090LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v21 = *((_QWORD *)this + 2);
          v22 = *(unsigned int *)(v21 + 412);
          v23 = *(int *)(v21 + 416);
          if ( (*((_DWORD *)this + 6) & 2) != 0 )
          {
            RegistryValues = -1073741735;
            WdLogSingleEntry3(2LL, v23, v22, -1073741735LL);
            v24 = *((_QWORD *)this + 2);
            v69 = *(unsigned int *)(v24 + 412);
            v64 = *(int *)(v24 + 416);
            WdLogGlobalForLineNumber = 5102;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Force to stop DWM clone supported adapter (0x%I64x%08I64x) due to target ID does not support DWM "
                        "clone, returning 0x%I64x.",
              v64,
              v69,
              -1073741735LL,
              0LL,
              0LL);
            return RegistryValues;
          }
          WdLogSingleEntry2(4LL, v23, v22);
          v25 = 0;
          WdLogGlobalForLineNumber = 5110;
          v26 = (__int64)this;
          *((_BYTE *)this + 289) = 0;
          v27 = 290LL;
        }
        *(_BYTE *)(v27 + v26) = v25;
        v28 = *((_QWORD *)this + 2);
        if ( *(int *)(v28 + 3044) < 2000 )
        {
          v50 = *(_QWORD *)(v28 + 216);
          LODWORD(EventHandle) = 0;
          if ( (int)DpiReadPnpRegistryValue(v50, L"EnableVirtualTopologySupport", &EventHandle, 4LL, 2) >= 0 )
          {
            if ( (_DWORD)EventHandle )
            {
              v51 = (_DWORD *)*((_QWORD *)this + 2);
              if ( (v51[111] & 0x800) == 0 )
              {
                RegistryValues = -1073741735;
                WdLogSingleEntry3(2LL, (int)v51[104], (unsigned int)v51[103], -1073741735LL);
                v52 = *((_QWORD *)this + 2);
                v72 = *(unsigned int *)(v52 + 412);
                v68 = *(int *)(v52 + 416);
                WdLogGlobalForLineNumber = 5136;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Force to stop adapter (0x%I64x%08I64x) due to target ID does not support reduced hash size an"
                            "d registry requested to use virtual topologies, returning 0x%I64x.",
                  v68,
                  v72,
                  -1073741735LL,
                  0LL,
                  0LL);
                return RegistryValues;
              }
              *((_BYTE *)this + 290) = 1;
              Global = DXGGLOBAL::GetGlobal();
              DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)Global + 1400));
            }
          }
        }
        v29 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v29 + 3168) )
        {
          DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v29 + 696) != 0LL);
          v55 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 58) = DodPresent;
          if ( !DodPresent )
            RegistryValues = -1073741801;
          memset(&v78, 0, 24);
          v56 = *(int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))(v55 + 2408);
          if ( v56 && v56(*(_QWORD *)(v55 + 2336), &v78) >= 0 )
          {
            v57 = 0LL;
            for ( k = 440LL; k < 456; k += 4LL )
            {
              v59 = *((unsigned __int8 *)&v78.Type + v57++);
              *(_DWORD *)((char *)this + k) = v59;
            }
            *((_DWORD *)this + 115) = *((unsigned __int8 *)&v78.InputDataSize + 4);
            *((_DWORD *)this + 114) = *((unsigned __int8 *)&v78.InputDataSize + 5);
          }
          else
          {
            *((_DWORD *)this + 110) = 1;
          }
          v60 = *(_QWORD *)(*((_QWORD *)this + 2) + 216LL);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v60 + 64) + 40LL) + 28LL) >= 0x3007u )
            DpiSetSchedulerCallbackState(v60, 3);
        }
        if ( *((_QWORD *)this + 58) )
        {
          for ( m = 0;
                m < *((_DWORD *)this + 24);
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8LL) + 3040 * v62 + 400) = *(_QWORD *)(4024 * v62 + *((_QWORD *)this + 16) + 912) )
          {
            v62 = m++;
          }
        }
        v30 = *((_QWORD *)this + 2);
        v32 = __OFSUB__(*(_DWORD *)(v30 + 2776), 8704);
        v31 = *(_DWORD *)(v30 + 2776) - 8704 < 0;
        v33 = *(_QWORD *)(v30 + 216);
        v34 = v31 ^ v32;
        LODWORD(EventHandle) = v34;
        if ( (int)DpiReadPnpRegistryValue(v33, L"NeedToSuspendVidSchBeforeSetGammaRamp", &EventHandle, 4LL, 2) >= 0 )
        {
          v35 = (int)EventHandle;
          if ( (_DWORD)EventHandle != v34 )
          {
            WdLogSingleEntry2(3LL, (unsigned int)EventHandle, *((_QWORD *)this + 2));
            WdLogGlobalForLineNumber = 5235;
          }
        }
        else
        {
          v35 = v34;
        }
        *((_BYTE *)this + 291) = v35 != 0;
        v36 = DXGGLOBAL::GetGlobal();
        if ( (int)DXGADAPTERSOURCEHASH::AddNewAdapterEntry(
                    (struct DXGGLOBAL *)((char *)v36 + 1400),
                    (const struct _LUID *)(*((_QWORD *)this + 2) + 412LL),
                    *((unsigned __int8 *)this + 290)) < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5248;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(TmpStatus)", 5248LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( RegistryValues >= 0 )
        {
          EventHandle = 0LL;
          v37 = IoCreateNotificationEvent(0LL, &EventHandle);
          *((_QWORD *)this + 84) = v37;
          if ( v37 )
          {
            KeClearEvent(v37);
            ObfReferenceObject(*((PVOID *)this + 84));
            ZwClose(EventHandle);
          }
          else
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 5259;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to create adapter VidPnSourceUsedBySession event object.",
              5259LL,
              0LL,
              0LL,
              0LL,
              0LL);
            return -1073741801;
          }
        }
        return RegistryValues;
      }
      v44 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal() + 128);
      v45 = *((_QWORD *)this + 2);
      v77 = v44;
      EventHandle = *(void **)(v45 + 412);
      result = CreateOutputDuplManager(
                 *((_DWORD *)this + 24),
                 0LL,
                 &v77,
                 (struct _LUID *)&EventHandle,
                 (struct OUTPUTDUPL_MGR **)this + 15);
      if ( result >= 0 )
      {
        v46 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::AddIndirectOutputDuplMgr(
          v46,
          (struct OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 15) - 24LL) & -(__int64)(*((_QWORD *)this + 15) != 0LL)));
        goto LABEL_19;
      }
    }
  }
  return result;
}
