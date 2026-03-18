/*
 * XREFs of ?Delete@CResource@@IEAAXXZ @ 0x180093CC0
 * Callers:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009582C (--1-$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180093F74 (-AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResource::Delete(CResource *this)
{
  __int64 v1; // rbx
  int v3; // edi
  CComposition *v4; // rcx
  CResource **Value; // rdi
  const char *v6; // r9
  const char *v7; // r9
  CResource *v8; // rcx
  CResource *v9; // rax
  CResource *v10; // rax
  CThreadContext *v11; // rax
  CThreadContext *v12; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 2));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  }
  if ( *((_BYTE *)g_pComposition + 6466) || (v3 = *((_DWORD *)g_pComposition + 1426), GetCurrentThreadId() == v3) )
  {
    Value = (CResource **)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v11 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v11 || (v12 = CThreadContext::CThreadContext(v11), (Value = (CResource **)v12) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x44,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
          (const char *)0x8007000ELL,
          v13);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v12);
    }
    if ( *Value )
    {
      if ( *Value == this )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2A,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
          v6);
      v9 = Value[2];
      if ( v9 )
        *((_QWORD *)v9 + 8) = this;
      else
        Value[1] = this;
      Value[2] = this;
    }
    else
    {
      *Value = this;
      (*(void (__fastcall **)(CResource *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
      while ( 1 )
      {
        v8 = Value[1];
        if ( !v8 )
          break;
        v10 = (CResource *)*((_QWORD *)v8 + 8);
        Value[1] = v10;
        if ( !v10 )
          Value[2] = 0LL;
        if ( *((_DWORD *)v8 + 2) != -1 )
        {
          Value[3] = v8;
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x56,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
            v7);
        }
        (*(void (__fastcall **)(CResource *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
      }
      *Value = 0LL;
    }
  }
  else
  {
    CComposition::AddDelayDeleteResource(v4, this);
  }
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
