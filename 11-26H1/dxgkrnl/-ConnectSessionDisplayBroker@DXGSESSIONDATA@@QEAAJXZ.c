/*
 * XREFs of ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1401C7154
 * Callers:
 *     DxgkDispMgrOperation @ 0x14040BE80 (DxgkDispMgrOperation.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ConnectDisplayBroker@DispBrokerClient@@QEAAJXZ @ 0x140403CEC (-ConnectDisplayBroker@DispBrokerClient@@QEAAJXZ.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x140415298 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ @ 0x140435A30 (-SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::ConnectSessionDisplayBroker(DXGSESSIONDATA *this)
{
  signed int v2; // eax
  __int64 v3; // rsi
  int v5; // eax
  __int64 v6; // rbx
  struct DXGGLOBAL *Global; // rax
  int refreshed; // eax
  __int64 v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+20h] [rbp-38h]

  v2 = DispBrokerClient::ConnectDisplayBroker((DXGSESSIONDATA *)((char *)this + 18984));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = DXGSESSIONDATA::SendCachedIddDisplayConfigRequest(this);
    if ( v5 == -1073741749 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1931;
    }
    else if ( v5 < 0 )
    {
      v6 = v5;
      WdLogSingleEntry3(2LL, *(unsigned int *)this, v5, 0LL);
      v11 = *(unsigned int *)this;
      WdLogGlobalForLineNumber = 1938;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to re-send IDD display config request in session 0x%I64x, (Status = 0x%I64x).",
        v11,
        v6,
        0LL,
        0LL,
        0LL);
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::IterateAdaptersWithCallback(
        Global,
        lambda_cbfcde231c2a8d1b9d404329183532d4_::_lambda_invoker_cdecl_,
        this,
        4LL);
    }
    refreshed = DXGSESSIONDATA::SendCachedAsyncRefreshOrientation(this);
    if ( refreshed < 0 )
    {
      v9 = refreshed;
      WdLogSingleEntry2(2LL, *(unsigned int *)this, refreshed);
      v12 = *(unsigned int *)this;
      WdLogGlobalForLineNumber = 2009;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to re-send cached async refresh orientation request for session 0x%I64x, (Status = 0x%I64x).",
        v12,
        v9,
        0LL,
        0LL,
        0LL);
    }
    return 0LL;
  }
  else
  {
    DxgkLogCodePointPacketForSession(108, *(unsigned int *)this, v2, 0, 0, 0LL);
    WdLogSingleEntry2(2LL, *(unsigned int *)this, v3);
    v10 = *(unsigned int *)this;
    WdLogGlobalForLineNumber = 1908;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to connect display broker in session 0x%I64x, (Status = 0x%I64x).",
      v10,
      v3,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
}
