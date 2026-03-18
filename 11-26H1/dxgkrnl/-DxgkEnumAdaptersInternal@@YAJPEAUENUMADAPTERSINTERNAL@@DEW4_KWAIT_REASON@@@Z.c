/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140369894
 * Callers:
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1403687E8 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x140368B20 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x140369220 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1400463DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x14004C1C8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1400744BC (Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkWaitForPnPTransitionDone @ 0x14038BDD4 (DxgkWaitForPnPTransitionDone.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, char a2, char a3, unsigned int a4)
{
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rcx
  unsigned int ProcessSessionId; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rcx
  bool v20; // zf
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v22; // rax
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // rcx
  struct DXGPROCESS *v25; // rbx
  __int64 v26; // rdx
  unsigned int v27; // ecx
  int v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-28h]
  char v30; // [rsp+60h] [rbp-20h]
  char v31[8]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGPROCESS *v32; // [rsp+70h] [rbp-10h]
  char v33; // [rsp+78h] [rbp-8h]
  char v34; // [rsp+B0h] [rbp+30h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2078);
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1605;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pEnumAdapters != NULL", 1605LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v8);
  v10 = Current;
  if ( Current )
  {
    if ( a3 )
    {
      ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)Current + 7));
      LOBYTE(v14) = a2;
      v15 = DxgkWaitForPnPTransitionDone(a4, v14, ProcessSessionId, 0LL);
      if ( v15 < 0 )
      {
        v16 = v15;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1628;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to wait for PnP notification on current session (ntStatus = 0x%I64x).",
          v16,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v32 = v10;
    v33 = 0;
    v34 = 0;
    if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      v17 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v34, 0);
      v18 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1645;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
          v18,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v34);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v31);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
        if ( !v30 )
          return (unsigned int)v18;
        v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_41:
        if ( !v20 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
        return (unsigned int)v18;
      }
    }
    else if ( a2 == 1 )
    {
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v31, 0);
    }
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    Global = DXGGLOBAL::GetGlobal();
    LODWORD(v18) = DXGGLOBAL::IterateAdaptersWithCallback(
                     (__int64)Global,
                     (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
                     (__int64)a1,
                     4);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1682;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1682LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1683;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1683LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)v18 < 0 )
      goto LABEL_36;
    v22 = DXGGLOBAL::GetGlobal();
    LODWORD(v18) = DXGGLOBAL::IterateAdaptersWithCallback(
                     (__int64)v22,
                     (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
                     (__int64)a1,
                     3);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1695;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1695LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1696;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1696LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)v18 < 0 )
      goto LABEL_36;
    v23 = DXGGLOBAL::GetGlobal();
    LODWORD(v18) = DXGGLOBAL::IterateAdaptersWithCallback(
                     (__int64)v23,
                     (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
                     (__int64)a1,
                     5);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1709;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1709LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1710;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1710LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)v18 < 0 )
    {
LABEL_36:
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1716;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to iterate all the adapters (ntStatus = 0x%I64x).",
        (int)v18,
        0LL,
        0LL,
        0LL,
        0LL);
      v25 = DXGPROCESS::GetCurrent(v24);
      while ( *(_DWORD *)a1 )
      {
        v26 = *((_QWORD *)a1 + 2);
        v27 = *(_DWORD *)a1 - 1;
        *(_DWORD *)a1 = v27;
        DXGADAPTER::DestroyHandle(v25, *(_DWORD *)(v26 + 20LL * v27));
      }
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v34);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return (unsigned int)v18;
    v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
    goto LABEL_41;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 1611;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  }
  return 3221225485LL;
}
