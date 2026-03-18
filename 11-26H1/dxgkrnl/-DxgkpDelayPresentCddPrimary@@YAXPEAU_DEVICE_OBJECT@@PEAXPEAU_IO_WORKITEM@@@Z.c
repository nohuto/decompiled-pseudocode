/*
 * XREFs of ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1403E7E90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1401A3F3C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1402D290C (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1403E83FC (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1403E8488 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 */

void __fastcall DxgkpDelayPresentCddPrimary(PVOID IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v5; // dl
  struct DXGSESSIONDATA *v6; // rax
  __int64 v7; // rcx
  struct DXGSESSIONDATA *v8; // r13
  struct _KPROCESS *v9; // rbx
  int CddDeviceAndContextForCurrentSession; // eax
  struct DXGDEVICE *v11; // r14
  __int64 v12; // rbx
  struct DXGCONTEXT *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r9
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rbx
  unsigned __int8 v21; // al
  int v22; // eax
  __int64 v23; // rbx
  struct DXGGLOBAL *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r9
  const char *v27; // rdx
  __int64 HighPart; // [rsp+20h] [rbp-E0h]
  __int64 LowPart; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+28h] [rbp-D8h]
  struct DXGCONTEXT *v32; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v33; // [rsp+58h] [rbp-A8h] BYREF
  char v34; // [rsp+60h] [rbp-A0h]
  _BYTE v35[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  char v37; // [rsp+78h] [rbp-88h]
  _QWORD v38[7]; // [rsp+80h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-48h] BYREF
  char v40; // [rsp+E8h] [rbp-18h]
  _BYTE v41[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v42[64]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v43[88]; // [rsp+138h] [rbp+38h] BYREF

  v33 = 0LL;
  v32 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 123), v5);
  v8 = v6;
  if ( !v6 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 344;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire console session mode change shared lock.",
      344LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Context);
    return;
  }
  v40 = 0;
  v9 = (struct _KPROCESS *)*((_QWORD *)v6 + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v7) != v9 )
  {
    KeStackAttachProcess(v9, &ApcState);
    v40 = 1;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(Context, &v33, &v32, 0LL, 0);
  v11 = v33;
  if ( CddDeviceAndContextForCurrentSession >= 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v33, v33);
    v14 = *(_QWORD *)(*((_QWORD *)v11 + 237) + 3160LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v38,
      &v32,
      1u,
      v15,
      1);
    v36 = *(_QWORD *)(v14 + 16);
    v37 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v11, 1, v16, 0);
    if ( v38[0] )
    {
      v19 = COREDEVICEACCESS::AcquireExclusive((__int64)v41, 1LL);
      if ( v19 >= 0 )
      {
        v21 = DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v14 + 16));
        v13 = v32;
        if ( v21
          && (!(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v14, Context[1].LowPart)
           || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v14, Context[1].LowPart) == 3) )
        {
          if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v14, Context[1].LowPart, 0) )
          {
            if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v14, Context[1].LowPart) )
            {
              if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible((ADAPTER_DISPLAY *)v14, Context[1].LowPart) )
              {
                v22 = ADAPTER_DISPLAY::PresentCddPrimary(
                        (PERESOURCE **)v14,
                        v13,
                        Context[1].LowPart,
                        (struct COREDEVICEACCESS *)v41);
                if ( v22 < 0 )
                {
                  v23 = v22;
                  WdLogSingleEntry3(2LL, Context[1].LowPart, *(_QWORD *)(v14 + 16), v22);
                  v31 = *(_QWORD *)(v14 + 16);
                  LowPart = Context[1].LowPart;
                  WdLogGlobalForLineNumber = 431;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"PresentFromCdd failed to present the existing Cdd Primary on VidPn source 0x%I64x on adapte"
                              "r 0x%I64x (Status = 0x%I64x).",
                    LowPart,
                    v31,
                    v23,
                    0LL,
                    0LL);
                }
              }
            }
          }
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v38);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v33);
        goto LABEL_22;
      }
      v20 = v19;
      WdLogSingleEntry2(2LL, v11, v19);
      WdLogGlobalForLineNumber = 403;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).",
        (__int64)v11,
        v20,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v38);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v33);
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 394;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory - could not initialize context array lock exclusive.",
        394LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREACCESS::~COREACCESS((COREACCESS *)v43, v17);
      COREACCESS::~COREACCESS((COREACCESS *)v42, v18);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v38);
      if ( v34 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v33 + 17));
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    v12 = CddDeviceAndContextForCurrentSession;
    WdLogSingleEntry3(2LL, Context->HighPart, Context->LowPart, CddDeviceAndContextForCurrentSession);
    v30 = Context->LowPart;
    HighPart = Context->HighPart;
    WdLogGlobalForLineNumber = 374;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get CDD device and context for adapter 0x%I64x%08I64x in console session (Status = 0x%I64x).",
      HighPart,
      v30,
      v12,
      0LL,
      0LL);
  }
  v13 = v32;
LABEL_22:
  v24 = DXGGLOBAL::GetGlobal();
  DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v24 + 123), v8);
  if ( v13 && _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v25 = *((_QWORD *)v13 + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)&v33,
      (struct DXGDEVICE *)v25);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v35,
      *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, v25, 2, v26, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v41, v27);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v25, (struct DXGCONTEXT ***)v13, (struct COREDEVICEACCESS *)v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v33);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v25 + 16), (struct DXGDEVICE *)v25);
  }
  if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v11 + 2), v11);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Context);
  if ( v40 )
    KeUnstackDetachProcess(&ApcState);
}
