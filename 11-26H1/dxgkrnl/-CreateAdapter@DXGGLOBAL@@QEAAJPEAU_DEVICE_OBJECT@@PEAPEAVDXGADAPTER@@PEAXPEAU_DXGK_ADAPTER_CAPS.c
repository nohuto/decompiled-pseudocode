/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78
 * Callers:
 *     DxgkAddAdapter @ 0x14042E97C (DxgkAddAdapter.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x14006F9B0 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x14007BCB8 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BD9C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C390 (-ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1401968BC (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A7344 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401B4454 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1401DC770 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401DFF84 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkSetStartPnPTransitionSessionized @ 0x1402052DC (DxgkSetStartPnPTransitionSessionized.c)
 *     DxgkStartPnPTransition @ 0x14020531C (DxgkStartPnPTransition.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x14020E548 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 *     DpiEnableSharedGraphicsPowerInterface @ 0x140238824 (DpiEnableSharedGraphicsPowerInterface.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140358D30 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?MakeAdapterActive@DXGADAPTER@@QEAAXXZ @ 0x1403B5428 (-MakeAdapterActive@DXGADAPTER@@QEAAXXZ.c)
 *     DpiReportAdapter @ 0x1403BC628 (DpiReportAdapter.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1403BC8E4 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x14041D59C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     DxgkDetermineAffectedSession @ 0x140424320 (DxgkDetermineAffectedSession.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        PDEVICE_OBJECT DeviceObject,
        struct DXGADAPTER **a3,
        char *a4,
        struct _DXGK_ADAPTER_CAPS *a5,
        struct _GUID *a6)
{
  struct DXGADAPTER **v6; // r12
  char *v10; // rax
  DXGADAPTER *v11; // rax
  __int64 v12; // rbx
  int v13; // esi
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rax
  int v17; // r11d
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rcx
  struct _LUID *v21; // rdx
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // rcx
  char IsAdapterSessionized; // r14
  unsigned __int64 v25; // rax
  __int64 v26; // r10
  __int64 result; // rax
  _DWORD *v28; // rdx
  __int64 *v29; // rax
  DXGGLOBAL **v30; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v32; // rax
  int v33; // [rsp+C8h] [rbp-C0h]
  int v34; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v35[4]; // [rsp+108h] [rbp-80h] BYREF
  int v36; // [rsp+10Ch] [rbp-7Ch]
  unsigned __int64 v37; // [rsp+110h] [rbp-78h] BYREF
  unsigned int v38[2]; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v39[24]; // [rsp+120h] [rbp-68h] BYREF

  v6 = a3;
  v10 = (char *)operator new(0x1440uLL, 0x4B677844u, 64LL);
  if ( v10 )
  {
    v11 = DXGADAPTER::DXGADAPTER(v10, this);
    v12 = (__int64)v11;
    if ( v11 )
    {
      v13 = DXGADAPTER::Initialize(v11, DeviceObject, a5);
      if ( v13 >= 0 )
      {
        if ( bTracingEnabled )
        {
          v14 = *(_QWORD *)(v12 + 4820);
          v15 = *(_QWORD *)(v12 + 288);
          v36 = *DXGADAPTER::GetAdapterType((DXGADAPTER *)v12, (int *)v38);
          LODWORD(v37) = *(_DWORD *)(v12 + 3408);
          v16 = *(_QWORD *)(v12 + 3160);
          if ( v16 )
            v17 = *(_DWORD *)(v16 + 96);
          else
            LOBYTE(v17) = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
          {
            v18 = *(_DWORD *)(v12 + 2492);
            v19 = v18 >> 17;
            LOBYTE(v19) = v19 & 7;
            v20 = v18 >> 10;
            LOBYTE(v20) = v20 & 0xF;
            McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
              v20,
              &EventCreateAdapter,
              v19,
              (__int64)DeviceObject,
              v12,
              v17,
              *(_QWORD *)(v12 + 2440),
              *(_DWORD *)(v12 + 2448),
              *(_QWORD *)(v12 + 2456),
              *(_DWORD *)(v12 + 2464),
              *(_DWORD *)(v12 + 2468),
              *(_DWORD *)(v12 + 2476),
              *(_DWORD *)(v12 + 2480),
              *(_DWORD *)(v12 + 2484),
              *(_DWORD *)(v12 + 2496),
              *(_DWORD *)(v12 + 2472),
              *(_DWORD *)(v12 + 2488),
              v18,
              v20,
              (v18 >> 14) & 7,
              v19,
              (v18 & 0x80000000) != 0,
              *(_DWORD *)(v12 + 2500),
              *(_DWORD *)(v12 + 2504),
              v33,
              *(_DWORD *)(v12 + 2512),
              *(_DWORD *)(v12 + 2516),
              v34,
              v37,
              v36,
              v15,
              v14);
          }
          v6 = a3;
        }
        DpiReportAdapter((__int64)DeviceObject, v12);
        if ( *(_QWORD *)(v12 + 3168) )
        {
          DXGADAPTER::ReportNodeMetadata((DXGADAPTER *)v12);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 305920, 0LL);
          *((_QWORD *)this + 38241) = KeGetCurrentThread();
          if ( *((_DWORD *)this + 76487) )
            DXGADAPTER::MakeAdapterActive((DXGADAPTER *)v12);
          *((_QWORD *)this + 38241) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 305920, 0LL);
          KeLeaveCriticalRegion();
        }
        v13 = 0;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 216) + 64LL) + 4032LL) = v12;
        v22 = *(ADAPTER_RENDER **)(v12 + 3168);
        if ( v22 && (v13 = ADAPTER_RENDER::FinalizeInitialization(v22), v13 < 0) )
        {
          WdLogSingleEntry1(3LL);
          v23 = *(_QWORD *)(v12 + 216);
          WdLogGlobalForLineNumber = 2727;
          *(_QWORD *)(*(_QWORD *)(v23 + 64) + 4032LL) = 0LL;
        }
        else
        {
          *(_BYTE *)(v12 + 213) = 1;
          v37 = 0LL;
          IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v12, v21, v38, &v37);
          v25 = DxgkDetermineAffectedSession(
                  IsAdapterSessionized,
                  *(_QWORD *)(v12 + 3168) != 0LL,
                  *(_QWORD *)(v12 + 3160) != 0LL,
                  0,
                  v37);
          *(_QWORD *)v38 = v26;
          if ( DxgkStartPnPTransition(a6, a4, v25, (unsigned __int64 *)v38) )
          {
            *(_QWORD *)(v12 + 248) = *(_QWORD *)v38;
            *(_BYTE *)(v12 + 4856) = 1;
            DxgkSetStartPnPTransitionSessionized(a4, IsAdapterSessionized);
            if ( *(_QWORD *)(v12 + 3168) && (*(_DWORD *)(v12 + 444) & 0x4000) == 0 )
            {
              DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                (DXGADAPTERSTOPRESETLOCKSHARED *)v39,
                (struct DXGADAPTER *)v12,
                1);
              if ( *(_DWORD *)(v12 + 200) == 1 )
              {
                v28 = (_DWORD *)((char *)this + 304884);
                if ( *((_DWORD *)this + 76218) != 10 || (*v28 & 1) != 0 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 3168) + 736LL) + 8LL)
                                                         + 976LL))(
                    *(_QWORD *)(*(_QWORD *)(v12 + 3168) + 744LL),
                    *v28 & 1);
                if ( *(_QWORD *)((char *)this + 304876) != 0x1E00000032LL )
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 3168)
                                                                                         + 760LL)
                                                                             + 8LL)
                                                                 + 1120LL))(
                    *(_QWORD *)(*(_QWORD *)(v12 + 3168) + 768LL),
                    *((unsigned int *)this + 76219),
                    *((unsigned int *)this + 76220));
              }
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
            }
            DXGADAPTERLISTLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 680));
            DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 760));
            v29 = (__int64 *)((char *)this + 808);
            v30 = (DXGGLOBAL **)*((_QWORD *)this + 101);
            if ( v30[1] != (DXGGLOBAL *)((char *)this + 808) )
              __fastfail(3u);
            *(_QWORD *)v12 = v30;
            *(_QWORD *)(v12 + 8) = v29;
            v30[1] = (DXGGLOBAL *)v12;
            *v29 = v12;
            if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v30, (struct DXGADAPTER *)v12) )
            {
              if ( ++*((_DWORD *)this + 76317) == 2 )
              {
                Global = DXGGLOBAL::GetGlobal();
                DXGGLOBAL::RecordFeatureUsage((__int64)Global, 6, 1);
              }
              if ( *(_BYTE *)(v12 + 2988) )
              {
                ++*((_DWORD *)this + 76313);
              }
              else if ( *(_BYTE *)(v12 + 2983) )
              {
                ++*((_DWORD *)this + 76314);
              }
              if ( *((_DWORD *)this + 76314) && *((_DWORD *)this + 76313) )
              {
                v32 = DXGGLOBAL::GetGlobal();
                DXGGLOBAL::RecordFeatureUsage((__int64)v32, 9, 1);
              }
            }
            DXGFASTMUTEX::Release((struct _KTHREAD **)this + 95);
            DXGADAPTERLISTLOCK::ReleaseExclusive((DXGGLOBAL *)((char *)this + 680));
            if ( *(_BYTE *)(v12 + 209) )
            {
              if ( !*((_QWORD *)this + 125) && (*(_DWORD *)(v12 + 3016) & 8) == 0 )
              {
                DXGGLOBAL::SetVirtualRenderAdapter(this, (struct DXGADAPTER *)v12);
                if ( *(_BYTE *)(v12 + 211) )
                  DXGVAILOBJECT::NotifyVailAdapter(1);
              }
            }
            else
            {
              DpiEnableSharedGraphicsPowerInterface(*(_QWORD *)(v12 + 216));
            }
            if ( (*(_BYTE *)(v12 + 3112) & 1) != 0 )
            {
              v35[0] = 0;
              DxgkCheckAndUpdatePairingForNewAdapter((struct DXGADAPTER *)v12, v35);
              *((_BYTE *)a5 + 1) = *((_BYTE *)a5 + 1) & 0xBF | ((v35[0] & 1) << 6);
            }
            *v6 = (struct DXGADAPTER *)v12;
            return (unsigned int)v13;
          }
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2750;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to start PnP transition on the affected sessions, returning 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 216) + 64LL) + 4032LL) = 0LL;
        }
        DXGADAPTER::Destroy((DXGADAPTER *)v12, (struct _LUID *)a6);
      }
      DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)v12);
      return (unsigned int)v13;
    }
  }
  WdLogSingleEntry1(3LL);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 2681;
  return result;
}
