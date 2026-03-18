/*
 * XREFs of ??_GCCommonRenderingEffect@@MEAAPEAXI@Z @ 0x18001B330
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

CCommonRenderingEffect *__fastcall CCommonRenderingEffect::`scalar deleting destructor'(
        CCommonRenderingEffect *this,
        char a2)
{
  _QWORD *Value; // rdi
  CCommonRenderingEffect *result; // rax
  HANDLE ProcessHeap; // rax
  CThreadContext *v7; // rax
  CThreadContext *v8; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CDrawListBitmap::~CDrawListBitmap((CCommonRenderingEffect *)((char *)this + 40));
  CDrawListBitmap::~CDrawListBitmap((CCommonRenderingEffect *)((char *)this + 16));
  if ( (a2 & 1) == 0 )
    return this;
  if ( (a2 & 4) != 0 )
  {
    CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 72LL);
    return this;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v7 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v7 || (v8 = CThreadContext::CThreadContext(v7), (Value = v8) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v8);
  }
  if ( *((_DWORD *)Value + 69) < *((_DWORD *)Value + 68) )
  {
    *(_QWORD *)this = Value[35];
    result = this;
    ++*((_DWORD *)Value + 69);
    Value[35] = this;
  }
  else
  {
    if ( !this )
      return this;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
    return this;
  }
  return result;
}
