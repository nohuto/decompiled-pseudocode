/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x14031FE84
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x14031F6F0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  struct DXGADAPTER *v6; // rdi
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rax
  LONG HighPart; // [rsp+54h] [rbp-C4h]
  unsigned __int64 v12; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-B8h] BYREF

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v12);
  v6 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10432;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pAdapterIn->IsCoreResourceSharedOwner()",
        10432LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, v6, 0LL);
    DXGADAPTER::ReleaseReference(v6);
    v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry3(2LL, HighPart, a1.LowPart, v7);
      WdLogGlobalForLineNumber = 10447;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)",
        HighPart,
        a1.LowPart,
        v8,
        0LL,
        0LL);
    }
    else
    {
      v9 = *((_QWORD *)v6 + 395);
      if ( v9 )
      {
        *a2 = *(unsigned __int8 *)(v9 + 290);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 10454;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The selected adapter is render-only",
          10454LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v8) = -1073741811;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry2(2LL, HighPart, a1.LowPart);
    WdLogGlobalForLineNumber = 10425;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsAdapterVirtualTopologyEnabled function.",
      HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
