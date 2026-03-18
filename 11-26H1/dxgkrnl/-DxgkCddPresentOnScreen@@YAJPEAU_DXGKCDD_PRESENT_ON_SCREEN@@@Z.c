/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x140063664 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x14006C170 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1400701E8 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     _DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY @ 0x140194BB0 (_DxgkCddPresentOnScreen_--_46_--ENSURE_FREE_MEMORY--_ENSURE_FREE_MEMORY.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1401A2764 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1401A3F3C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1401A42C8 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1401BDDF0 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1402B9970 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1402BB200 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x140340108 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x140398E8C (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7B58 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1)
{
  __int64 v2; // r12
  __int64 v3; // rcx
  int PairingAdapters; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  DXGADAPTER *v8; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGSESSIONDATA *SessionData; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  int v24; // eax
  const wchar_t *v25; // r9
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  SESSION_VIEW *v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // eax
  __int64 v38; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rbx
  ADAPTER_DISPLAY *v40; // rax
  struct DXGDEVICE *v41; // rsi
  __int64 v42; // rdi
  struct _LOOKASIDE_LIST_EX *v43; // rax
  char *v44; // rax
  char *v45; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  unsigned __int64 v47; // rax
  DXGADAPTER *v48; // r12
  __int64 v49; // r9
  __int64 v50; // r9
  int v51; // eax
  const wchar_t *v52; // r9
  int v53; // edx
  D3DKMT_HANDLE v54; // edx
  int CddAllocations; // eax
  unsigned __int64 v56; // rdx
  ADAPTER_DISPLAY *v57; // r12
  LONG right; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v60; // rcx
  struct tagRECT *v61; // r8
  unsigned int i; // edx
  __int64 v63; // rcx
  int v64; // eax
  unsigned int v65; // r12d
  unsigned int v66; // ebx
  __int64 v67; // rsi
  struct tagRECT *v68; // rdi
  int v69; // eax
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  int v73; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v74; // r8d
  int v75; // eax
  LONG CddShadowPitch; // eax
  int v77; // eax
  int v78; // eax
  const wchar_t *v79; // r9
  int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // ebx
  ADAPTER_DISPLAY *v83; // r12
  int v84; // esi
  unsigned __int8 *v85; // r14
  struct tagRECT *v86; // r15
  int v87; // edi
  int v88; // eax
  unsigned int v89; // edi
  int v90; // eax
  __int64 v91; // rdi
  __int64 v92; // rsi
  unsigned __int64 v93; // rdx
  DXGADAPTER *v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rsi
  struct DXGDEVICE *v97; // rdi
  __int64 v98; // r9
  const char *v99; // rdx
  __int64 v100; // rdi
  __int64 v101; // r9
  const char *v102; // rdx
  struct DXGCONTEXT *v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // r9
  const char *v106; // rdx
  ADAPTER_RENDER **v107; // rcx
  struct _LOOKASIDE_LIST_EX *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // [rsp+28h] [rbp-E0h]
  __int64 v111; // [rsp+28h] [rbp-E0h]
  __int64 v112; // [rsp+30h] [rbp-D8h]
  __int64 v113; // [rsp+30h] [rbp-D8h]
  __int64 v114; // [rsp+30h] [rbp-D8h]
  __int64 v115; // [rsp+38h] [rbp-D0h]
  __int64 hAllocation; // [rsp+38h] [rbp-D0h]
  struct tagRECT *v117; // [rsp+40h] [rbp-C8h]
  struct tagRECT *v118; // [rsp+40h] [rbp-C8h]
  char v119; // [rsp+58h] [rbp-B0h]
  bool v120; // [rsp+59h] [rbp-AFh] BYREF
  char v121; // [rsp+5Ah] [rbp-AEh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v122; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v123[2]; // [rsp+60h] [rbp-A8h]
  unsigned int v124[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v125; // [rsp+70h] [rbp-98h] BYREF
  __int64 v126; // [rsp+78h] [rbp-90h]
  struct tagRECT *v127; // [rsp+80h] [rbp-88h]
  struct DXGDEVICE *v128; // [rsp+88h] [rbp-80h] BYREF
  struct DXGHWQUEUE *v129; // [rsp+90h] [rbp-78h] BYREF
  DXGADAPTER *v130; // [rsp+98h] [rbp-70h] BYREF
  ADAPTER_DISPLAY *v131; // [rsp+A0h] [rbp-68h]
  char *v132; // [rsp+A8h] [rbp-60h]
  struct DXGDEVICE *v133; // [rsp+B0h] [rbp-58h]
  struct _LUID v134; // [rsp+B8h] [rbp-50h] BYREF
  BOOL v135; // [rsp+C0h] [rbp-48h]
  char v136[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v137; // [rsp+D0h] [rbp-38h]
  char v138; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v139; // [rsp+E0h] [rbp-28h] BYREF
  struct _D3DKMT_UNLOCK v140; // [rsp+E8h] [rbp-20h] BYREF
  struct _D3DKMT_LOCK v141; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v142; // [rsp+128h] [rbp+20h] BYREF
  char v143; // [rsp+130h] [rbp+28h]
  struct _DXGKARG_PRESENT_DISPLAYONLY v144; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v145[16]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v146[16]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v147[16]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v148[7]; // [rsp+1A8h] [rbp+A0h] BYREF
  struct tagRECT v149; // [rsp+1E0h] [rbp+D8h] BYREF
  struct tagRECT v150; // [rsp+1F0h] [rbp+E8h] BYREF
  struct tagRECT v151; // [rsp+200h] [rbp+F8h] BYREF
  char v152[8]; // [rsp+218h] [rbp+110h] BYREF
  char v153[64]; // [rsp+220h] [rbp+118h] BYREF
  char v154[88]; // [rsp+260h] [rbp+158h] BYREF
  _BYTE v155[64]; // [rsp+2B8h] [rbp+1B0h] BYREF

  v130 = 0LL;
  v121 = 0;
  if ( !a1 )
  {
    LODWORD(v2) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 998;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCddPresentOnScreen receives NULL pPresentOnScreen, returning 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v2;
  }
  v3 = *(int *)a1;
  if ( (_DWORD)v3 && (unsigned int)(v3 - 1) > 2 )
  {
    LODWORD(v2) = -1073741811;
    WdLogSingleEntry2(4LL, v3, -1073741811LL);
    WdLogGlobalForLineNumber = 1007;
    return (unsigned int)v2;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *((struct DXGADAPTER **)a1 + 1),
                      *((_DWORD *)a1 + 4),
                      0LL,
                      0LL,
                      &v130,
                      &v139,
                      0);
  v5 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, *((_QWORD *)a1 + 1), *((unsigned int *)a1 + 4), PairingAdapters);
    v6 = *((_QWORD *)a1 + 1);
    v112 = *((unsigned int *)a1 + 4);
    WdLogGlobalForLineNumber = 1027;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound display adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddPresentOnScree"
                "n (ntStatus = 0x%I64x).",
      v6,
      v112,
      v5,
      0LL,
      0LL);
    return (unsigned int)v5;
  }
  v8 = v130;
  if ( !v130 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1032;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1032LL, 0LL, 0LL, 0LL, 0LL);
  }
  v134 = *(struct _LUID *)((char *)v8 + 412);
  DXGADAPTER::ReleaseReference(v8);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v10, v11, v12);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v16, v17);
    LODWORD(v2) = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 1046;
    v23 = PsGetCurrentProcessSessionId(v20, v19, v21, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v23,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v2;
  }
  v24 = DxgkAcquireSessionModeChangeLock(0);
  v2 = v24;
  v135 = v24 >= 0;
  v120 = v24 >= 0;
  if ( v24 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v25 = L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 1059;
LABEL_145:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v25, v2, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_146;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v134, *((_DWORD *)a1 + 4));
  v139 = (unsigned __int64)SessionViewFromSource;
  v31 = (SESSION_VIEW *)SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v32 = PsGetCurrentProcessSessionId(v28, v27, v29, v30);
    LODWORD(v2) = -1073741811;
    WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), v8, v32, -1073741811LL);
    WdLogGlobalForLineNumber = 1074;
    v37 = PsGetCurrentProcessSessionId(v34, v33, v35, v36);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x in session 0x%I64x, returning 0x%I64x.",
      *((unsigned int *)a1 + 4),
      (__int64)v8,
      v37,
      -1073741811LL,
      0LL);
    goto LABEL_146;
  }
  if ( *((_DWORD *)a1 + 8) != *((_DWORD *)SessionViewFromSource + 8) - *((_DWORD *)SessionViewFromSource + 6)
    || *((_DWORD *)a1 + 9) != *((_DWORD *)SessionViewFromSource + 9) - *((_DWORD *)SessionViewFromSource + 7) )
  {
    v2 = -1073741811LL;
    WdLogSingleEntry1(2LL);
    v25 = L"Caller specified shadow surface size dose not match the virtual mode size in session view, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 1084;
    goto LABEL_145;
  }
  v38 = *((unsigned int *)a1 + 19);
  if ( (unsigned int)v38 > 4 )
  {
    v47 = 16 * v38;
    if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
      v47 = -1LL;
    v127 = (struct tagRECT *)operator new[](v47, 0x4B677844u, 256LL);
    if ( !v127 )
    {
      WdLogSingleEntry2(6LL, *((unsigned int *)a1 + 19), -1073741801LL);
      v110 = *((unsigned int *)a1 + 19);
      WdLogGlobalForLineNumber = 1103;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate buffer for destination rectangle list for 0x%I64x RECTs, returning 0x%I64x.",
        v110,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v2) = -1073741801;
      goto LABEL_146;
    }
  }
  else
  {
    v127 = (struct tagRECT *)v155;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v31);
  while ( 1 )
  {
    v134 = (struct _LUID)PrimaryDisplaySource;
    if ( !PrimaryDisplaySource )
      break;
    v40 = (ADAPTER_DISPLAY *)*((_QWORD *)PrimaryDisplaySource + 1);
    v130 = 0LL;
    v125 = 0LL;
    v129 = 0LL;
    v122 = D3DKMDT_VPPR_UNINITIALIZED;
    v124[0] = 0;
    v149 = 0LL;
    v119 = 0;
    memset(&v141, 0, sizeof(v141));
    v131 = v40;
    v41 = (struct DXGDEVICE *)*((_QWORD *)v40 + 2);
    v133 = v41;
    v140 = 0LL;
    if ( !v41 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1130;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1130LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( !*((_QWORD *)v41 + 395) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1131;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        1131LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v42 = *((unsigned int *)PrimaryDisplaySource + 4);
    v123[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    v43 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
    v44 = (char *)ExAllocateFromLookasideListEx(v43 + 13);
    v132 = v44;
    v45 = v44;
    if ( !v44 )
    {
      if ( v135 )
        DxgkReleaseSessionModeChangeLock();
      return 3221225495LL;
    }
    memset(v44, 0, 0x5E0uLL);
    v128 = (struct DXGDEVICE *)v45;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v41 + 412),
                                             &v130,
                                             &v125,
                                             &v129,
                                             0);
    v2 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry2(2LL, v41, CddDeviceAndContextForCurrentSession);
      WdLogGlobalForLineNumber = 1160;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get CDD device and context on adapter 0x%I64x for current session (Status = 0x%I64x).",
        (__int64)v41,
        v2,
        0LL,
        0LL,
        0LL);
      DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY((PVOID *)&v128);
      goto LABEL_133;
    }
    v48 = v130;
    v128 = v130;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v142, v130);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v148,
      &v125,
      1u,
      v49,
      1);
    v137 = *(_QWORD *)(*((_QWORD *)v48 + 2) + 16LL);
    v138 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, (__int64)v48, 1, v50, 0);
    v130 = v129;
    if ( !v148[0] )
    {
      LODWORD(v2) = -1073741801;
      WdLogSingleEntry1(6LL);
      v52 = L"Out of memory - could not initialize context array lock exclusive, returning 0x%I64x.";
      v117 = 0LL;
      v53 = 262145;
      v115 = 0LL;
      v113 = 0LL;
      v111 = -1073741801LL;
      WdLogGlobalForLineNumber = 1183;
      goto LABEL_110;
    }
    v51 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v152, 0LL);
    v2 = v51;
    if ( v51 < 0 )
    {
      v41 = v128;
      WdLogSingleEntry2(2LL, v128, v51);
      WdLogGlobalForLineNumber = 1192;
      v52 = L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).";
      v117 = 0LL;
      v115 = 0LL;
      v113 = v2;
      goto LABEL_36;
    }
    ADAPTER_DISPLAY::GetCddAllocationHandles(v131, v42, (unsigned int *)&v122, v124);
    LODWORD(v126) = v122;
    if ( v122 )
    {
      v54 = v124[0];
      LODWORD(v129) = v124[0];
      if ( v124[0] )
        goto LABEL_45;
    }
    CddAllocations = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                       v131,
                       v128,
                       v42,
                       (unsigned int *)&v122,
                       v124,
                       (struct COREDEVICEACCESS *)v152);
    LODWORD(v2) = CddAllocations;
    if ( CddAllocations == -1073741637 )
    {
      LODWORD(v2) = -1071775482;
      WdLogSingleEntry3(4LL, v41, v42, -1071775482LL);
      WdLogGlobalForLineNumber = 1216;
    }
    else
    {
      if ( CddAllocations >= 0 )
      {
        v54 = v124[0];
        LODWORD(v126) = v122;
        LODWORD(v129) = v124[0];
LABEL_45:
        v57 = v131;
        v140.NumAllocations = 1;
        v141.hDevice = *((_DWORD *)v128 + 117);
        v141.hAllocation = v54;
        v140.hDevice = *((_DWORD *)v128 + 117);
        v140.phAllocations = &v141.hAllocation;
        ADAPTER_DISPLAY::GetCddDisplayMode(v131, v42);
        v149 = *(struct tagRECT *)(4024 * v42 + *((_QWORD *)v57 + 16) + 688);
        if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v57, v42, 1) - 2) & 0xFFFFFFFD) == 0 )
        {
          right = v149.right;
          v149.right = v149.bottom;
          v149.bottom = right;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v57, v42, 0);
        v60 = *(int *)a1;
        v122 = CurrentOrientation;
        if ( (_DWORD)v60 == 1 )
        {
          if ( !*((_QWORD *)v41 + 396) && ADAPTER_DISPLAY::IsIdenticalMode(v57, (unsigned int)v42) )
          {
            v61 = v127;
            for ( i = 0; i < *((_DWORD *)a1 + 19); v61[v63] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v63) )
              v63 = i++;
LABEL_64:
            if ( !*((_QWORD *)v41 + 396) )
            {
              memset(&v144, 0, sizeof(v144));
              v144.VidPnSourceId = v42;
              v144.BytesPerPixel = 4;
              if ( v119 )
              {
                v144.pSource = v141.pData;
                CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v131, v42);
              }
              else
              {
                v144.pSource = (void *)*((_QWORD *)a1 + 3);
                CddShadowPitch = *((_DWORD *)a1 + 10);
              }
              v144.Pitch = CddShadowPitch;
              v144.Flags.Value = 0;
              v77 = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v131, v42, 1);
              v144.NumMoves = 0;
              v144.pMoves = 0LL;
              v144.Flags.Value = (v77 != 1) | v144.Flags.Value & 0xFFFFFFFE;
              v144.NumDirtyRects = *((_DWORD *)a1 + 19);
              v144.pDirtyRect = v127;
              v78 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(v131, &v144);
              v2 = v78;
              if ( v78 >= 0 )
                goto LABEL_86;
              WdLogSingleEntry2(2LL, v41, v78);
              WdLogGlobalForLineNumber = 1420;
              v79 = L"PresentDisplayOnlyCdd on Adapter 0x%I64x failed (Status = 0x%I64x).";
              v118 = 0LL;
              hAllocation = 0LL;
              v114 = v2;
