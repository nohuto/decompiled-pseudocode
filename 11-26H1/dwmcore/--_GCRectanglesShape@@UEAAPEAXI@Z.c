/*
 * XREFs of ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800BAA70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::`scalar deleting destructor'(CRectanglesShape *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  char *v11; // rdi
  __int64 v12; // rcx
  _QWORD *Value; // rdi
  HANDLE v14; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v17; // rax
  CThreadContext *v18; // rax
  CThreadContext *v19; // rax
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  v4 = *((_QWORD *)this + 2);
  v5 = (*((_QWORD *)this + 3) - v4) >> 4;
  if ( v5 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v20, v4, v5);
    *((_QWORD *)this + 3) += -16 * v6;
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 7) = 0LL;
  }
  v8 = *((_QWORD *)this + 2);
  v9 = (*((_QWORD *)this + 3) - v8) >> 4;
  if ( v9 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v20, v8, v9);
    *((_QWORD *)this + 3) += -16 * v10;
  }
  v11 = (char *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v11 != (char *)this + 40 && v11 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11);
  }
  v12 = *((_QWORD *)this + 1);
  if ( v12 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 64LL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v17 = GetProcessHeap();
        v18 = (CThreadContext *)HeapAlloc(v17, 0, 0x1C0uLL);
        if ( !v18 || (v19 = CThreadContext::CThreadContext(v18), (Value = v19) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v19);
      }
      if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
      {
        *(_QWORD *)this = Value[7];
        ++*((_DWORD *)Value + 13);
        Value[7] = this;
      }
      else
      {
        v14 = GetProcessHeap();
        HeapFree(v14, 0, this);
      }
    }
  }
  return this;
}
