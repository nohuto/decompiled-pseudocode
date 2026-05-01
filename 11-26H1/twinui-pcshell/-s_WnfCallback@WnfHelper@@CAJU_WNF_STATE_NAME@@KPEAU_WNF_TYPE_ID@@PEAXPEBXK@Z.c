/*
 * XREFs of ?s_WnfCallback@WnfHelper@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18048F170
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WnfHelper::s_WnfCallback(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        const void *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  struct _WNF_STATE_NAME Buf1; // [rsp+30h] [rbp+8h] BYREF

  Buf1 = a1;
  v6 = 0;
  if ( a4 )
  {
    if ( a2 )
    {
      if ( !memcmp_0(&Buf1, &WNF_ACC_EC_ENABLED, 8uLL) )
        (*(void (__fastcall **)(_QWORD, const void *, _QWORD))(*(_QWORD *)*a4 + 24LL))(*a4, a5, a6);
    }
    else
    {
      return (unsigned int)-1073741762;
    }
  }
  return v6;
}
