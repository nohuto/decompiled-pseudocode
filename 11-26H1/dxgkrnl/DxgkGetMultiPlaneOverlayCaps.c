/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x140391CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x140392AC4 (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(char *Src)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v4; // r14
  int PairingAdapters; // esi
  ADAPTER_DISPLAY **v6; // rdi
  struct DXGADAPTER *v7; // rsi
  int v8; // eax
  unsigned int MultiPlaneOverlayCaps; // r15d
  int v10; // edx
  __int64 v11; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGADAPTER *v19; // [rsp+50h] [rbp-128h] BYREF
  int v20; // [rsp+58h] [rbp-120h] BYREF
  __int64 v21; // [rsp+60h] [rbp-118h]
  char v22; // [rsp+68h] [rbp-110h]
  struct DXGADAPTER *Srca; // [rsp+70h] [rbp-108h] BYREF
  DXGADAPTER *v24[2]; // [rsp+78h] [rbp-100h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v26; // [rsp+90h] [rbp-E8h] BYREF
  unsigned int v27[4]; // [rsp+98h] [rbp-E0h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v28[4]; // [rsp+A8h] [rbp-D0h] BYREF
  _BYTE v29[144]; // [rsp+C0h] [rbp-B8h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2145;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2145);
  *(_OWORD *)v27 = 0LL;
  *(_OWORD *)&v28[0].0 = 0LL;
  RtlCopyFromUser(v27, Src, 0x20uLL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( Current )
  {
    v19 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v24, v27[0], Current, &v19, 1);
    v4 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      Srca = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v4, v27[1], &v19, &v25, &Srca, &v26, 0);
      if ( PairingAdapters < 0 )
      {
        v6 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v4, v27[1], &v19, &v25, 0LL, 0LL, 0);
      }
      else
      {
        v6 = (ADAPTER_DISPLAY **)Srca;
      }
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry2(2LL, v4, v27[1]);
        WdLogGlobalForLineNumber = 12012;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
          (__int64)v4,
          v27[1],
          0LL,
          0LL,
          0LL);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v24, v15);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
        return (unsigned int)PairingAdapters;
      }
      else
      {
        if ( v6 && !v6[395] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 12018;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
            12018LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v7 = v19;
        if ( !v19 || !*((_QWORD *)v19 + 396) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 12020;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
            12020LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v7, (struct DXGADAPTER *const)v6);
        DXGADAPTER::ReleaseReference(v7);
        if ( v6 )
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
        v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL);
        MultiPlaneOverlayCaps = v8;
        if ( v8 < 0 )
        {
          WdLogSingleEntry4(3LL, v8, v4, v7, v6);
          WdLogGlobalForLineNumber = 12040;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v24, v17);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
          if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
          return 0LL;
        }
        else
        {
          if ( v6 )
          {
            MultiPlaneOverlayCaps = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                                      v6[395],
                                      v27[1],
                                      &v27[2],
                                      &v27[3],
                                      (unsigned int *)v28,
                                      &v28[1],
                                      (float *)&v28[2],
                                      (float *)&v28[3]);
            v10 = v27[2];
          }
          else
          {
            v10 = 1;
            *(_QWORD *)&v27[2] = 1LL;
            *(_QWORD *)&v28[0].0 = 0LL;
            v28[2].Value = 1065353216;
            v28[3].Value = 1065353216;
          }
          RtlWriteULongToUser((_DWORD *)Src + 2, v10);
          RtlWriteULongToUser((_DWORD *)Src + 3, v27[3]);
          RtlWriteULongToUser((_DWORD *)Src + 4, v28[0].Value);
          RtlWriteULongToUser((_DWORD *)Src + 5, v28[1].Value);
          LODWORD(Srca) = v28[2];
          RtlCopyToUser(Src + 24, &Srca, 4uLL);
          LODWORD(v19) = v28[3];
          RtlCopyToUser(Src + 28, &v19, 4uLL);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
          if ( v24[0] )
            DXGADAPTER::ReleaseReference(v24[0]);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
          if ( v22 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
          }
          return MultiPlaneOverlayCaps;
        }
      }
    }
    WdLogSingleEntry2(3LL, v27[0], -1073741811LL);
    WdLogGlobalForLineNumber = 11981;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v24, v13);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11970;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
