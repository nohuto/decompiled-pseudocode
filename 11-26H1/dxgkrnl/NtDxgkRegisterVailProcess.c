/*
 * XREFs of NtDxgkRegisterVailProcess @ 0x140210A80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000CFBC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1400831C8 (-GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ.c)
 *     ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x1400997B0 (-AccessCheck@DxgkCompositionObject@@QEBAJKD@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401F795C (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x14020E4A0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1403CBD1C (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 */

__int64 __fastcall NtDxgkRegisterVailProcess(void *Src)
{
  struct DXGVAILOBJECT *v2; // rdi
  int NumStartedVirtualGpu; // r15d
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  int v7; // ebx
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rsi
  struct DXGGLOBAL *Global; // rax
  _QWORD *v11; // r8
  _QWORD *i; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp-88h] BYREF
  __int64 v17; // [rsp+58h] [rbp-80h]
  char v18; // [rsp+60h] [rbp-78h]
  _BYTE v19[24]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v20[16]; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v21[24]; // [rsp+90h] [rbp-48h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-30h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2214;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2214);
  v22 = 0LL;
  v2 = 0LL;
  NumStartedVirtualGpu = 0;
  if ( DXGVAILOBJECT::IsFeatureEnabled() )
  {
    RtlCopyFromUser(&v22, Src, 0x10uLL);
    Current = DXGPROCESS::GetCurrent();
    if ( Current )
    {
      KeEnterCriticalRegion();
      v7 = -1073741275;
      v9 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v19,
        (struct _KTHREAD **)Global + 62);
      v11 = (_QWORD *)((char *)DXGGLOBAL::GetGlobal() + 1704);
      for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
      {
        v13 = i[35] - v22;
        if ( !v13 )
          v13 = i[36] - *((_QWORD *)&v22 + 1);
        if ( !v13 )
        {
          v9 = (struct _KTHREAD **)(i - 1);
          break;
        }
      }
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v19);
      if ( v9 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, v9 + 8);
        v2 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v9);
        if ( v2 )
        {
          NumStartedVirtualGpu = DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(v9);
          v7 = 0;
        }
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v21);
      }
      if ( v7 >= 0 )
      {
        v7 = DxgkCompositionObject::AccessCheck(v2);
        if ( v7 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v19);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
          DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v20, Current);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
          DXGPROCESS::SetVailObject(Current, v2);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
          *((_DWORD *)v2 + 34) = PsGetCurrentProcessSessionId();
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 868;
        }
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 849;
      }
      if ( !NumStartedVirtualGpu )
      {
        v7 = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = -1071775727LL;
        WdLogGlobalForLineNumber = 893;
      }
      if ( v2 )
        DxgkCompositionObject::Release(v2);
      KeLeaveCriticalRegion();
    }
    else
    {
      v7 = -1073741786;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 801;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context. Returning 0x%I64x",
        -1073741786LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    return (unsigned int)v7;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 782;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return 3221225659LL;
  }
}
