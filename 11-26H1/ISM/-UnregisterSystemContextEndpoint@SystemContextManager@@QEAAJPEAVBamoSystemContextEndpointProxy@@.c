/*
 * XREFs of ?UnregisterSystemContextEndpoint@SystemContextManager@@QEAAJPEAVBamoSystemContextEndpointProxy@@@Z @ 0x180143670
 * Callers:
 *     ?OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ @ 0x180143A20 (-OnDisconnected@SystemContextEndpointProxy@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemContextManager::UnregisterSystemContextEndpoint(
        SystemContextManager *this,
        struct BamoSystemContextEndpointProxy *a2,
        __int64 a3,
        const char *a4)
{
  struct BamoSystemContextEndpointProxy **v5; // rsi
  struct BamoSystemContextEndpointProxy **i; // rbx
  char v7; // al
  struct BamoSystemContextEndpointProxy *v8; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (struct BamoSystemContextEndpointProxy **)*((_QWORD *)this + 8);
  for ( i = (struct BamoSystemContextEndpointProxy **)*((_QWORD *)this + 7); ; ++i )
  {
    if ( i == v5 )
    {
      v7 = 1;
      goto LABEL_6;
    }
    if ( *i == a2 )
      break;
  }
  v7 = 0;
LABEL_6:
  if ( v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
      a4);
  while ( ++i != v5 )
  {
    v8 = *i;
    *i = 0LL;
    v9 = (__int64)*(i - 1);
    *(i - 1) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(*((_QWORD *)this + 8) - 8LL));
  *((_QWORD *)this + 8) -= 8LL;
  return 0LL;
}
