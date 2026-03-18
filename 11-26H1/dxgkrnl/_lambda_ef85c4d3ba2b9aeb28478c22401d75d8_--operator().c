/*
 * XREFs of _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050
 * Callers:
 *     _lambda_41398c31cc0f700d760001d873ef57ff_::_lambda_invoker_cdecl_ @ 0x140076420 (_lambda_41398c31cc0f700d760001d873ef57ff_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140035350 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140039FEC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetMonitorOrientationFromGdiRotation@@YA_NKAEAW4_D3DKMDT_MONITOR_ORIENTATION@@@Z @ 0x140057808 (-GetMonitorOrientationFromGdiRotation@@YA_NKAEAW4_D3DKMDT_MONITOR_ORIENTATION@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402CACB0 (IsVirtualizationDisabledForTarget.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x140340C38 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x140345E94 (-MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14034688C (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 *     ?MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z @ 0x14039588C (-MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1403B0FA8 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     DxgkCheckAdapterPnPTransitionDoneInSession @ 0x1404404D4 (DxgkCheckAdapterPnPTransitionDoneInSession.c)
 */

__int64 __fastcall lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rbx
  _OWORD *v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r8d
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // r8d
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // edx
  __int64 v32; // rbx
  _QWORD *v33; // rbx
  _QWORD *v34; // r15
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r15
  int v36; // edx
  __int64 v37; // rsi
  _OWORD *v38; // rax
  __int128 *v39; // rcx
  __int64 v40; // rdx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  unsigned __int8 IsTargetForceable; // al
  __int64 v53; // rdi
  DXGMONITOR *v54; // r13
  __int64 v55; // rax
  struct _DEVICE_OBJECT *v56; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // edi
  int v61; // eax
  int v62; // edi
  unsigned int v63; // eax
  int v64; // ecx
  bool v65; // cf
  int v66; // eax
  char v68; // [rsp+30h] [rbp-D0h] BYREF
  char v69; // [rsp+31h] [rbp-CFh] BYREF
  _BYTE v70[2]; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v71; // [rsp+34h] [rbp-CCh] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v73[2]; // [rsp+40h] [rbp-C0h] BYREF
  DXGMONITOR *v74[3]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v75[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v76[1088]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v77[144]; // [rsp+4C0h] [rbp+3C0h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v75,
    (struct DXGADAPTER *)a2,
    1);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v75);
  if ( *(_DWORD *)(a2 + 200) == 1
    && (unsigned __int8)DxgkCheckAdapterPnPTransitionDoneInSession((struct DXGADAPTER *)a2)
    && *(_QWORD *)(a2 + 3160) )
  {
    v4 = ++**(_DWORD **)a1;
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(*(_QWORD *)v5 + 4LL) >= v4 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)v5 + 8LL) + 568LL * (v4 - 1);
      memset(v77, 0, 0x238uLL);
      v7 = (_OWORD *)v6;
      v8 = v77;
      v9 = 4LL;
      do
      {
        v10 = *(_OWORD *)v8;
        v11 = *((_OWORD *)v8 + 1);
        v8 += 32;
        *v7 = v10;
        v12 = *((_OWORD *)v8 - 6);
        v7[1] = v11;
        v13 = *((_OWORD *)v8 - 5);
        v7[2] = v12;
        v14 = *((_OWORD *)v8 - 4);
        v7[3] = v13;
        v15 = *((_OWORD *)v8 - 3);
        v7[4] = v14;
        v16 = *((_OWORD *)v8 - 2);
        v7[5] = v15;
        v17 = *((_OWORD *)v8 - 1);
        v7[6] = v16;
        v7 += 8;
        *(v7 - 1) = v17;
        --v9;
      }
      while ( v9 );
      v18 = *((_OWORD *)v8 + 1);
      *v7 = *(_OWORD *)v8;
      v19 = *((_OWORD *)v8 + 2);
      v20 = *((_QWORD *)v8 + 6);
      v7[1] = v18;
      v7[2] = v19;
      *((_QWORD *)v7 + 6) = v20;
      *(_QWORD *)v6 = *(_QWORD *)(a2 + 412);
      *(_QWORD *)(v6 + 8) = 0LL;
      if ( (*(_DWORD *)(a2 + 444) & 0x100) != 0 )
      {
        v73[0] = 0LL;
        if ( DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)a2, 0, (struct DXGADAPTER_REFERENCE *)v73) >= 0 )
          *(_QWORD *)(v6 + 8) = *(_QWORD *)(v73[0] + 412);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v73, 0LL);
      }
      RtlStringCbCopyNW(
        (char *)(v6 + 16),
        v9,
        *(char **)(*(_QWORD *)(a2 + 1968) + 8LL),
        **(unsigned __int16 **)(a2 + 1968));
      v21 = *(_DWORD *)(v6 + 564) & 0xFFFFFFFD | (*(_BYTE *)(*(_QWORD *)(a2 + 3160) + 289LL) != 0 ? 2 : 0);
      *(_DWORD *)(v6 + 564) = v21;
      v22 = v21 & 0xFFFFFFFE | (*(_BYTE *)(*(_QWORD *)(a2 + 3160) + 290LL) != 0);
      *(_DWORD *)(v6 + 564) = v22;
      v23 = *(_QWORD *)(a2 + 3160);
      if ( *(_BYTE *)(v23 + 289) && *(_BYTE *)(v23 + 290)
        || (v24 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v24 = 4;
      }
      v25 = v24 | v22 & 0xFFFFFFFB;
      *(_DWORD *)(v6 + 564) = v25;
      *(_DWORD *)(v6 + 536) = *(_DWORD *)(a2 + 3044);
      *(_DWORD *)(v6 + 540) = *(_DWORD *)(*(_QWORD *)(a2 + 3160) + 96LL);
      *(_DWORD *)(v6 + 544) = *(_DWORD *)(a2 + 420);
      *(_DWORD *)(v6 + 548) = *(_DWORD *)(a2 + 424);
      *(_DWORD *)(v6 + 552) = *(_DWORD *)(a2 + 428);
      *(_DWORD *)(v6 + 556) = *(_DWORD *)(a2 + 432);
      *(_DWORD *)(v6 + 560) = *(_DWORD *)(a2 + 436);
      v26 = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 444))) & 8;
      *(_DWORD *)(v6 + 564) = v26;
      v27 = v26 & 0xFFFFFFEF | (8 * (*(_DWORD *)(a2 + 444) & 2));
      *(_DWORD *)(v6 + 564) = v27;
      v28 = v27 & 0xFFFFFFDF | (4 * (*(_DWORD *)(a2 + 444) & 8));
      *(_DWORD *)(v6 + 564) = v28;
      v29 = v28 & 0xFFFFFFBF | (4 * (*(_DWORD *)(a2 + 444) & 0x10));
      *(_DWORD *)(v6 + 564) = v29;
      v30 = v29 & 0xFFFFFF7F | (4 * (*(_DWORD *)(a2 + 444) & 0x20));
      *(_DWORD *)(v6 + 564) = v30;
      v31 = *(_DWORD *)(a2 + 444) & 0x100 | v30 & 0xFFFFFEFF;
      *(_DWORD *)(v6 + 564) = v31;
      *(_DWORD *)(v6 + 564) = v31 & 0xFFFFFDFF | (*(_DWORD *)(a2 + 444) >> 9) & 0x200;
    }
    v32 = *(_QWORD *)(*(_QWORD *)(a2 + 3160) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v73, v32);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v32 + 120) + 72LL));
    v33 = *(_QWORD **)(v32 + 120);
    v34 = (_QWORD *)v33[3];
    if ( v34 != v33 + 3 )
    {
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v34 - 1);
      if ( NextTarget )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(**(_QWORD **)(a1 + 8) + 20LL) < ++**(_DWORD **)(a1 + 16) )
            goto LABEL_55;
          v36 = *((_DWORD *)NextTarget + 6);
          v68 = 0;
          v69 = 0;
          v70[0] = 0;
          IsVirtualizationDisabledForTarget(a2, v36, (unsigned int)&v68, (unsigned int)&v69, (__int64)v70);
          v37 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 24LL) + 1088LL * (unsigned int)(**(_DWORD **)(a1 + 16) - 1);
          memset(v76, 0, sizeof(v76));
          v38 = (_OWORD *)v37;
          v39 = (__int128 *)v76;
          v40 = 8LL;
          do
          {
            v41 = *v39;
            v42 = v39[1];
            v39 += 8;
            *v38 = v41;
            v43 = *(v39 - 6);
            v38[1] = v42;
            v44 = *(v39 - 5);
            v38[2] = v43;
            v45 = *(v39 - 4);
            v38[3] = v44;
            v46 = *(v39 - 3);
            v38[4] = v45;
            v47 = *(v39 - 2);
            v38[5] = v46;
            v48 = *(v39 - 1);
            v38[6] = v47;
            v38 += 8;
            *(v38 - 1) = v48;
            --v40;
          }
          while ( v40 );
          v49 = v39[1];
          *v38 = *v39;
          v50 = v39[2];
          v38[1] = v49;
          v51 = v39[3];
          v38[2] = v50;
          v38[3] = v51;
          *(_QWORD *)v37 = *(_QWORD *)(a2 + 412);
          *(_DWORD *)(v37 + 8) = *((_DWORD *)NextTarget + 6);
          *(_DWORD *)(v37 + 1052) = *((_DWORD *)NextTarget + 23);
          *(_DWORD *)(v37 + 1084) = (v70[0] == 0 ? 0x20 : 0) | (v69 == 0 ? 2 : 0) | (v68 == 0 ? 4 : 0) | *(_DWORD *)(v37 + 1084) & 0xFFFFFFD8 | (*((_QWORD *)NextTarget + 14) != 0LL);
          IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable(NextTarget);
          *(_DWORD *)(v37 + 1056) = 0;
          *(_DWORD *)(v37 + 1084) = *(_DWORD *)(v37 + 1084) & 0xFFFFFFAF | (IsTargetForceable != 0 ? 0x10 : 0);
          *(_DWORD *)(v37 + 1060) = *((_DWORD *)NextTarget + 31);
          *(_DWORD *)(v37 + 1064) = *((_DWORD *)NextTarget + 32);
          *(_DWORD *)(v37 + 1068) = *((_DWORD *)NextTarget + 33);
          *(_DWORD *)(v37 + 1072) = *((_DWORD *)NextTarget + 25);
          *(_DWORD *)(v37 + 1076) = 1;
          *(_DWORD *)(v37 + 1080) = 1;
          v53 = *((_QWORD *)NextTarget + 14);
          if ( !v53 )
            goto LABEL_55;
          memset(v77, 0, 0x1A4uLL);
          MONITOR_MGR::AcquireMonitorShared(v74, v53);
          v54 = v74[0];
          if ( !v74[0] )
            break;
          memset(&v77[41], 0, 0x100uLL);
          v55 = *((_QWORD *)v74[0] + 25);
          v56 = *(struct _DEVICE_OBJECT **)(v55 + 8);
          if ( v56 && *(_QWORD *)(v55 + 56) )
          {
            SymbolicLinkList = 0LL;
            DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v56, 0, &SymbolicLinkList);
            if ( DeviceInterfaces < 0 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v59, v58) + 24) = DeviceInterfaces;
              WdLogGlobalForLineNumber = 4210;
              goto LABEL_24;
            }
            v60 = RtlStringCchCopyW((char *)&v77[41], 128LL, (char *)SymbolicLinkList);
            ExFreePoolWithTag(SymbolicLinkList, 0);
            if ( v60 < 0 )
              goto LABEL_24;
            HIWORD(v77[41]) = 92;
          }
          v61 = DXGMONITOR::_FillMonitorDeviceInfo(v54, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v77);
          v62 = 0;
          if ( v61 != -1071841279 )
            v62 = v61;
          if ( v62 >= 0 && (v77[5] & 1) == 0 && !LOWORD(v77[9]) )
            v77[5] |= 2u;
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v74);
          if ( v62 >= 0 )
            RtlStringCchCopyW((char *)(v37 + 532), 260LL, (char *)&v77[41]);
