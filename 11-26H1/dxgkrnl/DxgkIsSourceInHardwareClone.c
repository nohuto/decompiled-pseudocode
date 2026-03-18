/*
 * XREFs of DxgkIsSourceInHardwareClone @ 0x1403FF5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  DXGADAPTER *v8; // r15
  int v9; // eax
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+20h] [rbp-E0h]
  __int64 HighPart; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+28h] [rbp-D8h]
  __int64 v19; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  char v24; // [rsp+68h] [rbp-98h]
  _BYTE v25[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = a2;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2175;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2175);
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v21);
  v8 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v7, 0LL);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v9);
      LowPart = a1->LowPart;
      HighPart = a1->HighPart;
      WdLogGlobalForLineNumber = 9365;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)",
        HighPart,
        LowPart,
        v10,
        0LL,
        0LL);
    }
    else
    {
      LODWORD(v21) = 0;
      v11 = DmmEnumClientVidPnPathTargetsFromSource(v8, v4, 1LL, (unsigned int *const)&v21);
      v10 = v11;
      if ( v11 >= 0 )
      {
        *a3 = v21 != -1;
      }
      else
      {
        WdLogSingleEntry4(2LL, a1->HighPart, a1->LowPart, v4, v11);
        v18 = a1->LowPart;
        v15 = a1->HighPart;
        WdLogGlobalForLineNumber = 9382;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed in calling DmmEnumClientVidPnPathTargetsFromSource for adapter luid (0x%I64x::0x%I64x) and sou"
                    "rce (0x%I64x) with status (0x%I64x)",
          v15,
          v18,
          v4,
          v10,
          0LL);
      }
    }
    DXGADAPTER::ReleaseReference(v8);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    v19 = a1->LowPart;
    v16 = a1->HighPart;
    WdLogGlobalForLineNumber = 9392;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Can't reference adapter by luid (0x%I64x::0x%I64x).",
      v16,
      v19,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
