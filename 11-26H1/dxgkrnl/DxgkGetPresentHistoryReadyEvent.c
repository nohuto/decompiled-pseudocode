/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x140423AA0
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x140036D6C (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x14036CC90 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  unsigned int v5; // ebx
  struct DXGADAPTER *v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  struct DXGADAPTER **v9; // rax
  int PairingAdapters; // eax
  __int64 v11; // r14
  struct _KTHREAD **v12; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v14; // rcx
  __int64 v16; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp+Fh] BYREF
  DXGADAPTER *v18[2]; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v19[32]; // [rsp+78h] [rbp+27h] BYREF
  struct DXGADAPTER *v20; // [rsp+C8h] [rbp+77h] BYREF

  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v20 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v18, v3, Current, &v20, 1);
    v6 = v20;
    if ( v20 )
    {
      v16 = 0LL;
      v9 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v16);
      PairingAdapters = DxgkpGetPairingAdapters(v6, 0, v9, &v17, 0LL, 0LL, 0);
      v11 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v12 = *(struct _KTHREAD ***)(v16 + 3168);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, v12 + 122, 0);
        DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v19);
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                     (ADAPTER_RENDER *)v12,
                                     (struct DXGAUTOPUSHLOCK *)v19,
                                     1);
        if ( PresentHistoryTokenQueue )
        {
          v14 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v14;
          ObfReferenceObject(v14);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v16, 0LL);
          v5 = 0;
        }
        else
        {
          *a2 = 0LL;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v16, 0LL);
          v5 = -1073741801;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v6, PairingAdapters);
        WdLogGlobalForLineNumber = 6976;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get pairing adapters from adapter 0x%I64x for DxgkGetPresentHistoryReadyEvent (Status = 0x%I64x)!",
          (__int64)v6,
          v11,
          0LL,
          0LL,
          0LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v16, 0LL);
        v5 = v11;
      }
    }
    else
    {
      v7 = v3;
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v7, -1073741811LL);
      WdLogGlobalForLineNumber = 6956;
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v18, v8);
  }
  else
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6945;
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
  }
  return v5;
}
