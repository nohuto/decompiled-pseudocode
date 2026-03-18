/*
 * XREFs of ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x14020F160
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1403CA87C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x14020CB38 (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x14020E778 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
        DXGSESSIONDATA *this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5,
        int a6)
{
  struct DXGFASTMUTEX *v10; // r12
  unsigned int v11; // edi
  struct _EX_RUNDOWN_REF *v12; // rbx
  DXGPROCESSCOPYPROTECTIONMUTEX *v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rcx
  _BYTE v19[16]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-9h] BYREF
  int v21; // [rsp+78h] [rbp+7h] BYREF
  __int64 v22; // [rsp+80h] [rbp+Fh]
  char v23; // [rsp+88h] [rbp+17h]

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 17010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 17010);
  v10 = (DXGSESSIONDATA *)((char *)this + 18920);
  v11 = -1073741808;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DXGSESSIONDATA *)((char *)this + 18920), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v12 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2372);
  if ( v12 )
  {
    DXGVAILGUESTOBJECT::AddReference((DXGVAILGUESTOBJECT *)v12);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
    if ( ExAcquireRundownProtection(v12 + 8) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v12[9].Count + 64)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)&v12[2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
        v14 = *(__int64 **)(v12[11].Count + 8);
        if ( v14 )
        {
          v15 = *v14;
          if ( a6 )
            v16 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD, void *, unsigned int *))(v15 + 32))(
                    v14,
                    a2,
                    a3,
                    a4,
                    a5);
          else
            v16 = (*(__int64 (__fastcall **)(__int64 *, void *, _QWORD))(v15 + 40))(v14, a2, a3);
          v11 = v16;
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 2776;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to get VAIL composition object",
            2776LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v12[9].Count + 64));
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
      }
      else
      {
        v11 = -2147483611;
        WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
        WdLogGlobalForLineNumber = 2786;
      }
      ExReleaseRundownProtection(v12 + 8);
    }
    else
    {
      v11 = -2147483611;
      WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
      WdLogGlobalForLineNumber = 2795;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, v10, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    DXGVAILGUESTOBJECT::ReleaseReference((DXGVAILGUESTOBJECT *)v12);
    v13 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v20;
  }
  else
  {
    v13 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v19;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
  return v11;
}
