/*
 * XREFs of ??_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z @ 0x18009D7F0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18009D970 (-InternalRelease@-$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CReconstructableDrawListEntry_UVx2 *__fastcall CReconstructableDrawListEntry_UVx2::`vector deleting destructor'(
        CReconstructableDrawListEntry_UVx2 *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  _DWORD *Value; // rdi
  HANDLE ProcessHeap; // rax
  CReconstructableDrawListEntry_UVx2 *result; // rax
  CThreadContext *v10; // rax
  CThreadContext *v11; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_QWORD *)this + 10) )
    CMILRefCountBaseT<CRenderingEffect,CMilObjectDeleter>::InternalRelease();
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v6 )
    (**v6)(v6, 1LL);
  if ( (a2 & 1) == 0 )
    return this;
  if ( (a2 & 4) != 0 )
  {
    CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 216LL);
    return this;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v10 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v10 || (v11 = CThreadContext::CThreadContext(v10), (Value = v11) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v11);
  }
  if ( Value[53] >= Value[52] )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
    return this;
  }
  *(_QWORD *)this = *((_QWORD *)Value + 27);
  result = this;
  ++Value[53];
  *((_QWORD *)Value + 27) = this;
  return result;
}