LABEL_85:
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)v79,
                (__int64)v41,
                v114,
                hAllocation,
                (__int64)v118,
                0LL);
              goto LABEL_105;
            }
            v124[0] = 0;
            if ( v130 )
            {
              v124[0] = *((_DWORD *)v130 + 6);
              *(_QWORD *)v45 = v124;
            }
            *((_DWORD *)v45 + 2) = *((_DWORD *)v125 + 6);
            *((_QWORD *)v45 + 2) = 0LL;
            *((_DWORD *)v45 + 18) = *((_DWORD *)a1 + 19);
            v70 = *((_DWORD *)v45 + 24);
            *((_QWORD *)v45 + 10) = v61;
            *((_DWORD *)v45 + 25) = 0;
            v71 = *(_DWORD *)a1;
            if ( !*(_DWORD *)a1 )
            {
              *((_DWORD *)v45 + 24) = v70 | 2;
              *((_DWORD *)v45 + 9) = *((_DWORD *)a1 + 5);
              *((_DWORD *)v45 + 8) = v126;
              *((_DWORD *)v45 + 7) = 0;
              *(struct tagRECT *)(v45 + 40) = v149;
              goto LABEL_75;
            }
            *((_DWORD *)v45 + 24) = v70 | 1;
            if ( v71 == 1 )
            {
              *((_DWORD *)v45 + 7) = (_DWORD)v129;
              v72 = v126;
              goto LABEL_73;
            }
            v73 = v126;
            *((_DWORD *)v45 + 7) = v126;
            if ( v71 == 2 )
            {
              v72 = (int)v129;
LABEL_73:
              *((_DWORD *)v45 + 8) = v72;
              *(struct tagRECT *)(v45 + 56) = v149;
              *(struct tagRECT *)(v45 + 40) = v149;
            }
            else
            {
              v74 = v122;
              *((_DWORD *)v45 + 8) = v73;
              DxgkpConvertRects(
                *((_DWORD *)a1 + 8),
                *((_DWORD *)a1 + 9),
                v74,
                &v149,
                2u,
                (struct tagRECT *)((char *)a1 + 44),
                (struct tagRECT *)((char *)a1 + 44));
              LODWORD(v42) = v123[0];
              *(_OWORD *)(v45 + 56) = *(_OWORD *)((char *)a1 + 44);
              *(_OWORD *)(v45 + 40) = *(_OWORD *)((char *)a1 + 60);
            }
