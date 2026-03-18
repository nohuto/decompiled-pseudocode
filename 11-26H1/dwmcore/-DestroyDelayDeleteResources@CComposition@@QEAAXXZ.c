/*
 * XREFs of ?DestroyDelayDeleteResources@CComposition@@QEAAXXZ @ 0x18014F628
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014F3A4 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::DestroyDelayDeleteResources(CComposition *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  const char *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 5712);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 5712));
  while ( 1 )
  {
    v4 = *((_QWORD *)this + 720);
    if ( !v4 )
      break;
    v5 = *(_QWORD *)(v4 + 64);
    *((_QWORD *)this + 720) = v5;
    if ( !v5 )
      *((_QWORD *)this + 721) = 0LL;
    if ( *(_DWORD *)(v4 + 8) != -1 )
    {
      *((_QWORD *)this + 722) = v4;
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x56,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
        v3);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
