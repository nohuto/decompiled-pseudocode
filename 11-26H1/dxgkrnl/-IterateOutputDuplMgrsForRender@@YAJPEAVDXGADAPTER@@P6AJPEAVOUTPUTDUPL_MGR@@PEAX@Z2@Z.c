/*
 * XREFs of ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1402E68A4
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401A4780 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1403A379C (OutputDuplProcessDestroyDevice.c)
 *     OutputDuplProcessTerminateForWddm @ 0x1403F608C (OutputDuplProcessTerminateForWddm.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1402E6B8C (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
 */

__int64 __fastcall IterateOutputDuplMgrsForRender(
        struct DXGADAPTER *a1,
        __int64 (__fastcall *a2)(__int64, void *),
        void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  struct DXGGLOBAL *Global; // rsi
  DXGFASTMUTEX *v10; // rcx
  _QWORD **v11; // rsi
  _QWORD *i; // rbx
  _QWORD *v13; // rax
  struct _KTHREAD **v14; // rbx
  int v16; // edi
  _QWORD *v17; // rcx
  struct _KTHREAD **v18; // [rsp+50h] [rbp-30h] BYREF
  char v19; // [rsp+58h] [rbp-28h]
  _QWORD v20[4]; // [rsp+60h] [rbp-20h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11448;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11448LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)a1 + 395);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 120)) == 0 || (result = a2(v7, a3), (int)result >= 0) )
  {
    v20[0] = *(_QWORD *)((char *)a1 + 412);
    v20[1] = a2;
    v20[2] = a3;
    Global = DXGGLOBAL::GetGlobal();
    v19 = 0;
    v10 = (struct DXGGLOBAL *)((char *)Global + 1536);
    v18 = (struct _KTHREAD **)((char *)Global + 1536);
    if ( Global == (struct DXGGLOBAL *)-1536LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
      v10 = (DXGFASTMUTEX *)v18;
    }
    if ( DXGFASTMUTEX::IsOwner(v10) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 635;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
    v11 = (_QWORD **)((char *)Global + 1584);
    for ( i = *v11; ; i = (_QWORD *)*i )
    {
      v13 = 0LL;
      if ( i != v11 )
        v13 = i;
      if ( !v13 )
        break;
      v17 = i;
      if ( i == v11 )
        v17 = 0LL;
      v16 = lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(v17, v20);
      if ( v16 < 0 )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v18);
        return (unsigned int)v16;
      }
    }
    if ( v19 )
    {
      v14 = v18;
      v19 = 0;
      if ( v18[3] != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v18, 0LL, 0LL);
        WdLogGlobalForLineNumber = 553;
      }
      if ( *((int *)v14 + 8) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 556;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*((_DWORD *)v14 + 8))-- == 1 )
      {
        v14[3] = 0LL;
        ExReleasePushLockExclusiveEx(v14 + 1, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    return 0;
  }
  return result;
}