LABEL_75:
            v75 = DXGCONTEXT::PresentFromCdd(
                    v125,
                    (struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *)v45,
                    v42,
                    (struct COREDEVICEACCESS *)v152,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v136,
                    &v125);
            v2 = v75;
            if ( v75 < 0 )
            {
              if ( v75 == -1071775482 )
              {
                WdLogSingleEntry2(4LL, v125, -1071775482LL);
                WdLogGlobalForLineNumber = 1512;
              }
              else if ( v75 != -1071774910 )
              {
                WdLogSingleEntry2(2LL, v125, v75);
                WdLogGlobalForLineNumber = 1518;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"PresentFromCdd on DxgContext 0x%I64x failed (Status = 0x%I64x).",
                  (__int64)v125,
                  v2,
                  0LL,
                  0LL,
                  0LL);
              }
              goto LABEL_105;
            }
LABEL_86:
            if ( *(_DWORD *)a1 == 2 )
            {
              v80 = DXGDEVICE::Lock(v128, &v141, (struct COREDEVICEACCESS *)v152, 1);
              v2 = v80;
              *(_QWORD *)v124 = v80;
              if ( v80 < 0 )
              {
                WdLogSingleEntry4(2LL, v41, v123[0], v141.hAllocation, v80);
                v79 = L"Failed to lock CDD shadow allocation on Adapter 0x%I64x VidPn source 0x%I64x (hShadow = 0x%I64x) ("
                       "Status = 0x%I64x).";
                v118 = (struct tagRECT *)v2;
                hAllocation = v141.hAllocation;
                v114 = v123[0];
                WdLogGlobalForLineNumber = 1543;
                goto LABEL_85;
              }
              v151.right = *((_DWORD *)a1 + 8);
              v151.bottom = *((_DWORD *)a1 + 9);
              v119 = 1;
              *(_QWORD *)&v151.left = 0LL;
              if ( v122 != D3DKMDT_VPPR_IDENTITY )
              {
                if ( v122 == D3DKMDT_VPPR_ROTATE90 )
                {
                  v122 = D3DKMDT_VPPR_ROTATE270;
                }
                else if ( v122 == D3DKMDT_VPPR_ROTATE270 )
                {
                  v122 = D3DKMDT_VPPR_ROTATE90;
                }
              }
              v81 = 0;
              LODWORD(v129) = 0;
              if ( *((_DWORD *)a1 + 19) )
              {
                v82 = v123[0];
                v83 = v131;
                do
                {
                  v84 = *((_DWORD *)a1 + 10);
                  v85 = (unsigned __int8 *)*((_QWORD *)a1 + 3);
                  v86 = &v127[v81];
                  v150.left = v86->left - v149.left;
                  v150.right = v86->right - v149.left;
                  v150.top = v86->top - v149.top;
                  v150.bottom = v86->bottom - v149.top;
                  v87 = ADAPTER_DISPLAY::GetCddShadowPitch(v83, v82);
                  v88 = ADAPTER_DISPLAY::GetCddShadowPitch(v83, v82);
                  DxgkpBlitA8R8R8G8(
                    (unsigned __int8 *)v141.pData + 4 * v149.left + (unsigned int)(v149.top * v88),
                    v149.right - v149.left,
                    v149.bottom - v149.top,
                    v87,
                    v122,
                    v85,
                    v84,
                    &v151,
                    &v150,
                    v86);
                  v81 = (_DWORD)v129 + 1;
                  LODWORD(v129) = v81;
                }
                while ( v81 < *((_DWORD *)a1 + 19) );
                v45 = v132;
                LODWORD(v2) = v124[0];
                v41 = v133;
              }
            }
            if ( DXGADAPTER::UsingSetTimingsFromVidPn(v41) )
            {
              v89 = v123[0];
              if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v41 + 395), v123[0]) )
              {
                if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v41 + 395), v89) )
                {
                  if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v41 + 395), v89) )
                  {
                    v90 = ADAPTER_DISPLAY::PresentCddPrimary(
                            *((PERESOURCE ***)v41 + 395),
                            v125,
                            v89,
                            (struct COREDEVICEACCESS *)v152);
                    if ( v90 < 0 )
                    {
                      v91 = v90;
                      WdLogSingleEntry2(2LL, v125, v90);
                      WdLogGlobalForLineNumber = 1620;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"PresentFromCdd failed to present the newly created Cdd Primary (Status = 0x%I64x).",
                        (__int64)v125,
                        v91,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                }
              }
            }
            v121 = 1;
