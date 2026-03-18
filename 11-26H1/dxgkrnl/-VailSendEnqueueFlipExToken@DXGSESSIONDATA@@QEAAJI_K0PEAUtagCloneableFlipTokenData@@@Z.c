/*
 * XREFs of ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x14020FB08
 * Callers:
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1401BF050 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1401C0914 (-SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI_K0PEAUtagCloneableFlipTokenDa.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x14020E814 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendEnqueueFlipExToken(
        DXGSESSIONDATA *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct tagCloneableFlipTokenData *a5)
{
  __int64 v7; // r15
  struct _EX_RUNDOWN_REF *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  char v17; // [rsp+50h] [rbp-10h]

  v7 = a2;
  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 17008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 17008);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGSESSIONDATA *)((char *)this + 18920), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( *((_QWORD *)this + 2372) )
    ++*((_DWORD *)this + 4742);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  v9 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2372);
  if ( v9 && ExAcquireRundownProtection(v9 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2372) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2372) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
      v10 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendEnqueueFlipExToken(
              *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2372) + 88LL),
              v7,
              a3,
              a4,
              a5);
      v11 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry4(3LL, v7, a3, a4, v10);
        WdLogGlobalForLineNumber = 2589;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2372) + 72LL) + 64LL));
    }
    else
    {
      v11 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
      WdLogGlobalForLineNumber = 2592;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2372) + 64LL));
  }
  else
  {
    v11 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
    WdLogGlobalForLineNumber = 2592;
  }
  if ( *((_QWORD *)this + 2372) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGSESSIONDATA *)((char *)this + 18920), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return v11;
}
