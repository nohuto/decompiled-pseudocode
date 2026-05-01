/*
 * XREFs of ?GamingPostureWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18000A300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingPostureWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall **a4)(_QWORD, _QWORD, _QWORD),
        const void *a5,
        unsigned int a6)
{
  if ( a4 && a5 && a6 == 4 && (_DWORD)a2 )
    ((void (__fastcall **)(_QWORD, __int64, struct _WNF_TYPE_ID *))a4)[1](a4[2], a2, a3);
  return 0LL;
}
