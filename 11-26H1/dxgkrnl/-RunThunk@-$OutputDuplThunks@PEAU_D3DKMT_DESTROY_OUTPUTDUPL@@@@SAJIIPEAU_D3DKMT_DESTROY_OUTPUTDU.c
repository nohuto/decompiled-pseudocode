/*
 * XREFs of ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403DB80C
 * Callers:
 *     DxgkDestroyOutputDuplInternal @ 0x14018B870 (DxgkDestroyOutputDuplInternal.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1403DB900 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_DESTROY_OUTPUTDUPL *>::RunThunk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  struct _KTHREAD **Current; // rax
  unsigned int v7; // ebx
  struct DXGADAPTER *v9; // [rsp+50h] [rbp-28h] BYREF
  DXGADAPTER *v10; // [rsp+58h] [rbp-20h] BYREF

  v5 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    v9 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v10, v5, Current, &v9, 1);
    v7 = OutputDuplThunks<_D3DKMT_DESTROY_OUTPUTDUPL *>::RunForAdapter(v9, a4);
    if ( v10 )
      DXGADAPTER::ReleaseReference(v10);
    return v7;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 45;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 45LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
