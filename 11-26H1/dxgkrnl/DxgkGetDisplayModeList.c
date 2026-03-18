/*
 * XREFs of DxgkGetDisplayModeList @ 0x140438C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     _lambda_4ad224167d91228276911ab76f1e9490_::operator() @ 0x140361710 (_lambda_4ad224167d91228276911ab76f1e9490_--operator().c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14037C198 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1403ADEB8 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1403E83FC (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1403E8488 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(_DWORD *Src)
{
  struct DXGSESSIONDATA *v2; // r13
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r14
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  D3DKMT_DISPLAYMODE *pModeList; // rsi
  UINT ModeCount; // r12d
  struct DXGADAPTER *v13; // rdi
  int PairingAdapters; // eax
  int DisplayModeList; // ebx
  DXGGLOBAL **v16; // rcx
  __int64 v17; // rcx
  struct DXGADAPTER *v19; // rdi
  char v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  DXGGLOBAL **v28; // rcx
  __int64 v29; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL **v31; // rcx
  int v32; // ebx
  __int64 v33; // rcx
  struct _KPROCESS *v34; // rbx
  int v35; // eax
  struct _KTHREAD **v36; // r8
  int v37; // r14d
  ADAPTER_DISPLAY *v38; // rcx
  UINT v39; // ebx
  __int64 v40; // rcx
  int v41; // r13d
  unsigned int v42; // r11d
  __m128i v43; // xmm5
  __m128i v44; // xmm4
  __m128 si128; // xmm7
  __m128 v46; // xmm8
  unsigned int v47; // r10d
  __m128i v48; // xmm4
  __m128i v49; // xmm4
  _DWORD *v50; // rdx
  UINT v51; // eax
  unsigned int v52; // edx
  _DWORD *v53; // rdi
  __int64 i; // r14
  UINT j; // ebx
  _DWORD *v56; // rdx
  _DWORD *v57; // rdx
  struct DXGGLOBAL *v58; // rax
  char v59; // [rsp+50h] [rbp-228h]
  unsigned __int8 v60[3]; // [rsp+51h] [rbp-227h] BYREF
  unsigned int v61; // [rsp+54h] [rbp-224h]
  struct DXGADAPTER *v62; // [rsp+58h] [rbp-220h] BYREF
  int v63; // [rsp+60h] [rbp-218h] BYREF
  __int64 v64; // [rsp+68h] [rbp-210h]
  char v65; // [rsp+70h] [rbp-208h]
  _DWORD *v66; // [rsp+78h] [rbp-200h]
  unsigned int v67[4]; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v68; // [rsp+90h] [rbp-1E8h]
  unsigned int v69; // [rsp+98h] [rbp-1E0h]
  UINT v70; // [rsp+9Ch] [rbp-1DCh]
  int v71; // [rsp+A0h] [rbp-1D8h]
  int v72; // [rsp+A4h] [rbp-1D4h]
  struct _D3DKMT_DISPLAYMODE *v73; // [rsp+A8h] [rbp-1D0h] BYREF
  unsigned __int64 v74; // [rsp+B0h] [rbp-1C8h] BYREF
  _DWORD *v75; // [rsp+B8h] [rbp-1C0h]
  D3DKMT_DISPLAYMODE *v76; // [rsp+C0h] [rbp-1B8h]
  struct _KTHREAD **v77; // [rsp+C8h] [rbp-1B0h]
  struct DXGADAPTER *v78; // [rsp+D0h] [rbp-1A8h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v79; // [rsp+E0h] [rbp-198h] BYREF
  __m128i v80; // [rsp+F8h] [rbp-180h]
  int v81; // [rsp+108h] [rbp-170h]
  int v82; // [rsp+10Ch] [rbp-16Ch]
  int v83; // [rsp+110h] [rbp-168h]
  _BYTE v84[24]; // [rsp+118h] [rbp-160h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp-148h] BYREF
  char v86; // [rsp+160h] [rbp-118h]
  _BYTE v87[144]; // [rsp+170h] [rbp-108h] BYREF

  v66 = Src;
  v63 = -1;
  v2 = 0LL;
  v64 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v63, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
  v77 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 5822;
    v8 = PsGetCurrentProcess(v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v8,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    v10 = v65 == 0;
LABEL_37:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  *(_OWORD *)v67 = 0LL;
  v68 = 0LL;
  pModeList = 0LL;
  v76 = 0LL;
  ModeCount = 0;
  v60[0] = 0;
  v59 = 0;
  RtlCopyFromUser(v67, Src, 0x18uLL);
  v62 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v78, v67[0], Current, &v62, 1);
  v13 = v62;
  if ( !v62 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, Current, v67[0]);
    WdLogGlobalForLineNumber = 5857;
    goto LABEL_33;
  }
  v62 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v13, v67[1], 0LL, 0LL, &v62, &v74, 0);
  DisplayModeList = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, v13, v67[1], PairingAdapters);
    WdLogGlobalForLineNumber = 5877;
LABEL_11:
    v16 = (DXGGLOBAL **)v78;
    if ( v78 && _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v16[2], (struct DXGADAPTER *)v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    return (unsigned int)DisplayModeList;
  }
  v19 = v62;
  if ( !v62 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5881;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 5881LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v87, v19, 0LL);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84, 0LL, v20);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v19 + 2), v19);
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v21) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v2 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 123));
    v62 = v2;
    if ( !v2 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5925;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire console session mode change shared lock, returning 0x%I64x.",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
LABEL_33:
      v31 = (DXGGLOBAL **)v78;
      if ( v78 && _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(v31[2], (struct DXGADAPTER *)v31);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      v10 = v65 == 0;
      goto LABEL_37;
    }
LABEL_41:
    v86 = 0;
    if ( v2 )
    {
      v32 = *(_DWORD *)v2;
      if ( (unsigned int)PsGetCurrentProcessSessionId(v24, v23, v25, v26) != v32 )
      {
        v59 = 1;
        v34 = (struct _KPROCESS *)*((_QWORD *)v2 + 2332);
        if ( (struct _KPROCESS *)PsGetCurrentProcess(v33) != v34 )
        {
          KeStackAttachProcess(v34, &ApcState);
          v86 = 1;
        }
      }
    }
    v73 = 0LL;
    v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v87, 0LL);
    DisplayModeList = v35;
    v61 = v35;
    if ( v35 >= 0 )
    {
      v38 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 395);
      if ( v67[1] < *((_DWORD *)v38 + 24) )
      {
        if ( ADAPTER_DISPLAY::IsPartOfDesktop(v38, v67[1]) )
        {
          *(_QWORD *)&v79.hAdapter = *(_QWORD *)v67;
          *(&v79.ModeCount + 1) = HIDWORD(v68);
          v79.ModeCount = 0;
          v79.pModeList = 0LL;
          DisplayModeList = DxgkpGetDisplayModeList(
                              (ADAPTER_DISPLAY **)v19,
                              (struct COREADAPTERACCESS *)v87,
                              (struct DXGAUTOPUSHLOCK *)v84,
                              0LL,
                              &v79,
                              (const struct _D3DKMT_DISPLAYMODE **)&v73,
                              v60);
          v61 = DisplayModeList;
          v37 = 7;
          if ( DisplayModeList >= 0 )
          {
            ModeCount = v79.ModeCount;
            pModeList = v79.pModeList;
            v76 = v79.pModeList;
          }
        }
        else
        {
          DisplayModeList = -1071774972;
          v61 = -1071774972;
          v37 = 7;
          WdLogSingleEntry3(7LL, -1071774972LL, v19, v67[1]);
          WdLogGlobalForLineNumber = 5983;
        }
      }
      else
      {
        DisplayModeList = -1071774972;
        v61 = -1071774972;
        v37 = 7;
        WdLogSingleEntry3(7LL, -1071774972LL, v19, v67[1]);
        WdLogGlobalForLineNumber = 5974;
      }
    }
    else
    {
      v36 = Current;
      v37 = 7;
      WdLogSingleEntry4(7LL, v35, v36, v67[0], v19);
      WdLogGlobalForLineNumber = 5966;
    }
    if ( v59 && v86 )
    {
      KeUnstackDetachProcess(&ApcState);
      v86 = 0;
    }
    if ( DisplayModeList < 0 )
      goto LABEL_86;
    v39 = ModeCount;
    v41 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v19 + 395), v67[1]) + 19);
    if ( v41 )
    {
      v42 = 0;
      if ( ModeCount >= 8 )
      {
        v43 = 0LL;
        v44 = 0LL;
        si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        v46 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        v47 = 2;
        do
        {
          v43 = _mm_sub_epi32(
                  v43,
                  (__m128i)_mm_andnot_ps(
                             (__m128)_mm_cmpeq_epi32(
                                       (__m128i)_mm_and_ps(
                                                  (__m128)_mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v42].Flags + 1)),
                                                              _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v47 - 1].Flags + 1))),
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v47].Flags + 1)),
                                                              _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v47 + 1].Flags + 1)))),
                                                  si128),
                                       (__m128i)0LL),
                             v46));
          v40 = v47 + 2;
          v44 = _mm_sub_epi32(
                  v44,
                  (__m128i)_mm_andnot_ps(
                             (__m128)_mm_cmpeq_epi32(
                                       (__m128i)_mm_and_ps(
                                                  (__m128)_mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v40].Flags + 1)),
                                                              _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v47 + 3].Flags + 1))),
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v47 + 4].Flags + 1)),
                                                              _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v47 + 5].Flags + 1)))),
                                                  si128),
                                       (__m128i)0LL),
                             v46));
          v42 += 8;
          v47 += 8;
        }
        while ( v42 < (ModeCount & 0xFFFFFFF8) );
        v48 = _mm_add_epi32(v44, v43);
        v49 = _mm_add_epi32(v48, _mm_srli_si128(v48, 8));
        v39 = ModeCount + _mm_cvtsi128_si32(_mm_add_epi32(v49, _mm_srli_si128(v49, 4)));
      }
      if ( v42 < ModeCount )
      {
        v50 = (_DWORD *)&pModeList[v42].Flags + 1;
        v40 = ModeCount - v42;
        do
        {
          v51 = v39 - 1;
          if ( (*v50 & 0x10) == 0 )
            v51 = v39;
          v39 = v51;
          v50 += 11;
          --v40;
        }
        while ( v40 );
      }
    }
    v80 = _mm_load_si128((const __m128i *)&_xmm);
    v81 = 31;
    v82 = 119;
    v83 = 113;
    if ( *((_QWORD *)v19 + 396) )
      v37 = 1;
    v69 = v37;
    v52 = v37 * ((v73 != 0LL) + v39);
    LODWORD(v74) = v52;
    v53 = *(_DWORD **)&v67[2];
    if ( *(_QWORD *)&v67[2] )
    {
      if ( (unsigned int)v68 < v52 )
      {
        DisplayModeList = -1073741789;
        v72 = -1073741789;
LABEL_85:
        RtlWriteULongToUser(v66 + 4, v52);
        v2 = v62;
LABEL_86:
        if ( v60[0] )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(pModeList);
        if ( v2 )
        {
          v58 = DXGGLOBAL::GetGlobal();
          DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v58 + 123), v2);
        }
        else
        {
          DxgkReleaseSessionModeChangeLock();
        }
        if ( v86 )
        {
          KeUnstackDetachProcess(&ApcState);
          v86 = 0;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
        goto LABEL_11;
      }
      v75 = *(_DWORD **)&v67[2];
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v71 = i;
        if ( (unsigned int)i >= v69 )
          break;
        for ( j = 0; ; ++j )
        {
          v70 = j;
          if ( j >= ModeCount )
            break;
          if ( v41 )
          {
            v40 = *((unsigned int *)&pModeList[j].Flags + 1);
            if ( (v40 & 0x10) != 0 )
              continue;
          }
          v56 = v53;
          v53 += 11;
          v75 = v53;
          lambda_4ad224167d91228276911ab76f1e9490_::operator()(v40, v56, &pModeList[j].Width, v80.m128i_i32[i]);
        }
        if ( v73 )
        {
          v57 = v53;
          v53 += 11;
          v75 = v53;
          lambda_4ad224167d91228276911ab76f1e9490_::operator()(v40, v57, v73, v80.m128i_i32[i]);
        }
      }
      v52 = v74;
    }
    DisplayModeList = v61;
    goto LABEL_85;
  }
  v62 = 0LL;
  v22 = DxgkAcquireSessionModeChangeLock(0);
  v61 = v22;
  if ( v22 >= 0 )
    goto LABEL_41;
  v27 = v22;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 5903;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire current session mode change shared lock, returning 0x%I64x.",
    v27,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
  v28 = (DXGGLOBAL **)v78;
  if ( v78 && _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(v28[2], (struct DXGADAPTER *)v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit);
  return v61;
}
