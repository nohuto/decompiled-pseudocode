/*
 * XREFs of ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x180176A50
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::`vector deleting destructor'(
        CRoundedRectangleShape *this,
        char a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  _DWORD *Value; // rdi
  HANDLE ProcessHeap; // rax
  CRoundedRectangleShape *result; // rax
  CThreadContext *v9; // rax
  CThreadContext *v10; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) == 0 )
    return this;
  if ( (a2 & 4) != 0 )
  {
    CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 24LL);
    return this;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v9 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v9 || (v10 = CThreadContext::CThreadContext(v9), (Value = v10) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v10);
  }
  if ( Value[17] >= Value[16] )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
    return this;
  }
  *(_QWORD *)this = *((_QWORD *)Value + 9);
  result = this;
  ++Value[17];
  *((_QWORD *)Value + 9) = this;
  return result;
}
