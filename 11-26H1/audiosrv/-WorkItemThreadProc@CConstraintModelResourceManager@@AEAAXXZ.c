/*
 * XREFs of ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x180054E8C
 * Callers:
 *     ?s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800548B0 (-s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_W.c)
 * Callees:
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAA?AV?$CAutoPtr@VReacquireResourceWorkItem@@@2@XZ @ 0x180054FA4 (-RemoveHead@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VR.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConstraintModelResourceManager::WorkItemThreadProc(CConstraintModelResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // rsi
  void (__fastcall ***v4)(_QWORD, CConstraintModelResourceManager *); // r14
  int v5; // ebp
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  v3 = (_QWORD *)((char *)this + 232);
  while ( 1 )
  {
    v4 = 0LL;
    EnterCriticalSection(v2);
    if ( v3[2] )
    {
      v5 = 0;
      if ( !*v3 )
        ATL::AtlThrowImpl(-2147467259);
      v4 = *(void (__fastcall ****)(_QWORD, CConstraintModelResourceManager *))(*v3 + 16LL);
    }
    else
    {
      v5 = 1;
    }
    LeaveCriticalSection(v2);
    if ( v5 )
      break;
    (**v4)(v4, this);
    EnterCriticalSection(v2);
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::RemoveHead(
      v3,
      &v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
    v6 = 0LL;
    LeaveCriticalSection(v2);
  }
}