LABEL_105:
            if ( !v119 )
              goto LABEL_111;
            DXGDEVICE::Unlock(v128, &v140, 0);
            if ( (int)v2 >= 0 )
              goto LABEL_111;
            v92 = v123[0];
            WdLogSingleEntry3(2LL, v133, v123[0], (int)v2);
            v52 = L"Failed to unlock the CDD shadow allocation on Adapter 0x%I64x VidPnSource 0x%I64x (Status = 0x%I64x).";
            v117 = 0LL;
            v115 = (int)v2;
            v113 = v92;
            v111 = (__int64)v133;
            WdLogGlobalForLineNumber = 1636;
LABEL_37:
            v53 = 0x40000;
LABEL_110:
            DxgkLogInternalTriageEvent(0LL, v53, -1, (__int64)v52, v111, v113, v115, (__int64)v117, 0LL);
            goto LABEL_111;
          }
          v64 = DXGDEVICE::Lock(v128, &v141, (struct COREDEVICEACCESS *)v152, 1);
          v2 = v64;
          if ( v64 < 0 )
          {
            WdLogSingleEntry4(2LL, v41, v42, v141.hAllocation, v64);
            v52 = L"Failed to lock CDD shadow allocation on Adapter 0x%I64x VidPn source 0x%I64x (hShadow = 0x%I64x) (Status = 0x%I64x).";
            v117 = (struct tagRECT *)v2;
            v115 = v141.hAllocation;
            v113 = v42;
            WdLogGlobalForLineNumber = 1306;
LABEL_36:
            v111 = (__int64)v41;
            goto LABEL_37;
          }
          v65 = 0;
          v119 = 1;
          if ( *((_DWORD *)a1 + 19) )
          {
            v66 = v42;
            do
            {
              v67 = v65;
              v68 = (struct tagRECT *)(v67 * 16 + *((_QWORD *)a1 + 10));
              v69 = ADAPTER_DISPLAY::GetCddShadowPitch(v131, v66);
              DxgkpBlitA8R8R8G8(
                *((unsigned __int8 **)a1 + 3),
                *((_DWORD *)a1 + 8),
                *((_DWORD *)a1 + 9),
                *((_DWORD *)a1 + 10),
                v122,
                (unsigned __int8 *)v141.pData,
                v69,
                &v149,
                v68,
                &v127[v67]);
              ++v65;
            }
            while ( v65 < *((_DWORD *)a1 + 19) );
            v45 = v132;
            v41 = v133;
            LODWORD(v42) = v123[0];
          }
          if ( *((_QWORD *)v41 + 396) )
          {
            DXGDEVICE::Unlock(v128, &v140, 0);
            v119 = 0;
          }
        }
        else
        {
          if ( !*((_QWORD *)v41 + 396) )
          {
            LODWORD(v2) = -1073741637;
            WdLogSingleEntry3(2LL, v41, v60, -1073741637LL);
            v52 = L"Display only adapter 0x%I64x does not support PresentOnScreen operation 0x%I64x, returning 0x%I64x.";
            v117 = 0LL;
            v115 = -1073741637LL;
            v113 = *(int *)a1;
            WdLogGlobalForLineNumber = 1378;
            goto LABEL_36;
          }
          DxgkpConvertRects(
            *((_DWORD *)a1 + 8),
            *((_DWORD *)a1 + 9),
            CurrentOrientation,
            &v149,
            *((_DWORD *)a1 + 19),
            *((struct tagRECT **)a1 + 10),
            v127);
        }
        v61 = v127;
        goto LABEL_64;
      }
      WdLogSingleEntry3(4LL, v41, v42, CddAllocations);
      WdLogGlobalForLineNumber = 1224;
    }
