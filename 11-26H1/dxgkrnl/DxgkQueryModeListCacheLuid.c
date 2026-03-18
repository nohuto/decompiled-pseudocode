/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x140420FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x14007416C (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, unsigned int a2, struct _LUID *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  const wchar_t *v7; // r9
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rsi
  __int64 PairingAdapters; // rdi
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rbp
  ADAPTER_DISPLAY *v14; // rcx
  __int64 HighPart; // [rsp+20h] [rbp-108h]
  __int64 LowPart; // [rsp+28h] [rbp-100h]
  struct DXGADAPTER *v17; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v19[144]; // [rsp+60h] [rbp-C8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8692LL;
    v7 = L"Caller specified a NULL pointer to DxgkAdapter LUID in DxgkQueryModeListCacheLuid function.";
LABEL_3:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8699LL;
    v7 = L"Caller specified a NULL pointer in pModeListCacheLuid in DxgkQueryModeListCacheLuid function.";
    goto LABEL_3;
  }
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)&v17);
  if ( !v10 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    WdLogGlobalForLineNumber = 8714;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkQueryModeListCacheLuid function.",
      HighPart,
      LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v17 = 0LL;
  PairingAdapters = (int)DxgkpGetPairingAdapters(v10, v3, 0LL, 0LL, &v17, &v18, 0);
  DXGADAPTER::ReleaseReference(v10);
  if ( (int)PairingAdapters >= 0 )
  {
    v12 = v17;
    if ( !v17 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8746;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 8746LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v12, 0LL);
    v13 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
    DXGADAPTER::ReleaseReference(v12);
    if ( (int)v13 >= 0 )
    {
      if ( !*((_QWORD *)v12 + 395) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8768;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          8768LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v14 = (ADAPTER_DISPLAY *)*((_QWORD *)v12 + 395);
      if ( (unsigned int)v3 < *((_DWORD *)v14 + 24) )
      {
        LODWORD(v13) = ADAPTER_DISPLAY::QueryModeListCacheLuid(v14, v3, a3);
      }
      else
      {
        WdLogSingleEntry2(2LL, v3, v12);
        WdLogGlobalForLineNumber = 8778;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified an invalid VidPnSourceId 0x%I64x on DxgAdapter 0x%I64x.",
          v3,
          (__int64)v12,
          0LL,
          0LL,
          0LL);
        LODWORD(v13) = -1073741811;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v12, v13);
      WdLogGlobalForLineNumber = 8763;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared lock on DxgkAdapter 0x%I64x (Status = 0x%I64x).",
        (__int64)v12,
        v13,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry3(4LL, 0LL, v3, PairingAdapters);
    result = (unsigned int)PairingAdapters;
    WdLogGlobalForLineNumber = 8742;
  }
  return result;
}
