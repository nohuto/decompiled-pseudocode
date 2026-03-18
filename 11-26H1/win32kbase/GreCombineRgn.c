/*
 * XREFs of GreCombineRgn @ 0x140020BA0
 * Callers:
 *     NtGdiCombineRgn @ 0x140021680 (NtGdiCombineRgn.c)
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserSetDCVisRgn @ 0x140082180 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x140152810 (UserValidateCopyRgn.c)
 * Callees:
 *     _RGNOBJ::iCombine_::_2_::_lambda_1_::operator() @ 0x140012020 (_RGNOBJ--iCombine_--_2_--_lambda_1_--operator().c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D9B8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x14001FA3C (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140021730 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140021890 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140022050 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x140022F9C (-bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1400C5470 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140113F54 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v4; // rsi
  REGION *v8; // rdi
  __int64 v9; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rcx
  REGION *v15; // rax
  __int64 *DeferredContext; // rbx
  unsigned int (__fastcall **v17)(const struct REGION_CORE *); // rbx
  const struct REGION_CORE *v18; // rdi
  int v19; // esi
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rdi
  unsigned int (__fastcall **v26)(const struct REGION_CORE *); // rsi
  int v27; // ebx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned int v32; // eax
  unsigned int sizeScan; // eax
  __int64 v34; // r9
  __int64 v35; // rdx
  PVOID v36; // r8
  BOOL v37; // ecx
  __int64 *v38; // rdx
  __int64 *v39; // rax
  bool v40; // zf
  __int64 v41; // rbx
  const struct REGION_CORE *v42; // rdi
  __int64 v43; // rax
  bool v44; // cf
  __int64 v45; // r9
  int v46; // esi
  __int64 v47; // rax
  __int64 v48; // rdx
  REGION_CORE *v49; // rcx
  BOOL v50; // ecx
  __int64 v51; // r10
  __int64 v52; // r9
  BOOL v53; // ecx
  char v54; // r11
  __int64 v55; // rcx
  __int64 v56; // r9
  void *v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // xmm1_8
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // xmm0_8
  LONG v62; // r8d
  LONG v63; // edx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r9
  unsigned __int64 v66; // r10
  int v67; // eax
  int v68; // eax
  REGION *Region; // [rsp+30h] [rbp-D0h] BYREF
  RGNOBJ *p_Region; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v72; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v73; // [rsp+50h] [rbp-B0h]
  int v74; // [rsp+70h] [rbp-90h]
  __int64 v75; // [rsp+78h] [rbp-88h] BYREF
  __int64 v76; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v77; // [rsp+88h] [rbp-78h]
  int v78; // [rsp+A8h] [rbp-58h]
  __int64 v79; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v81; // [rsp+C0h] [rbp-40h]
  int v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD *v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v89[5]; // [rsp+130h] [rbp+30h] BYREF
  int v90; // [rsp+158h] [rbp+58h]
  _QWORD v91[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v92; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v93[5]; // [rsp+178h] [rbp+78h] BYREF
  int v94; // [rsp+1A0h] [rbp+A0h]
  __int64 v95; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD v96[5]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v97; // [rsp+1D8h] [rbp+D8h]
  struct _RECTL v98; // [rsp+1E0h] [rbp+E0h] BYREF

  v4 = a4;
  if ( (unsigned int)(a4 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( a4 == 5 )
  {
    v13 = 1;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v84, a1, 0, 1);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v79, a2, 1, 0);
    if ( v79 && (v25 = v84) != 0 )
    {
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        v26 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
        v27 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 56LL))(
                v84 + 24,
                (v79 + 24) & -(__int64)(v79 != 0));
        RgnCaptureLiveMemoryDumpOnZeroSizedScan(v26, (const struct REGION_CORE *)(v25 + 24));
      }
      else
      {
        LODWORD(Region) = 0;
        if ( !(unsigned int)RGNOBJ::bIsResizeRequiredBeforeCopyingRegion(
                              (RGNOBJ *)&v84,
                              (struct RGNOBJ *)&v79,
                              (unsigned int *)&Region) )
        {
          RGNOBJ::vCopy((RGNOBJ *)&v84, (struct RGNOBJ *)&v79);
LABEL_49:
          if ( WPP_MAIN_CB.Dpc.DeferredContext )
          {
            v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 32LL))((v84 + 24) & -(__int64)(v84 != 0));
          }
          else if ( *(_DWORD *)(v84 + 48) != 1 )
          {
            v13 = (REGION_CORE::get_sizeScan((REGION_CORE *)(v84 + 24)) > 0x38) + 2;
          }
LABEL_53:
          if ( !v82 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v79);
          if ( v79 )
            _InterlockedDecrement16((volatile signed __int16 *)(v79 + 12));
          v28 = v80;
          v29 = v81;
          if ( *(__int64 **)(v80 + 8) == &v80 && (__int64 *)*v81 == &v80 )
          {
            *v81 = v80;
            *(_QWORD *)(v28 + 8) = v29;
            v81 = &v80;
            v80 = (__int64)&v80;
            if ( !v87 )
              RGNOBJ::UpdateUserRgn((RGNOBJ *)&v84);
            if ( v84 )
              _InterlockedDecrement16((volatile signed __int16 *)(v84 + 12));
            v30 = v85;
            v31 = v86;
            if ( *(__int64 **)(v85 + 8) == &v85 && (__int64 *)*v86 == &v85 )
            {
              *v86 = v85;
              *(_QWORD *)(v30 + 8) = v31;
              return v13;
            }
          }
LABEL_136:
          __fastfail(3u);
        }
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&Region, (unsigned int)Region);
        if ( !Region )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&Region);
          goto LABEL_16;
        }
        RGNOBJ::vCopy((RGNOBJ *)&Region, (struct RGNOBJ *)&v79);
        v27 = RGNOBJAPI::bSwap((RGNOBJAPI *)&v84, (struct RGNOBJ *)&Region);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&Region);
      }
      if ( v27 )
        goto LABEL_49;
    }
    else
    {
      EngSetLastError(6u);
    }
LABEL_16:
    v13 = 0;
    goto LABEL_53;
  }
  if ( a1 != a2 && a1 != a3 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v88, a2, 1, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v95, a3, 1, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v92, a1, 0, 1);
    v13 = GrepCombineUniqueRgns<1,RGNOBJAPI>((RGNOBJAPI *)&v92, (struct RGNOBJ *)&v88, (struct RGNOBJ *)&v95, v4);
    if ( !v94 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v92);
    if ( v92 )
      _InterlockedDecrement16((volatile signed __int16 *)(v92 + 12));
    PopThreadGuardedObject(v93);
    if ( !v97 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v95);
    if ( v95 )
      _InterlockedDecrement16((volatile signed __int16 *)(v95 + 12));
    PopThreadGuardedObject(v96);
    if ( !v90 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v88);
    if ( v88 )
      _InterlockedDecrement16((volatile signed __int16 *)(v88 + 12));
    PopThreadGuardedObject(v89);
    return v13;
  }
  if ( a2 == a3 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v88, a1, 0, 1);
    if ( v88 )
    {
      if ( (unsigned int)(v4 - 3) <= 1 )
        RGNOBJ::vSet((RGNOBJ *)&v88);
      v13 = RGNOBJ::iComplexity((RGNOBJ *)&v88);
    }
    else
    {
      EngSetLastError(6u);
      v13 = 0;
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)&v88);
    return v13;
  }
  Region = RGNMEMOBJ::AllocateRegion(112LL);
  if ( Region )
  {
    RGNMEMOBJ::vInit((RGNMEMOBJ *)&Region);
    v8 = Region;
    v10 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v9) + 88)
                                                                          + 72LL);
    if ( v10 )
    {
      v57 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v10, v8);
      if ( v57 )
      {
        *((_QWORD *)v8 + 14) = v57;
      }
      else
      {
        REGION::vDeleteREGION(Region);
        Region = 0LL;
      }
    }
    else
    {
      *((_QWORD *)v8 + 14) = 0LL;
    }
  }
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&Region);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v75, a2, 0, a1 == a2);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v71, a3, 0, a1 == a3);
  if ( !Region )
    goto LABEL_34;
  v12 = v75;
  if ( !v75 )
  {
LABEL_18:
    EngSetLastError(6u);
    goto LABEL_19;
  }
  if ( !v71 )
  {
LABEL_35:
    if ( v12 && v71 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v13 = 1;
  v14 = *(_QWORD *)(W32GetSessionState(v11) + 88);
  v15 = Region;
  if ( Region == *(REGION **)(v14 + 4264) )
    goto LABEL_38;
  DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
  p_Region = (RGNOBJ *)&Region;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v17 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v18 = (const struct REGION_CORE *)(((unsigned __int64)Region + 24) & -(__int64)(Region != 0LL));
    v19 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, __int64, __int64, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                          + 152LL))(
            v18,
            (v75 + 24) & -(__int64)(v75 != 0),
            (v71 + 24) & -(__int64)(v71 != 0),
            (unsigned int)v4);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v17, v18);
    goto LABEL_39;
  }
  if ( (unsigned int)(v4 - 1) > 1 )
    goto LABEL_103;
  sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)((v75 + 24) & -(__int64)(v75 != 0)));
  v35 = v71;
  if ( sizeScan == 56 )
  {
    v34 = (v75 + 24) & -(__int64)(v75 != 0);
    v36 = WPP_MAIN_CB.Dpc.DeferredContext;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v67 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 16LL))(
              (v75 + 24) & -(__int64)(v75 != 0),
              (v71 + 24) & -(__int64)(v71 != 0));
      v35 = v71;
      v36 = WPP_MAIN_CB.Dpc.DeferredContext;
      v37 = v67 != 0;
    }
    else
    {
      v37 = *(_DWORD *)(((v75 + 24) & -(__int64)(v75 != 0)) + 0x1C) <= *(_DWORD *)(((v71 + 24) & -(__int64)(v71 != 0))
                                                                                 + 0x1C)
         && *(_DWORD *)(((v75 + 24) & -(__int64)(v75 != 0)) + 0x24) >= *(_DWORD *)(((v71 + 24) & -(__int64)(v71 != 0))
                                                                                 + 0x24)
         && *(_DWORD *)(((v75 + 24) & -(__int64)(v75 != 0)) + 0x20) <= *(_DWORD *)(((v71 + 24) & -(__int64)(v71 != 0))
                                                                                 + 0x20)
         && *(_DWORD *)(((v75 + 24) & -(__int64)(v75 != 0)) + 0x28) >= *(_DWORD *)(((v71 + 24) & -(__int64)(v71 != 0))
                                                                                 + 0x28);
    }
    if ( v37 )
    {
      v38 = &v75;
      v39 = &v71;
LABEL_78:
      if ( (_DWORD)v4 == 1 )
        v38 = v39;
      v40 = !RGNOBJ::iCombine_::_2_::_lambda_1_::operator()(&p_Region, v38);
LABEL_85:
      if ( v40 )
      {
        RGNOBJ::vSet((RGNOBJ *)&Region);
        v19 = 0;
        goto LABEL_39;
      }
LABEL_38:
      v19 = RGNOBJ::iComplexity((RGNOBJ *)&Region);
      goto LABEL_39;
    }
  }
  else
  {
    v36 = WPP_MAIN_CB.Dpc.DeferredContext;
  }
  v47 = v35 + 24;
  v48 = -v35;
  v49 = (REGION_CORE *)(v47 & -(__int64)(v48 != 0));
  if ( v36 )
    v50 = (*(__int64 (__fastcall **)(REGION_CORE *, __int64, PVOID, __int64))(*(_QWORD *)v36 + 24LL))(
            v49,
            v48,
            v36,
            v34) != 0;
  else
    v50 = REGION_CORE::get_sizeScan(v49) == 56;
  v51 = v71;
  v52 = v75;
  DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
  if ( v50 )
  {
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v68 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 16LL))(
              (v71 + 24) & -(__int64)(v71 != 0),
              (v75 + 24) & -(__int64)(v75 != 0));
      v52 = v75;
      v51 = v71;
      DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
      v53 = v68 != 0;
    }
    else
    {
      v53 = *(_DWORD *)(((v71 + 24) & -(__int64)(v71 != 0)) + 0x1C) <= *(_DWORD *)(((v75 + 24) & -(__int64)(v75 != 0))
                                                                                 + 0x1C)
         && *(_DWORD *)(((v71 + 24) & -(__int64)(v71 != 0)) + 0x24) >= *(_DWORD *)(((v75 + 24) & -(__int64)(v75 != 0))
                                                                                 + 0x24)
         && *(_DWORD *)(((v71 + 24) & -(__int64)(v71 != 0)) + 0x20) <= *(_DWORD *)(((v75 + 24) & -(__int64)(v75 != 0))
                                                                                 + 0x20)
         && *(_DWORD *)(((v71 + 24) & -(__int64)(v71 != 0)) + 0x28) >= *(_DWORD *)(((v75 + 24) & -(__int64)(v75 != 0))
                                                                                 + 0x28);
    }
    if ( v53 )
    {
      v38 = &v71;
      v39 = &v75;
      goto LABEL_78;
    }
  }
  if ( (_DWORD)v4 != 1 )
  {
    v15 = Region;
LABEL_100:
    v54 = byte_140265428[v4];
    if ( DeferredContext )
    {
      v41 = *DeferredContext;
      v42 = (const struct REGION_CORE *)(((unsigned __int64)v15 + 24) & -(__int64)(v15 != 0LL));
      v43 = v52 + 24;
      v45 = -v52;
      v44 = v45 != 0;
      LOBYTE(v45) = byte_140265428[v4];
      v46 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, __int64, __int64, __int64))(v41 + 144))(
              v42,
              v43 & -(__int64)v44,
              (v51 + 24) & -(__int64)(v51 != 0),
              v45);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))v41, v42);
    }
    else
    {
      p_Region = (RGNOBJ *)(((unsigned __int64)v15 + 24) & -(__int64)(v15 != 0LL));
      v55 = v52 + 24;
      v56 = -v52;
      v44 = v56 != 0;
      LOBYTE(v56) = v54;
      *(_QWORD *)&v98.left = v55 & -(__int64)v44;
      v83 = (v51 + 24) & -(__int64)(v51 != 0);
      v91[0] = &p_Region;
      v91[1] = &Region;
      v46 = (unsigned __int8)RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___(
                               (unsigned int)&p_Region,
                               (unsigned int)&v98,
                               (unsigned int)&v83,
                               v56,
                               (__int64)v91);
    }
    v40 = v46 == 0;
    goto LABEL_85;
  }
  if ( REGION_CORE::get_sizeScan((REGION_CORE *)(v52 + 24)) != 56
    || REGION_CORE::get_sizeScan((REGION_CORE *)(v71 + 24)) != 56 )
  {
    v15 = Region;
    DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
LABEL_103:
    v51 = v71;
    v52 = v75;
    goto LABEL_100;
  }
  v98 = 0LL;
  v58 = *(_QWORD *)(v75 + 52);
  v59 = _mm_srli_si128(*(__m128i *)(v75 + 52), 8).m128i_u64[0];
  v60 = *(_QWORD *)(v71 + 52);
  v61 = _mm_srli_si128(*(__m128i *)(v71 + 52), 8).m128i_u64[0];
  v62 = *(_OWORD *)(v71 + 52);
  if ( (int)v58 > (int)v60 )
    v62 = *(_QWORD *)(v75 + 52);
  v63 = v61;
  v98.left = v62;
  if ( (int)v59 < (int)v61 )
    v63 = v59;
  v64 = HIDWORD(v58);
  v65 = HIDWORD(v60);
  v98.right = v63;
  if ( (int)v64 > (int)v65 )
    LODWORD(v65) = v64;
  v66 = HIDWORD(v61);
  v98.top = v65;
  if ( SHIDWORD(v59) < SHIDWORD(v61) )
    LODWORD(v66) = HIDWORD(v59);
  v98.bottom = v66;
  if ( v62 >= v63 || (int)v65 >= (int)v66 )
    RGNOBJ::vSet((RGNOBJ *)&Region);
  else
    RGNOBJ::vSet((RGNOBJ *)&Region, &v98);
  v19 = 2;
LABEL_39:
  if ( !v19 )
  {
LABEL_34:
    v12 = v75;
    goto LABEL_35;
  }
  if ( a1 != a2 )
  {
    if ( (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)&v71, (struct RGNOBJ *)&Region) )
    {
      v32 = RGNOBJ::iComplexity((RGNOBJ *)&v71);
      goto LABEL_67;
    }
LABEL_19:
    v13 = 0;
    goto LABEL_20;
  }
  if ( !(unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)&v75, (struct RGNOBJ *)&Region) )
    goto LABEL_19;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 32LL))((v75 + 24) & -(__int64)(v75 != 0));
LABEL_67:
    v13 = v32;
    goto LABEL_20;
  }
  if ( *(_DWORD *)(v75 + 48) != 1 )
    v13 = (REGION_CORE::get_sizeScan((REGION_CORE *)(v75 + 24)) > 0x38) + 2;
LABEL_20:
  if ( !v74 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v71);
  if ( v71 )
    _InterlockedDecrement16((volatile signed __int16 *)(v71 + 12));
  v21 = v72;
  v22 = v73;
  if ( *(__int64 **)(v72 + 8) != &v72 || (__int64 *)*v73 != &v72 )
    goto LABEL_136;
  *v73 = v72;
  *(_QWORD *)(v21 + 8) = v22;
  v73 = &v72;
  v72 = (__int64)&v72;
  if ( !v78 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v75);
  if ( v75 )
    _InterlockedDecrement16((volatile signed __int16 *)(v75 + 12));
  v23 = v76;
  v24 = v77;
  if ( *(__int64 **)(v76 + 8) != &v76 || (__int64 *)*v77 != &v76 )
    goto LABEL_136;
  *v77 = v76;
  *(_QWORD *)(v23 + 8) = v24;
  v77 = &v76;
  v76 = (__int64)&v76;
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&Region);
  return v13;
}
