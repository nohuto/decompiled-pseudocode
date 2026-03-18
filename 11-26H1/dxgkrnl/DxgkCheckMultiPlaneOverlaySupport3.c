/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x14039DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x14039ECF4 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x14039ED70 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x14039EDF0 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14039EE6C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1403B981C (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1403C5038 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(_DWORD *Src)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  bool v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rcx
  void **v7; // rbx
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // r15d
  void **v12; // rdi
  char *v13; // rbx
  unsigned int v14; // eax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // r15
  void **v18; // r8
  unsigned int v19; // edx
  struct DXGDEVICE *v20; // r9
  char *v21; // rbx
  _DWORD *v22; // rax
  unsigned int i; // edx
  DXGDEVICE *v24; // rbx
  __int64 v25; // r9
  int v26; // eax
  unsigned int v27; // edi
  int v28; // ebx
  _DWORD *v29; // rdi
  ADAPTER_RENDER **v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  ADAPTER_RENDER **v35; // rcx
  unsigned int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 CurrentProcess; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  int *v51; // [rsp+30h] [rbp-3F8h]
  int *v52; // [rsp+30h] [rbp-3F8h]
  int v53; // [rsp+50h] [rbp-3D8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-3D0h]
  char v55; // [rsp+60h] [rbp-3C8h]
  PVOID v56; // [rsp+68h] [rbp-3C0h] BYREF
  _BYTE v57[24]; // [rsp+70h] [rbp-3B8h] BYREF
  int v58; // [rsp+88h] [rbp-3A0h]
  struct DXGDEVICE *v59; // [rsp+90h] [rbp-398h] BYREF
  PVOID v60; // [rsp+98h] [rbp-390h] BYREF
  _BYTE v61[24]; // [rsp+A0h] [rbp-388h] BYREF
  int v62; // [rsp+B8h] [rbp-370h]
  int v63; // [rsp+C0h] [rbp-368h] BYREF
  struct DXGDEVICE *v64; // [rsp+C8h] [rbp-360h] BYREF
  unsigned int v65[4]; // [rsp+D0h] [rbp-358h] BYREF
  void *Srca[2]; // [rsp+E0h] [rbp-348h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v67[2]; // [rsp+F0h] [rbp-338h]
  unsigned int v68; // [rsp+100h] [rbp-328h]
  unsigned int v69; // [rsp+104h] [rbp-324h]
  void *v70; // [rsp+108h] [rbp-320h]
  _DWORD *v71; // [rsp+110h] [rbp-318h]
  __int64 v72; // [rsp+118h] [rbp-310h]
  void **v73; // [rsp+120h] [rbp-308h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v74; // [rsp+128h] [rbp-300h] BYREF
  struct DXGPROCESS *v75[2]; // [rsp+130h] [rbp-2F8h] BYREF
  PVOID v76; // [rsp+140h] [rbp-2E8h] BYREF
  _BYTE v77[96]; // [rsp+148h] [rbp-2E0h] BYREF
  int v78; // [rsp+1A8h] [rbp-280h]
  PVOID P; // [rsp+1B0h] [rbp-278h] BYREF
  _BYTE v80[132]; // [rsp+1B8h] [rbp-270h] BYREF
  int v81; // [rsp+23Ch] [rbp-1ECh]
  PVOID v82; // [rsp+240h] [rbp-1E8h] BYREF
  _BYTE v83[264]; // [rsp+248h] [rbp-1E0h] BYREF
  int v84; // [rsp+350h] [rbp-D8h]
  _BYTE v85[160]; // [rsp+360h] [rbp-C8h] BYREF

  v71 = Src;
  v53 = -1;
  v54 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 2093);
  Current = DXGPROCESS::GetCurrent(v2);
  v75[0] = Current;
  if ( !Current )
  {
    v27 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11079;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_64:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
    }
    return v27;
  }
  v4 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)v65 = 0LL;
  *(_OWORD *)Srca = 0LL;
  *(_OWORD *)v67 = 0LL;
  RtlCopyFromUser(v65, Src, 0x30uLL);
  if ( !v65[2] )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v27 = -1073741811;
    WdLogSingleEntry3(2LL, 0LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 11113;
    v41 = v65[2];
    v52 = (int *)PsGetCurrentProcess(v42);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport3 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v41,
      -1073741811LL,
      (__int64)v52,
      0LL,
      0LL);
    goto LABEL_64;
  }
  if ( LODWORD(Srca[1]) > 0x10 )
  {
    v36 = (unsigned int)Srca[1];
    v37 = PsGetCurrentProcess(v5);
    v27 = -1073741811;
    WdLogSingleEntry3(2LL, v36, -1073741811LL, v37);
    WdLogGlobalForLineNumber = 11123;
    v38 = LODWORD(Srca[1]);
    v51 = (int *)PsGetCurrentProcess(v39);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport3 post composition count count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v38,
      -1073741811LL,
      (__int64)v51,
      0LL,
      0LL);
    goto LABEL_64;
  }
  v56 = 0LL;
  v58 = 0;
  v7 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(&v56);
  v73 = v7;
  if ( !v7 )
  {
    v43 = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(3LL, -1073741801LL, v43);
    WdLogGlobalForLineNumber = 11136;
LABEL_100:
    if ( v56 != v57 && v56 )
      ExFreePoolWithTag(v56, 0);
    v56 = 0LL;
    v58 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v50, (__int64)&EventProfilerExit);
    return 3221225495LL;
  }
  v76 = 0LL;
  v78 = 0;
  v9 = (struct DXGDEVICE *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(
                             &v76,
                             v65[2]);
  v59 = v9;
  if ( !v9 )
  {
    v44 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(3LL, -1073741801LL, v44);
    WdLogGlobalForLineNumber = 11147;
LABEL_96:
    if ( v76 != v77 && v76 )
      ExFreePoolWithTag(v76, 0);
    v78 = 0;
    v76 = 0LL;
    goto LABEL_100;
  }
  v82 = 0LL;
  v84 = 0;
  v64 = (struct DXGDEVICE *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(
                              &v82,
                              v65[2]);
  if ( !v64 )
  {
    v45 = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(3LL, -1073741801LL, v45);
    WdLogGlobalForLineNumber = 11158;
LABEL_92:
    if ( v82 != v83 && v82 )
      ExFreePoolWithTag(v82, 0);
    v82 = 0LL;
    v84 = 0;
    goto LABEL_96;
  }
  v60 = 0LL;
  v62 = 0;
  P = 0LL;
  v81 = 0;
  v70 = 0LL;
  v72 = 0LL;
  if ( LODWORD(Srca[1]) )
  {
    v70 = (void *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,3>::AllocateElements(&v60);
    if ( v70 )
    {
      v72 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
              &P,
              LODWORD(Srca[1]));
      if ( v72 )
        goto LABEL_12;
      v49 = PsGetCurrentProcess(v48);
      WdLogSingleEntry2(3LL, -1073741801LL, v49);
      WdLogGlobalForLineNumber = 11186;
    }
    else
    {
      v47 = PsGetCurrentProcess(v46);
      WdLogSingleEntry2(3LL, -1073741801LL, v47);
      WdLogGlobalForLineNumber = 11176;
    }
    if ( P != v80 && P )
      ExFreePoolWithTag(P, 0);
    v81 = 0;
    P = 0LL;
    if ( v60 != v61 && v60 )
      ExFreePoolWithTag(v60, 0);
    v62 = 0;
    v60 = 0LL;
    goto LABEL_92;
  }
LABEL_12:
  RtlCopyFromUser(v7, Srca[0], 8LL * v65[2]);
  v11 = 0;
  v68 = 0;
  while ( v11 < v65[2] )
  {
    v12 = (void **)((char *)v9 + 32 * v11);
    RtlCopyFromUser(v12, v73[v11], 0x20uLL);
    v13 = (char *)v64 + 88 * v11;
    RtlCopyFromUser(v13, v12[3], 0x58uLL);
    *((_DWORD *)v13 + 15) = 0;
    *((_QWORD *)v13 + 8) = 0LL;
    v68 = ++v11;
    v9 = v59;
  }
  v14 = (unsigned int)Srca[1];
  v15 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v70;
  if ( LODWORD(Srca[1]) )
  {
    RtlCopyFromUser(v70, v67[0], 8LL * LODWORD(Srca[1]));
    v14 = (unsigned int)Srca[1];
  }
  v16 = 0;
  v17 = v72;
  while ( 1 )
  {
    v69 = v16;
    if ( v16 >= v14 )
      break;
    RtlCopyFromUser((void *)(v17 + 44LL * v16), v15[v16], 0x2CuLL);
    ++v16;
    v14 = (unsigned int)Srca[1];
  }
  v18 = v73;
  Srca[0] = v73;
  v19 = 0;
  v20 = v59;
  while ( v19 < v65[2] )
  {
    v21 = (char *)v20 + 32 * v19;
    v18[v19] = v21;
    v22 = (_DWORD *)((char *)v64 + 88 * v19);
    *((_QWORD *)v21 + 3) = v22;
    if ( (*v22 & 4) != 0 )
    {
      _mm_lfence();
      v33 = PsGetCurrentProcess(v19);
      v27 = -1073741811;
      WdLogSingleEntry3(3LL, **((unsigned int **)v21 + 3), -1073741811LL, v33);
      WdLogGlobalForLineNumber = 11244;
      goto LABEL_52;
    }
    ++v19;
  }
  v67[0] = v15;
  for ( i = 0; i < LODWORD(Srca[1]); ++i )
    v15[i] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)(v17 + 44LL * i);
  v64 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, v65[1], (struct _KTHREAD **)v75[0], &v64);
  v24 = v64;
  if ( !v64 )
  {
    v27 = -1073741811;
    WdLogSingleEntry2(2LL, v65[1], -1073741811LL);
    WdLogGlobalForLineNumber = 11260;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v65[1],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v59);
