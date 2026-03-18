/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1401B6F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1402D290C (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *a1, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rbp
  char v5; // si
  int PairingAdapters; // eax
  char result; // al
  ADAPTER_DISPLAY **v8; // rdi
  struct DXGADAPTER *v9; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v11[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = 1;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8570;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pAdapterIn", 8570LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, v3, 0LL, 0LL, &v9, &v10, 0);
  if ( PairingAdapters >= 0 )
  {
    v8 = (ADAPTER_DISPLAY **)v9;
    if ( !v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8600;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 8600LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)v8, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL) >= 0 )
    {
      if ( !v8[395] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8614;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          8614LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(v8[395], v3, 0) || ADAPTER_DISPLAY::GetVidPnSourceOwner(v8[395], v3) )
        v5 = 0;
      v2 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
    return v2;
  }
  else
  {
    WdLogSingleEntry3(4LL, a1, v3, PairingAdapters);
    result = 0;
    WdLogGlobalForLineNumber = 8591;
  }
  return result;
}
