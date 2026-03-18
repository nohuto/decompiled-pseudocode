/*
 * XREFs of ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x140345F38
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x140346D98 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000720C (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x14005EE30 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14034688C (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x140346C50 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const struct _UNICODE_STRING *a2,
        int a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        bool *a7,
        unsigned __int8 *a8,
        unsigned __int8 *a9)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v10; // r9
  unsigned __int8 *v13; // r8
  unsigned __int8 *v14; // r10
  __int64 Length; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  _QWORD *v20; // rcx
  __int64 v21; // rdi
  int CCDMonitorID; // eax
  unsigned int v23; // esi
  SIZE_T v24; // rdi
  bool v25; // r12
  unsigned int *v26; // rdi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v27; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v28; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v29; // eax
  bool v30; // r13
  unsigned int v31; // r8d
  DXGMONITOR *v32; // rdi
  int v33; // edi
  unsigned __int8 v34; // al
  __int64 result; // rax
  char v36; // cl
  char v37; // al
  unsigned int *v38; // r12
  __int64 v39; // [rsp+28h] [rbp-81h]
  __int64 v40; // [rsp+50h] [rbp-59h]
  DXGMONITOR *v41[3]; // [rsp+58h] [rbp-51h] BYREF
  void **v42; // [rsp+70h] [rbp-39h] BYREF
  __int128 v43; // [rsp+78h] [rbp-31h]
  void **v44; // [rsp+88h] [rbp-21h]
  void *Source2; // [rsp+90h] [rbp-19h]
  __int64 v46; // [rsp+98h] [rbp-11h]
  __int64 v47; // [rsp+A0h] [rbp-9h]
  __int64 v48; // [rsp+F8h] [rbp+4Fh] BYREF
  int v49; // [rsp+100h] [rbp+57h]
  unsigned int *v50; // [rsp+108h] [rbp+5Fh]

  v50 = a4;
  v49 = a3;
  v10 = a5;
  if ( !a2 || !a4 || !a5 || !a6 || !a7 || (v13 = a8) == 0LL || (v14 = a9) == 0LL )
  {
    WdLogSingleEntry4(2LL, a2, a4, a5, a6);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 7448;
    return result;
  }
  *a7 = 0;
  *v13 = 0;
  *v14 = 0;
  *a4 = -1;
  v43 = 0LL;
  Source2 = 0LL;
  v46 = 0LL;
  *v10 = D3DKMDT_VOT_UNINITIALIZED;
  v47 = 256LL;
  *a6 = D3DKMDT_VOT_UNINITIALIZED;
  Length = a2->Length;
  v42 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v44 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  DMM::AutoBuffer<unsigned short>::Initialize(&v42, Length + 2);
  if ( !Source2 )
  {
    WdLogSingleEntry2(2LL, ((unsigned __int64)a2->Length >> 1) + 2, this);
    WdLogGlobalForLineNumber = 7468;
    v23 = -1073741801;
    goto LABEL_37;
  }
  if ( !this )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7482;
    goto LABEL_31;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7488;
  }
  v16 = *((_QWORD *)this + 395);
  if ( !v16 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7493;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_31:
    v23 = -1071775742;
LABEL_37:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v42);
    return v23;
  }
  v17 = *(_QWORD *)(v16 + 104);
  if ( !v17 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7507;
    v23 = -1071774923;
    goto LABEL_37;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v48, *(_QWORD *)(v16 + 104));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 120) + 72LL));
  v18 = *(_QWORD **)(v17 + 120);
  NextTarget = 0LL;
  v49 = 0;
  v20 = (_QWORD *)v18[3];
  if ( v20 != v18 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v20 - 1);
  while ( NextTarget )
  {
    if ( !*((_DWORD *)NextTarget + 23) )
    {
      v21 = *((_QWORD *)NextTarget + 14);
      if ( v21 )
      {
        CCDMonitorID = MonitorGetCCDMonitorID(
                         *((struct HDXGMONITOR__ **)NextTarget + 14),
                         (unsigned int)v46 >> 1,
                         (unsigned __int16 *)Source2);
        v23 = CCDMonitorID;
        if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
        {
          if ( CCDMonitorID < 0 )
          {
            WdLogSingleEntry2(3LL, v21, CCDMonitorID);
            WdLogGlobalForLineNumber = 7558;
            goto LABEL_34;
          }
          v24 = a2->Length;
          v23 = 0;
          if ( RtlCompareMemory(a2->Buffer, Source2, v24) == v24 )
          {
            if ( !v49 )
            {
              v25 = 1;
              v26 = v50;
              v27 = a5;
              v28 = a6;
              *v50 = *((_DWORD *)NextTarget + 6);
              *v27 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20);
              v29 = *((_DWORD *)NextTarget + 21);
              v30 = 1;
              *v28 = v29;
              v31 = *v26;
              if ( *v26 != -1 )
              {
                v40 = *((_QWORD *)this + 395);
                if ( v40 )
                {
                  LOBYTE(v49) = 0;
                  MONITOR_MGR::AcquireMonitorShared(v41, (__int64)this, v31, 1u);
                  v32 = v41[0];
                  if ( v41[0] )
                  {
                    if ( *((_DWORD *)v41[0] + 70) != 1 )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 5280;
                    }
                    LOBYTE(v49) = DXGMONITOR::_IsVirtualModeSupportDisabled(v32);
                    v33 = 0;
                  }
                  else
                  {
                    v33 = -1073741632;
                  }
                  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v41);
                  if ( v33 != -1073741632 )
                    v23 = v33;
                  v36 = 0;
                  if ( v33 != -1073741632 )
                    v36 = v49;
                  v34 = 0;
                  if ( !v36 )
                  {
                    v37 = *(_BYTE *)(v40 + 289);
                    v25 = v37 == 0;
                    v30 = *(_BYTE *)(v40 + 290) == 0;
                    if ( v37 )
                    {
                      if ( (*(_DWORD *)(v40 + 24) & 0x20) != 0 )
                        v34 = 1;
                    }
                  }
                  *a7 = !v25;
                  *a8 = !v30;
                  *a9 = v34;
                  goto LABEL_34;
                }
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
              }
              v23 = -1073741811;
              v38 = v50;
              WdLogSingleEntry3(2LL, this, *v50, -1073741811LL);
              v39 = *v38;
              WdLogGlobalForLineNumber = 7595;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"IsVirtualizationDisabledForTarget failed on VidPn Target 0x%I64x adapter 0x%I64x, returning 0x%I64x.",
                (__int64)this,
                v39,
                -1073741811LL,
                0LL,
                0LL);
LABEL_34:
              if ( v18 )
                ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v48 + 40));
              goto LABEL_37;
            }
            --v49;
          }
        }
      }
    }
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v18, NextTarget);
  }
  if ( v18 )
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v48 + 40));
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v42);
  return 3221226021LL;
}
