/*
 * XREFs of DxgkGetPostCompositionCaps @ 0x140392370
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
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x140392910 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 */

__int64 __fastcall DxgkGetPostCompositionCaps(char *Src)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v4; // r14
  int PairingAdapters; // esi
  struct DXGADAPTER *v6; // rdi
  struct DXGADAPTER *v7; // rsi
  unsigned int v8; // xmm0_4
  __int64 v9; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  struct DXGADAPTER *v14; // [rsp+50h] [rbp-118h] BYREF
  int v15; // [rsp+58h] [rbp-110h] BYREF
  __int64 v16; // [rsp+60h] [rbp-108h]
  char v17; // [rsp+68h] [rbp-100h]
  struct DXGADAPTER *Srca; // [rsp+70h] [rbp-F8h] BYREF
  DXGADAPTER *v19[2]; // [rsp+78h] [rbp-F0h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-E0h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp-D8h] BYREF
  unsigned int v22[6]; // [rsp+98h] [rbp-D0h] BYREF
  _BYTE v23[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2146;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2146);
  *(_OWORD *)v22 = 0LL;
  RtlCopyFromUser(v22, Src, 0x10uLL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( Current )
  {
    v14 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v19, v22[0], Current, &v14, 1);
    v4 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      Srca = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v4, v22[1], &v14, &v20, &Srca, &v21, 0);
      if ( PairingAdapters < 0 )
      {
        v6 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v4, v22[1], &v14, &v20, 0LL, 0LL, 0);
      }
      else
      {
        v6 = Srca;
      }
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry2(2LL, v4, v22[1]);
        WdLogGlobalForLineNumber = 12165;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
          (__int64)v4,
          v22[1],
          0LL,
          0LL,
          0LL);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v19, v13);
      }
      else
      {
        if ( v6 && !*((_QWORD *)v6 + 395) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 12171;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
            12171LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v7 = v14;
        if ( !v14 || !*((_QWORD *)v14 + 396) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 12173;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
            12173LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v7, v6);
        DXGADAPTER::ReleaseReference(v7);
        if ( v6 )
          DXGADAPTER::ReleaseReference(v6);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23, 0LL);
        if ( PairingAdapters >= 0 )
        {
          if ( !v6 || (**((_DWORD **)v6 + 381) & 0x800000) != 0 )
          {
            v8 = LODWORD(FLOAT_1_0);
            *(float *)&v22[2] = FLOAT_1_0;
            v22[3] = 1065353216;
          }
          else
          {
            PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                                *((ADAPTER_DISPLAY **)v6 + 395),
                                v22[1],
                                (float *)&v22[2],
                                (float *)&v22[3]);
            v8 = v22[2];
          }
          LODWORD(Srca) = v8;
          RtlCopyToUser(Src + 8, &Srca, 4uLL);
          LODWORD(v14) = v22[3];
          RtlCopyToUser(Src + 12, &v14, 4uLL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
        if ( v19[0] )
          DXGADAPTER::ReleaseReference(v19[0]);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
      if ( v17 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
      }
      return (unsigned int)PairingAdapters;
    }
    WdLogSingleEntry2(3LL, v22[0], -1073741811LL);
    WdLogGlobalForLineNumber = 12133;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v19, v11);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12122;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
