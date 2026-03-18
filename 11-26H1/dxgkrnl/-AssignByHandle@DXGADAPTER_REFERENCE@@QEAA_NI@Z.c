/*
 * XREFs of ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403C420C
 * Callers:
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1401B5CFC (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401B8D08 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1401C7774 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkGetNominalRefreshRateInfo @ 0x1401CFB9C (DxgkGetNominalRefreshRateInfo.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1403C4138 (DxgkGetDeviceObjectFromAdapter.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGADAPTER_REFERENCE::AssignByHandle(struct DXGADAPTER **this, unsigned int a2)
{
  DXGADAPTER *v4; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  DXGADAPTER *v7; // rcx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  unsigned __int64 v11; // rdx
  DXGADAPTER *v12[3]; // [rsp+50h] [rbp-18h] BYREF

  v4 = *this;
  if ( v4 )
  {
    DXGADAPTER::ReleaseReference(v4);
    *this = 0LL;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v4);
  if ( !Current )
  {
    PsGetCurrentProcess(v6);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12845;
    CurrentProcess = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current process 0x%I64x does not have DXGPROCESS.",
      CurrentProcess,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v12, a2, Current, this, 1);
  if ( !*this )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 12852;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v12, v11);
    return 0;
  }
  _InterlockedIncrement64((volatile signed __int64 *)*this + 3);
  v7 = v12[0];
  this[1] = (struct DXGADAPTER *)-1LL;
  if ( v7 )
    DXGADAPTER::ReleaseReference(v7);
  return 1;
}