LABEL_39:
          MonitorGetCCDMonitorID(*((struct HDXGMONITOR__ **)NextTarget + 14), 0x104u, (unsigned __int16 *)(v37 + 12));
          v63 = *(_DWORD *)(v37 + 1084) & 0xFFFFFFF7;
          v64 = (*((_DWORD *)NextTarget + 139) >> 3) & 8;
          v71 = 0;
          *(_DWORD *)(v37 + 1084) = v63 | v64;
          if ( (int)MonitorGetMonitorType(
                      *((struct HDXGMONITOR__ **)NextTarget + 14),
                      (enum _DMM_VIDPN_MONITOR_TYPE *)&v71) < 0 )
            goto LABEL_50;
          if ( v71 != 1 )
          {
            switch ( v71 )
            {
              case 2u:
                *(_DWORD *)(v37 + 1056) = 2;
                goto LABEL_50;
              case 3u:
                *(_DWORD *)(v37 + 1056) = 3;
                goto LABEL_50;
              case 4u:
                *(_DWORD *)(v37 + 1056) = 4;
                goto LABEL_50;
              case 5u:
                *(_DWORD *)(v37 + 1056) = 5;
                goto LABEL_50;
            }
          }
          *(_DWORD *)(v37 + 1056) = 1;
LABEL_50:
          v65 = *((_BYTE *)NextTarget + 405) != 0;
          v71 = 0;
          v66 = *(_DWORD *)(v37 + 1084);
          LODWORD(SymbolicLinkList) = 0;
          *(_DWORD *)(v37 + 1084) = v66 & 0xFFFFFFBF | (v65 ? 0x40 : 0);
          if ( MonitorGetMonitorOrientationsFromMonitor(
                 *((struct HDXGMONITOR__ **)NextTarget + 14),
                 &v71,
                 (unsigned int *)&SymbolicLinkList) < 0 )
          {
            *(_DWORD *)(v37 + 1076) = 1;
LABEL_54:
            *(_DWORD *)(v37 + 1080) = (*(_DWORD *)(v37 + 1084) & 0x40) != 0 ? 4 : 1;
            goto LABEL_55;
          }
          GetMonitorOrientationFromGdiRotation(v71, (enum _D3DKMDT_MONITOR_ORIENTATION *)(v37 + 1076));
          if ( !GetMonitorOrientationFromGdiRotation(
                  (int)SymbolicLinkList,
                  (enum _D3DKMDT_MONITOR_ORIENTATION *)(v37 + 1080)) )
            goto LABEL_54;
LABEL_55:
          NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v33, NextTarget);
          if ( !NextTarget )
            goto LABEL_56;
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4191;
LABEL_24:
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v74);
        goto LABEL_39;
      }
    }
LABEL_56:
    if ( v33 )
      ReferenceCounted::Release((ReferenceCounted *)(v33 + 8));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v73[0] + 40));
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v75);
  return 0LL;
}
