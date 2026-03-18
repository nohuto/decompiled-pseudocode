/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140433430
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1403CF7B4 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  D3DKMT_HANDLE hAdapter; // ebx
  __int64 CurrentProcess; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  unsigned int v14; // ebx
  struct DXGADAPTER *v15; // rsi
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  D3DKMT_HANDLE v21; // ebx
  __int64 v22; // rax
  int DisplayModeList; // eax
  UINT v24; // ecx
  UINT ModeCount; // eax
  struct _D3DKMT_DISPLAYMODE *v26; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v31[7]; // [rsp+51h] [rbp-AFh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h]
  char v34; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_DISPLAYMODE *v35; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v36; // [rsp+78h] [rbp-88h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v38[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[144]; // [rsp+C0h] [rbp-40h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 3004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 3004);
  v31[0] = 0;
  memset(&Src, 0, sizeof(Src));
  if ( !a1 )
  {
    hAdapter = a2->hAdapter;
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry3(2LL, -1073741811LL, CurrentProcess, hAdapter);
    v7 = a2->hAdapter;
    WdLogGlobalForLineNumber = 1291;
    v9 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status=0x%I64x EPROCESS=0x%I64x Invalid hAdapter (0x%I64x) specified",
      -1073741811LL,
      v9,
      v7,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  VidPnSourceId = a2->VidPnSourceId;
  v36 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, 0LL, 0LL, &v36, &v41, 0);
  v14 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, a1, a2->VidPnSourceId, PairingAdapters);
    WdLogGlobalForLineNumber = 1315;
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit);
    return v14;
  }
  v15 = v36;
  if ( !v36 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1319;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1319LL, 0LL, 0LL, 0LL, 0LL);
  }
  DxgkWaitForMonitorEventDoneInternal(v15);
  v30 = 0;
  v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v30, 0);
  v17 = v16;
  if ( v16 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v42, v15, 0LL);
    v39 = 0LL;
    v40 = 0;
    DXGADAPTER::ReleaseReference(v15);
    v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42, 0LL);
    v17 = v19;
    if ( v19 >= 0 )
    {
      if ( !*((_QWORD *)v15 + 395) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1360;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          1360LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      Src.VidPnSourceId = a2->VidPnSourceId;
      v35 = 0LL;
      DisplayModeList = DxgkpGetDisplayModeList(
                          (ADAPTER_DISPLAY **)v15,
                          (struct COREADAPTERACCESS *)v42,
                          (struct DXGAUTOPUSHLOCK *)v38,
                          0LL,
                          &Src,
                          (const struct _D3DKMT_DISPLAYMODE **)&v35,
                          v31);
      v14 = DisplayModeList;
      if ( DisplayModeList >= 0 )
      {
        v24 = (v35 != 0LL) + Src.ModeCount;
        if ( a2->pModeList )
        {
          ModeCount = a2->ModeCount;
          if ( ModeCount >= v24 )
          {
            memmove(a2->pModeList, Src.pModeList, 44LL * Src.ModeCount);
            v26 = v35;
            if ( v35 )
            {
              pModeList = a2->pModeList;
              v28 = Src.ModeCount;
              *(_OWORD *)&pModeList[v28].Width = *(_OWORD *)&v35->Width;
              *(_OWORD *)&pModeList[v28].RefreshRate.Numerator = *(_OWORD *)&v26->RefreshRate.Numerator;
              *(_QWORD *)&pModeList[v28].DisplayFixedOutput = *(_QWORD *)&v26->DisplayFixedOutput;
              *((_DWORD *)&pModeList[v28].Flags + 1) = *((_DWORD *)&v26->Flags + 1);
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, ModeCount, v24);
            WdLogGlobalForLineNumber = 1392;
            v14 = -1073741789;
          }
        }
        else
        {
          a2->ModeCount = v24;
        }
        if ( v31[0] )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Src.pModeList);
          Src.pModeList = 0LL;
        }
      }
      else
      {
        WdLogSingleEntry2(7LL, a2->VidPnSourceId, DisplayModeList);
        WdLogGlobalForLineNumber = 1374;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v30);
      goto LABEL_35;
    }
    v21 = a2->hAdapter;
    v22 = PsGetCurrentProcess(v20);
    WdLogSingleEntry4(4LL, v17, v22, v21, v15);
    WdLogGlobalForLineNumber = 1353;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1335;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  return (unsigned int)v17;
}
