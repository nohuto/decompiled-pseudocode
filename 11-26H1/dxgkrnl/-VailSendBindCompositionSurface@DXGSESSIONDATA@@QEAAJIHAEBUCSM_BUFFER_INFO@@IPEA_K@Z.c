/*
 * XREFs of ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x14020EEE0
 * Callers:
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401BF2C0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1401C0540 (-SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x14020E814 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendBindCompositionSurface(
        DXGSESSIONDATA *this,
        unsigned int a2,
        int a3,
        const struct CSM_BUFFER_INFO *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rsi
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  _BYTE v15[16]; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  char v18; // [rsp+50h] [rbp-10h]

  v7 = a3;
  v9 = a2;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 17006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 17006);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGSESSIONDATA *)((char *)this + 18920), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( *((_QWORD *)this + 2372) )
    ++*((_DWORD *)this + 4742);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
  v10 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2372);
  if ( v10 && ExAcquireRundownProtection(v10 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2372) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2372) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
      v11 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
              *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2372) + 88LL),
              v9,
              v7,
              a4,
              a5,
              a6);
      v12 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry3(3LL, v9, v7, v11);
        WdLogGlobalForLineNumber = 2524;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2372) + 72LL) + 64LL));
    }
    else
    {
      v12 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
      WdLogGlobalForLineNumber = 2527;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2372) + 64LL));
  }
  else
  {
    v12 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
    WdLogGlobalForLineNumber = 2527;
  }
  if ( *((_QWORD *)this + 2372) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGSESSIONDATA *)((char *)this + 18920), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  return v12;
}
