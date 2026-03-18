/*
 * XREFs of ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1402104CC
 * Callers:
 *     ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1401BFAA0 (-PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?SendUnbindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIH@Z @ 0x1401C1160 (-SendUnbindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIH@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x14020E814 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendUnbindCompositionSurface(DXGSESSIONDATA *this, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  struct _EX_RUNDOWN_REF *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]
  char v14; // [rsp+40h] [rbp-10h]

  v4 = a2;
  v12 = -1;
  v13 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 17007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 17007);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONDATA *)((char *)this + 18920), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *((_QWORD *)this + 2372) )
    ++*((_DWORD *)this + 4742);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  v6 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2372);
  if ( v6 && ExAcquireRundownProtection(v6 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2372) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2372) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      v7 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendUnbindCompositionSurface(
             *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2372) + 88LL),
             v4,
             a3);
      v8 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry2(3LL, v4, v7);
        WdLogGlobalForLineNumber = 2553;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2372) + 72LL) + 64LL));
    }
    else
    {
      v8 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
      WdLogGlobalForLineNumber = 2556;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2372) + 64LL));
  }
  else
  {
    v8 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
    WdLogGlobalForLineNumber = 2556;
  }
  if ( *((_QWORD *)this + 2372) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONDATA *)((char *)this + 18920), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
  return v8;
}