LABEL_111:
    COREACCESS::~COREACCESS((COREACCESS *)v154, v56);
    COREACCESS::~COREACCESS((COREACCESS *)v153, v93);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
    if ( v143 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v142 + 136));
      KeLeaveCriticalRegion();
      v143 = 0;
    }
    v94 = v130;
    if ( v130 )
    {
      v95 = _InterlockedDecrement64((volatile signed __int64 *)v130 + 14);
      if ( v95 >= 0 )
      {
        if ( !v95 )
        {
          v96 = *((_QWORD *)v94 + 2);
          v97 = *(struct DXGDEVICE **)(v96 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v145, v97);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v136,
            *(struct DXGADAPTER **)(*((_QWORD *)v97 + 2) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, (__int64)v97, 2, v98, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v152, v99);
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v97 + 2) + 16LL) + 200LL) != 4 )
            DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v96, v130, (struct COREDEVICEACCESS *)v152);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v145);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v96 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v100 = *(_QWORD *)(v96 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v146,
              (struct DXGDEVICE *)v100);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v136,
              *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v96 + 16) + 16LL) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, v100, 2, v101, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v152, v102);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v100 + 16) + 16LL) + 200LL) != 4 )
              DXGDEVICE::DestroyContext((DXGDEVICE *)v100, (struct DXGCONTEXT ***)v96, (struct COREDEVICEACCESS *)v152);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v146);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v100 + 16), (struct DXGDEVICE *)v100);
          }
        }
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 151;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount >= 0", 151LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v103 = v125;
    if ( v125 && _InterlockedExchangeAdd64((volatile signed __int64 *)v125 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v104 = *((_QWORD *)v103 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v147,
        (struct DXGDEVICE *)v104);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v136,
        *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v103 + 2) + 16LL) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, v104, 2, v105, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v152, v106);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v104 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v104, (struct DXGCONTEXT ***)v103, (struct COREDEVICEACCESS *)v152);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v147);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v104 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v104 + 16), (struct DXGDEVICE *)v104);
    }
    v107 = (ADAPTER_RENDER **)v128;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v128 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v107[2], (struct DXGDEVICE *)v107);
    v108 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx(v108 + 13, v45);
LABEL_133:
    PrimaryDisplaySource = 0LL;
    v109 = *(_QWORD *)(*(_QWORD *)&v134 + 56LL);
    if ( v109 != v139 + 48 )
      PrimaryDisplaySource = (struct DISPLAY_SOURCE *)(v109 - 56);
  }
  if ( v127 != (struct tagRECT *)v155 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v127);
  if ( v121 )
    LODWORD(v2) = 0;
LABEL_146:
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v120);
  return (unsigned int)v2;
}
