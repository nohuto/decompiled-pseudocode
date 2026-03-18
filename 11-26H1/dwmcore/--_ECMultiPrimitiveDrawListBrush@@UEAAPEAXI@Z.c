/*
 * XREFs of ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1801870B0
 * Callers:
 *     ??1?$unique_ptr@VCMultiPrimitiveDrawListBrush@@U?$default_delete@VCMultiPrimitiveDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801A9408 (--1-$unique_ptr@VCMultiPrimitiveDrawListBrush@@U-$default_delete@VCMultiPrimitiveDrawListBrush@@.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCMultiPrimitiveDrawListBrush@@U?$default_delete@VCMultiPrimitiveDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18021F570 (--1-$out_param_t@V-$unique_ptr@VCMultiPrimitiveDrawListBrush@@U-$default_delete@VCMultiPrimitive.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMultiPrimitiveDrawListBrush *__fastcall CMultiPrimitiveDrawListBrush::`vector deleting destructor'(
        CMultiPrimitiveDrawListBrush *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  _QWORD *Value; // rbx
  HANDLE ProcessHeap; // rax
  CThreadContext *v8; // rax
  CThreadContext *v9; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 9);
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 96LL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v8 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v8 || (v9 = CThreadContext::CThreadContext(v8), (Value = v9) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v9);
      }
      if ( *((_DWORD *)Value + 105) < *((_DWORD *)Value + 104) )
      {
        *(_QWORD *)this = Value[53];
        ++*((_DWORD *)Value + 105);
        Value[53] = this;
      }
      else
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, this);
      }
    }
  }
  return this;
}
