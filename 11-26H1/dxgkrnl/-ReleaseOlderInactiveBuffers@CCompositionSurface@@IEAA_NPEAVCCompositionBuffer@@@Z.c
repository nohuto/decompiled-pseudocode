/*
 * XREFs of ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1400459F8
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z @ 0x1400680AC (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

char __fastcall CCompositionSurface::ReleaseOlderInactiveBuffers(
        CCompositionSurface *this,
        struct CCompositionBuffer *a2)
{
  char *v2; // rbx
  char *v3; // rbp
  char v4; // di
  char *v6; // rdx
  char *v7; // rcx
  char **v8; // rax

  v2 = (char *)*((_QWORD *)a2 + 3);
  v3 = (char *)this + 104;
  v4 = 0;
  if ( v2 != (char *)this + 104 )
  {
    v4 = 1;
    do
    {
      v6 = v2;
      v7 = v2 - 24;
      v2 = *(char **)v2;
      if ( *((char **)v2 + 1) != v6 || (v8 = (char **)*((_QWORD *)v6 + 1), *v8 != v6) )
        __fastfail(3u);
      *v8 = v2;
      *((_QWORD *)v2 + 1) = v8;
      --*((_DWORD *)this + 30);
      if ( v7 )
        (**(void (__fastcall ***)(char *, __int64))v7)(v7, 1LL);
    }
    while ( v2 != v3 );
  }
  return v4;
}
