/*
 * XREFs of ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1402E6680
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402E6274 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
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
        struct DXGDEVICE *a1,
        __int64 (__fastcall *a2)(__int64, void *),
        void *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  struct DXGGLOBAL *Global; // rsi
  DXGFASTMUTEX *v10; // rcx
  _QWORD **v11; // rsi
  _QWORD *i; // rbx
  _QWORD *v13; // rax
  _QWORD *v15; // rcx
  DXGFASTMUTEX *v16; // [rsp+50h] [rbp-38h] BYREF
  char v17; // [rsp+58h] [rbp-30h]
  _QWORD v18[4]; // [rsp+60h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 237);
  if ( !v3 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
    if ( !v3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 11448;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11448LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v6 = *(_QWORD *)(v3 + 3160);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 120)) == 0 || (v8 = a2(v7, a3), v8 >= 0) )
  {
    v18[0] = *(_QWORD *)(v3 + 412);
    v18[1] = a2;
    v18[2] = a3;
    Global = DXGGLOBAL::GetGlobal();
    v17 = 0;
    v10 = (struct DXGGLOBAL *)((char *)Global + 1536);
    v16 = (struct DXGGLOBAL *)((char *)Global + 1536);
    if ( Global == (struct DXGGLOBAL *)-1536LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
      v10 = v16;
    }
    if ( DXGFASTMUTEX::IsOwner(v10) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 635;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v16);
    v11 = (_QWORD **)((char *)Global + 1584);
    for ( i = *v11; ; i = (_QWORD *)*i )
    {
      v13 = 0LL;
      if ( i != v11 )
        v13 = i;
      if ( !v13 )
        break;
      v15 = i;
      if ( i == v11 )
        v15 = 0LL;
      v8 = lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(v15, v18);
      if ( v8 < 0 )
        goto LABEL_16;
    }
    v8 = 0;
LABEL_16:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v16);
  }
  return (unsigned int)v8;
}
