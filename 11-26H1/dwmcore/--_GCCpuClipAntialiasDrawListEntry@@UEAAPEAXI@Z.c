/*
 * XREFs of ??_GCCpuClipAntialiasDrawListEntry@@UEAAPEAXI@Z @ 0x18002D220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CCpuClipAntialiasDrawListEntry *__fastcall CCpuClipAntialiasDrawListEntry::`scalar deleting destructor'(
        CCpuClipAntialiasDrawListEntry *this,
        char a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  _QWORD *Value; // rdi
  HANDLE ProcessHeap; // rax
  CThreadContext *v13; // rax
  CThreadContext *v14; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 11);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = (void *)v5[2];
    if ( v6 )
      operator delete(v6);
    operator delete(v5, 0x18uLL);
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v9 )
    (**v9)(v9, 1LL);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 112LL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v13 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v13 || (v14 = CThreadContext::CThreadContext(v13), (Value = v14) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v14);
      }
      if ( *((_DWORD *)Value + 41) < *((_DWORD *)Value + 40) )
      {
        *(_QWORD *)this = Value[21];
        ++*((_DWORD *)Value + 41);
        Value[21] = this;
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
