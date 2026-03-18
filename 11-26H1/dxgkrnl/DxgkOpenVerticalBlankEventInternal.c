/*
 * XREFs of DxgkOpenVerticalBlankEventInternal @ 0x1401B7D10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140016D90 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14003C2B4 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?OpenVerticalBlankEvent@REMOTE_VSYNC@@QEAAJKDPEAPEAX@Z @ 0x1401FD490 (-OpenVerticalBlankEvent@REMOTE_VSYNC@@QEAAJKDPEAPEAX@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x140360A60 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?OpenVerticalBlankEventHandle@ADAPTER_DISPLAY@@QEAAJIKDPEAPEAX@Z @ 0x1404263B0 (-OpenVerticalBlankEventHandle@ADAPTER_DISPLAY@@QEAAJIKDPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpenVerticalBlankEventInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        void **a5)
{
  __int64 v7; // r15
  __int64 v8; // rbx
  struct _KTHREAD **Current; // rax
  unsigned int v10; // ebx
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  DXGGLOBAL *Global; // rax
  REMOTE_VSYNC *v16; // rcx
  int PairingAdapters; // eax
  __int64 v18; // r12
  struct DXGADAPTER *v19; // rdi
  struct DXGADAPTER *v20; // rbx
  int v21; // esi
  struct DXGADAPTER *v23; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v24; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  DXGADAPTER *v27[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[56]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[144]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = a2;
  v8 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( !a5 )
    {
      v10 = -1073741811;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 7869;
      return v10;
    }
    *a5 = 0LL;
    if ( (a3 & 2) != 0 )
      return 3221225506LL;
    v23 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v27, v8, Current, &v23, 1);
    v12 = v23;
    if ( !v23 )
    {
      v13 = v8;
      v10 = -1073741811;
      WdLogSingleEntry2(3LL, v13, -1073741811LL);
      WdLogGlobalForLineNumber = 7887;
LABEL_37:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v27, v14);
      return v10;
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      if ( *((_BYTE *)v12 + 209)
        && (Global = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(Global) + 4742)) )
      {
        v16 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1088);
      }
      else
      {
        v16 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1032);
      }
      v10 = REMOTE_VSYNC::OpenVerticalBlankEvent(v16, a3, a4, a5);
      goto LABEL_37;
    }
    v24 = 0LL;
    v23 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v12, v7, &v24, &v26, &v23, &v25, 0);
    v18 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(2LL, v12, v7, PairingAdapters);
      WdLogGlobalForLineNumber = 7928;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
        (__int64)v12,
        v7,
        v18,
        0LL,
        0LL);
      v10 = v18;
      goto LABEL_37;
    }
    v19 = v24;
    v20 = v23;
    if ( !v24 || !v23 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7932;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pRenderAdapter != nullptr) && (pDisplayAdapter != nullptr)",
        7932LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v19, v20);
    DXGADAPTER::ReleaseReference(v19);
    DXGADAPTER::ReleaseReference(v20);
    if ( *((_DWORD *)v20 + 40) == 1 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v28,
        v19,
        v20);
      if ( *((_DWORD *)v19 + 50) != 1 || *((_DWORD *)v20 + 50) != 1 )
      {
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v28);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
        v10 = -1073741130;
        goto LABEL_37;
      }
      if ( (unsigned int)v7 >= *(_DWORD *)(*((_QWORD *)v20 + 395) + 96LL) )
      {
        v10 = -1073741811;
        WdLogSingleEntry2(3LL, v7, -1073741811LL);
        WdLogGlobalForLineNumber = 7955;
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v28);
        goto LABEL_36;
      }
      if ( !DXGADAPTER::IsVSyncAvailable(v20, v7) )
      {
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v28);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
        v10 = -1071775738;
        goto LABEL_37;
      }
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v28);
    }
    v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL);
    if ( v21 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
      v10 = v21;
      goto LABEL_37;
    }
    if ( !*((_QWORD *)v19 + 396) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7971;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderAdapter->IsRenderAdapter()",
        7971LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_QWORD *)v20 + 395) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7972;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        7972LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v10 = ADAPTER_DISPLAY::OpenVerticalBlankEventHandle(*((ADAPTER_DISPLAY **)v20 + 395), v7, a3, a4, a5);
LABEL_36:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    goto LABEL_37;
  }
  v10 = -1073741811;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 7861;
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
  return v10;
}
