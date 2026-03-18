/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1403F9B70
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *a1,
        struct _DXGK_DRIVERCAPS *a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct _DXGK_DRIVERCAPS *a5)
{
  struct _DXGK_DRIVERCAPS *v5; // rdi
  struct DXGADAPTER **v10; // rax
  int PairingAdapters; // eax
  __int64 v12; // r14
  struct DXGADAPTER **v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // esi
  __int64 v19; // rcx
  struct DXGADAPTER *v21; // r9
  __int64 v22; // rdx
  struct _DXGK_DRIVERCAPS *v23; // rax
  __int64 v24; // r8
  _OWORD *v25; // rcx
  __int128 v26; // xmm1
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm1
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGADAPTER *v35; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v37; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  char v41; // [rsp+80h] [rbp-80h]
  _BYTE v42[144]; // [rsp+90h] [rbp-70h] BYREF

  v5 = a5;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 3005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 3005);
  memset(a2, 0, 0x250uLL);
  v35 = 0LL;
  v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v35);
  PairingAdapters = DxgkpGetPairingAdapters(a1, 0, v10, &v36, 0LL, 0LL, 0);
  v12 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry2(2LL, a1, PairingAdapters);
    WdLogGlobalForLineNumber = 3234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x in DxgkCddGetDriverCaps (ntStatus = 0x%I64x).",
      (__int64)a1,
      v12,
      0LL,
      0LL,
      0LL);
    if ( v35 )
      DXGADAPTER::ReleaseReference(v35);
    v35 = 0LL;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit);
    return (unsigned int)v12;
  }
  else
  {
    if ( !v35 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3239;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RenderAdapterRef != NULL", 3239LL, 0LL, 0LL, 0LL, 0LL);
    }
    v37 = 0LL;
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v37);
    v14 = DxgkpGetPairingAdapters(a1, 0, 0LL, 0LL, v13, &v38, 0);
    v17 = v14;
    if ( v14 < 0 )
    {
      v34 = WdLogNewEntry5_WdTrace(v16, v15);
      *(_QWORD *)(v34 + 24) = a1;
      *(_QWORD *)(v34 + 32) = v17;
      WdLogGlobalForLineNumber = 3257;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v42, v35, v37);
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42, 0LL);
    if ( v18 >= 0 )
    {
      v21 = v35;
      v22 = 4LL;
      v23 = a5;
      v24 = 4LL;
      v25 = (_OWORD *)((char *)v35 + 2440);
      do
      {
        *(_OWORD *)&v23->HighestAcceptableAddress.LowPart = *v25;
        *(_OWORD *)&v23->ApertureSegmentCommitLimit = v25[1];
        *(_OWORD *)&v23->PointerCaps.0 = v25[2];
        *(_OWORD *)&v23->GammaRampCaps.0 = v25[3];
        *(_OWORD *)&v23->SchedulingCaps.0 = v25[4];
        *(_OWORD *)v23->GpuEngineTopology.Reserved = v25[5];
        *(_OWORD *)&v23->GpuEngineTopology.Reserved[4] = v25[6];
        v23 = (struct _DXGK_DRIVERCAPS *)((char *)v23 + 128);
        v26 = v25[7];
        v25 += 8;
        *(_OWORD *)&v23[-1].SupportSurpriseRemoval = v26;
        --v24;
      }
      while ( v24 );
      *(_OWORD *)&v23->HighestAcceptableAddress.LowPart = *v25;
      *(_OWORD *)&v23->ApertureSegmentCommitLimit = v25[1];
      *(_OWORD *)&v23->PointerCaps.0 = v25[2];
      *(_OWORD *)&v23->GammaRampCaps.0 = v25[3];
      *(_OWORD *)&v23->SchedulingCaps.0 = v25[4];
      if ( v37 )
      {
        v27 = (_OWORD *)((char *)v37 + 2440);
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v27;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = v27[1];
          *(_OWORD *)&a2->PointerCaps.0 = v27[2];
          *(_OWORD *)&a2->GammaRampCaps.0 = v27[3];
          *(_OWORD *)&a2->SchedulingCaps.0 = v27[4];
          *(_OWORD *)a2->GpuEngineTopology.Reserved = v27[5];
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = v27[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v28 = v27[7];
          v27 += 8;
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v28;
          --v22;
        }
        while ( v22 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v27;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = v27[1];
        *(_OWORD *)&a2->PointerCaps.0 = v27[2];
        *(_OWORD *)&a2->GammaRampCaps.0 = v27[3];
        v29 = v27[4];
      }
      else
      {
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v5->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v5->ApertureSegmentCommitLimit;
          *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v5->PointerCaps.0;
          *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v5->GammaRampCaps.0;
          *(_OWORD *)&a2->SchedulingCaps.0 = *(_OWORD *)&v5->SchedulingCaps.0;
          *(_OWORD *)a2->GpuEngineTopology.Reserved = *(_OWORD *)v5->GpuEngineTopology.Reserved;
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = *(_OWORD *)&v5->GpuEngineTopology.Reserved[4];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v32 = *(_OWORD *)&v5->GpuEngineTopology.Reserved[8];
          v5 = (struct _DXGK_DRIVERCAPS *)((char *)v5 + 128);
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v32;
          --v22;
        }
        while ( v22 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v5->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v5->ApertureSegmentCommitLimit;
        *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v5->PointerCaps.0;
        *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v5->GammaRampCaps.0;
        v29 = *(_OWORD *)&v5->SchedulingCaps.0;
      }
      v30 = v36;
      *(_OWORD *)&a2->SchedulingCaps.0 = v29;
      *a3 = v21;
      *a4 = v30;
      v35 = 0LL;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
      if ( v37 )
        DXGADAPTER::ReleaseReference(v37);
      v37 = 0LL;
      if ( v35 )
        DXGADAPTER::ReleaseReference(v35);
      v35 = 0LL;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit);
      return 0LL;
    }
    else
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
      if ( v37 )
        DXGADAPTER::ReleaseReference(v37);
      v37 = 0LL;
      if ( v35 )
        DXGADAPTER::ReleaseReference(v35);
      v35 = 0LL;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( v41 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
      }
      return (unsigned int)v18;
    }
  }
}
