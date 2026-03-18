/*
 * XREFs of DxgkCreateProtectedSession @ 0x1401FA080
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140037E00 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140067CAC (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x14018DFF4 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401F94C4 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401F9BAC (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(char *Src)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // r13
  unsigned int v4; // eax
  struct DXGDEVICE *v5; // r14
  volatile signed __int32 *v6; // r12
  int v7; // esi
  __int64 v8; // rax
  const wchar_t *v9; // r9
  struct DXGDEVICE *v10; // r13
  __int64 v11; // rcx
  __int64 v13; // r9
  struct DXGGLOBAL *v14; // rax
  struct _KTHREAD **v15; // rsi
  unsigned int v16; // edx
  unsigned int v18; // r8d
  __int64 v19; // rsi
  struct _KTHREAD *v20; // rsi
  DXGPUSHLOCK *v21; // rax
  __int64 v22; // r13
  const wchar_t *v23; // r9
  struct DXGDEVICE *v24; // r8
  int v25; // eax
  bool v26; // zf
  char v27; // al
  unsigned __int64 v28; // rsi
  DXGPUSHLOCK *v29; // r14
  __int64 v30; // rax
  struct _KTHREAD **v31; // r13
  struct _KTHREAD *v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v36; // rcx
  struct DXGDEVICE *v37; // [rsp+50h] [rbp-188h] BYREF
  char v38[8]; // [rsp+58h] [rbp-180h] BYREF
  int v39; // [rsp+60h] [rbp-178h] BYREF
  __int64 v40; // [rsp+68h] [rbp-170h]
  char v41; // [rsp+70h] [rbp-168h]
  void *Srca[2]; // [rsp+78h] [rbp-160h] BYREF
  size_t Size[2]; // [rsp+88h] [rbp-150h]
  size_t v44; // [rsp+98h] [rbp-140h] BYREF
  DXGPROTECTEDSESSION *v45; // [rsp+A0h] [rbp-138h] BYREF
  void *v46; // [rsp+A8h] [rbp-130h] BYREF
  void *v47; // [rsp+B0h] [rbp-128h] BYREF
  struct _KTHREAD **v48; // [rsp+B8h] [rbp-120h]
  _BYTE v49[16]; // [rsp+C0h] [rbp-118h] BYREF
  _BYTE v50[16]; // [rsp+D0h] [rbp-108h] BYREF
  DXGPUSHLOCK *v51; // [rsp+E0h] [rbp-F8h]
  __int64 v52; // [rsp+E8h] [rbp-F0h]
  char *v53; // [rsp+F0h] [rbp-E8h]
  char *v54; // [rsp+F8h] [rbp-E0h]
  _BYTE v55[160]; // [rsp+100h] [rbp-D8h] BYREF

  v53 = Src;
  v54 = Src;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 57;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      57LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2148);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v48 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 66;
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
LABEL_34:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *(_OWORD *)Srca = 0LL;
  *(_OWORD *)Size = 0LL;
  v44 = 0LL;
  RtlCopyFromUser(Srca, Src, 0x28uLL);
  HIDWORD(v44) = 0;
  if ( !Srca[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_14;
LABEL_13:
    WdLogSingleEntry3(3LL, Srca[1], LODWORD(Size[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 94;
    goto LABEL_34;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_13;
LABEL_14:
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    WdLogSingleEntry3(3LL, LODWORD(Size[0]), 0x2000000LL, -1073741811LL);
    WdLogGlobalForLineNumber = 103;
    goto LABEL_34;
  }
  v4 = v44;
  if ( !Size[1] )
  {
    if ( !(_DWORD)v44 )
      goto LABEL_21;
LABEL_20:
    WdLogSingleEntry3(3LL, Size[1], (unsigned int)v44, -1073741811LL);
    WdLogGlobalForLineNumber = 113;
    goto LABEL_34;
  }
  if ( !(_DWORD)v44 )
    goto LABEL_20;
LABEL_21:
  if ( (unsigned int)v44 > 0x2000000 )
  {
    WdLogSingleEntry3(3LL, (unsigned int)v44, 0x2000000LL, -1073741811LL);
    WdLogGlobalForLineNumber = 122;
    goto LABEL_34;
  }
  v46 = 0LL;
  v47 = 0LL;
  v5 = 0LL;
  v37 = 0LL;
  v6 = 0LL;
  v45 = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v46 = (void *)operator new[](LODWORD(Size[0]), 0x4B677844u, 256LL);
    if ( !v46 )
    {
      v7 = -1073741801;
      WdLogSingleEntry2(6LL, LODWORD(Size[0]), -1073741801LL);
      WdLogGlobalForLineNumber = 144;
      v8 = LODWORD(Size[0]);
      v9 = L"Out of memory allocating 0x%I64x bytes for private driver data, returning 0x%I64x";
LABEL_26:
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v9, v8, -1073741801LL, 0LL, 0LL, 0LL);
LABEL_90:
      if ( v6 )
      {
        DXGPROTECTEDSESSION::DestroyProtectedSession((struct DXGPROTECTEDSESSION *)v6, HIDWORD(v44));
        HIDWORD(v44) = 0;
      }
      if ( v5 )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, v5, 0, 0);
      }
      if ( v46 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v46);
      if ( v47 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v47);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit);
      return (unsigned int)v7;
    }
    RtlCopyFromUser(v46, Srca[1], LODWORD(Size[0]));
    v4 = v44;
  }
  if ( v4 )
  {
    v47 = (void *)operator new[](v4, 0x4B677844u, 256LL);
    if ( !v47 )
    {
      v7 = -1073741801;
      WdLogSingleEntry2(6LL, (unsigned int)v44, -1073741801LL);
      WdLogGlobalForLineNumber = 172;
      v8 = (unsigned int)v44;
      v9 = L"Out of memory allocating 0x%I64x bytes for private runtime data, returning 0x%I64x";
      goto LABEL_26;
    }
    RtlCopyFromUser(v47, (void *)Size[1], (unsigned int)v44);
  }
  v37 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v38, (unsigned int)Srca[0], Current, &v37);
  v10 = v37;
  if ( !v37 )
  {
    WdLogSingleEntry2(2LL, LODWORD(Srca[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 200;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Srca[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v38);
    goto LABEL_34;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v49, v37);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v10, 1, v13, 0);
  v7 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
  if ( v7 < 0 )
  {
LABEL_39:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v49);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v38);
    goto LABEL_90;
  }
  v52 = *((_QWORD *)v10 + 237);
  if ( !v52 )
  {
    v7 = -1073741637;
    WdLogSingleEntry2(2LL, v10, -1073741637LL);
    WdLogGlobalForLineNumber = 218;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"function is called on a render only device (0x%I64x), returning 0x%I64x.",
      (__int64)v10,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_39;
  }
  v14 = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v50, v14, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v50);
  LODWORD(v37) = HIDWORD(Srca[0]);
  v15 = v48;
  v51 = (DXGPUSHLOCK *)(v48 + 31);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v48 + 31));
  v16 = ((unsigned int)v37 >> 6) & 0xFFFFFF;
  if ( !(v16 < *((_DWORD *)v15 + 74)
      && (v18 = *((_DWORD *)v15[35] + 4 * v16 + 2), (unsigned int)v37 >> 30 == ((v18 >> 5) & 3))
      && (v18 & 0x2000) == 0
      && (v18 & 0x1F) != 0) )
    goto LABEL_48;
  v20 = v15[35];
  if ( (*((_BYTE *)v20 + 16 * v16 + 8) & 0x1F) != 0xB )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_48:
    v19 = 0LL;
    goto LABEL_52;
  }
  v19 = *((_QWORD *)v20 + 2 * v16);
LABEL_52:
  v21 = v51;
  _InterlockedDecrement((volatile signed __int32 *)v51 + 4);
  ExReleasePushLockSharedEx(v21, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    v22 = (__int64)v48;
    WdLogSingleEntry2(2LL, v48, HIDWORD(Srca[0]));
    WdLogGlobalForLineNumber = 240;
    v23 = L"Invalid sync object, process 0x%I64x, handle 0x%I64x";
LABEL_54:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v22, HIDWORD(Srca[0]), 0LL, 0LL, 0LL);
LABEL_55:
    v7 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v50);
    goto LABEL_39;
  }
  v24 = *(struct DXGDEVICE **)(v19 + 16);
  if ( v24 != v10 )
  {
    WdLogSingleEntry3(2LL, HIDWORD(Srca[0]), v24, v10);
    WdLogGlobalForLineNumber = 253;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%x object belongs to a different device 0x%p that 0x%p passed.",
      HIDWORD(Srca[0]),
      *(_QWORD *)(v19 + 16),
      (__int64)v10,
      0LL,
      0LL);
    goto LABEL_55;
  }
  v5 = *(struct DXGDEVICE **)(v19 + 32);
  v37 = v5;
  DXGSYNCOBJECT::AddReference(v5);
  v25 = *((_DWORD *)v5 + 105);
  if ( v25 == 5 || (v26 = v25 == 7, v27 = 0, v26) )
    v27 = 1;
  if ( !v27 )
  {
    v22 = (__int64)v48;
    WdLogSingleEntry2(2LL, v48, HIDWORD(Srca[0]));
    WdLogGlobalForLineNumber = 278;
    v23 = L"not monitored/native fence object, process 0x%I64x, handle 0x%I64x";
    goto LABEL_54;
  }
  if ( (*((_DWORD *)v5 + 106) & 2) == 0 )
  {
    WdLogSingleEntry2(2LL, v5, -1073741811LL);
    WdLogGlobalForLineNumber = 287;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Not NT shared Monitored/Native Fence: Protected session's sync object 0x%I64x does not use NT security sh"
                "aring. Returning 0x%I64x.",
      (__int64)v5,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_55;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v50);
  v7 = ADAPTER_DISPLAY::CreateProtectedSession(*(DXGADAPTER ***)(v52 + 3160), &v37, &v46, Size[0], &v47, v44, &v45);
  if ( v7 < 0 )
  {
    v6 = (volatile signed __int32 *)v45;
    if ( v45 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 305;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProtectedSession == NULL", 305LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v49);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v38);
    v5 = v37;
    goto LABEL_90;
  }
  v5 = v37;
  if ( v37 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 312;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject == NULL", 312LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v46 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 313;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pKMPrivateDriverData == NULL", 313LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v47 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 314;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pKMPrivateRuntimeData == NULL", 314LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (volatile signed __int32 *)v45;
  v7 = DXGPROTECTEDSESSION::Open(v45, (unsigned int *)&v44 + 1);
  if ( v7 < 0 )
    goto LABEL_39;
  if ( _InterlockedExchangeAdd(v6 + 20, 0xFFFFFFFF) <= 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 331;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"c > 0", 331LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !HIDWORD(v44) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 337;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"KMCreateProtectedSession.hHandle", 337LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v49);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v38);
  RtlCopyToUser(v53 + 36, (char *)&v44 + 4, 4uLL);
  v28 = HIDWORD(v44);
  v29 = v51;
  DXGPUSHLOCK::AcquireExclusive(v51);
  v30 = ((unsigned int)v28 >> 6) & 0xFFFFFF;
  v31 = v48;
  if ( (unsigned int)v30 < *((_DWORD *)v48 + 74) )
  {
    v32 = v48[35];
    if ( (((unsigned int)v28 >> 25) & 0x60) == (*((_BYTE *)v32 + 16 * v30 + 8) & 0x60)
      && (*((_DWORD *)v32 + 4 * v30 + 2) & 0x1F) != 0 )
    {
      v33 = 16 * ((v28 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)((_BYTE *)v32 + v33 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)((char *)v31[35] + v33 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)v29 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v29, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
  return 0LL;
}
