/*
 * XREFs of OutputDuplCleanUpPendingList @ 0x14035B7CC
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14035948C (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z @ 0x14035BAD8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1402C70B0 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402C7424 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1402E6B8C (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
 */

void __fastcall OutputDuplCleanUpPendingList(struct DXGDEVICE *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  struct DXGGLOBAL *Global; // rsi
  DXGFASTMUTEX *v5; // rcx
  _QWORD **v6; // rsi
  _QWORD *i; // rbx
  _QWORD *v8; // rax
  DXGGLOBAL *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v14; // rcx
  struct _KTHREAD **v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  const wchar_t *v19; // r9
  DXGFASTMUTEX *v20; // [rsp+50h] [rbp-38h] BYREF
  char v21; // [rsp+58h] [rbp-30h]
  _QWORD v22[4]; // [rsp+60h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 237);
  if ( !v1 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
    if ( !v1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 11448;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11448LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v3 = *(_QWORD *)(v1 + 3160);
  if ( !v3
    || (v16 = *(_QWORD *)(v3 + 120)) == 0
    || (int)lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(v16, a1) >= 0 )
  {
    v22[0] = *(_QWORD *)(v1 + 412);
    v22[1] = lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_;
    v22[2] = a1;
    Global = DXGGLOBAL::GetGlobal();
    v21 = 0;
    v5 = (struct DXGGLOBAL *)((char *)Global + 1536);
    v20 = (struct DXGGLOBAL *)((char *)Global + 1536);
    if ( Global == (struct DXGGLOBAL *)-1536LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
      v5 = v20;
    }
    if ( DXGFASTMUTEX::IsOwner(v5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 635;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
    v6 = (_QWORD **)((char *)Global + 1584);
    for ( i = *v6; ; i = (_QWORD *)*i )
    {
      v8 = 0LL;
      if ( i != v6 )
        v8 = i;
      if ( !v8 )
        break;
      v17 = (__int64)i;
      if ( i == v6 )
        v17 = 0LL;
      if ( (int)lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(v17, (__int64)v22) < 0 )
        break;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v20);
  }
  v9 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v9, v10, v11, v12);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    v18 = 3956LL;
    v19 = L"DXGSESSIONDATA is NULL";
LABEL_27:
    WdLogGlobalForLineNumber = v18;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, v18, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v14 = *((_QWORD *)SessionData + 1);
  if ( !v14 )
  {
    WdLogSingleEntry0(2LL);
    v18 = 3963LL;
    v19 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_27;
  }
  v15 = *(struct _KTHREAD ***)(v14 + 120);
  if ( v15 )
    OUTPUTDUPL_MGR::CleanUpPendingList(v15, a1);
}