LABEL_52:
    if ( P != v80 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v81 = 0;
    if ( v60 != v61 && v60 )
      ExFreePoolWithTag(v60, 0);
    v60 = 0LL;
    v62 = 0;
    if ( v82 != v83 && v82 )
      ExFreePoolWithTag(v82, 0);
    v82 = 0LL;
    v84 = 0;
    if ( v76 != v77 && v76 )
      ExFreePoolWithTag(v76, 0);
    v76 = 0LL;
    v78 = 0;
    if ( v56 != v57 && v56 )
      ExFreePoolWithTag(v56, 0);
    v56 = 0LL;
    v58 = 0;
    goto LABEL_64;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75, v64);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, (__int64)v24, 2, v25, 0);
  v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v85, 0LL);
  v27 = v26;
  if ( v26 < 0 )
  {
    WdLogSingleEntry2(3LL, v24, v26);
    WdLogGlobalForLineNumber = 11275;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
    v35 = (ADAPTER_RENDER **)v59;
    if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v35[2], (struct DXGDEVICE *)v35);
    goto LABEL_52;
  }
  v63 = 0;
  v74.0 = 0;
  v28 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(
          v24,
          v65[2],
          (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)Srca[0],
          (unsigned int)Srca[1],
          v67[0],
          v4,
          &v63,
          &v74);
  if ( v28 >= 0 )
  {
    v29 = v71;
    RtlWriteULongToUser(v71 + 10, v63);
    RtlWriteULongToUser(v29 + 11, v74.Value);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
  v30 = (ADAPTER_RENDER **)v59;
  if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(v30[2], (struct DXGDEVICE *)v30);
  if ( P != v80 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v81 = 0;
  if ( v60 != v61 && v60 )
    ExFreePoolWithTag(v60, 0);
  v60 = 0LL;
  v62 = 0;
  if ( v82 != v83 && v82 )
    ExFreePoolWithTag(v82, 0);
  v82 = 0LL;
  v84 = 0;
  if ( v76 != v77 && v76 )
    ExFreePoolWithTag(v76, 0);
  v76 = 0LL;
  v78 = 0;
  if ( v56 != v57 && v56 )
    ExFreePoolWithTag(v56, 0);
  v56 = 0LL;
  v58 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit);
  return (unsigned int)v28;
}
