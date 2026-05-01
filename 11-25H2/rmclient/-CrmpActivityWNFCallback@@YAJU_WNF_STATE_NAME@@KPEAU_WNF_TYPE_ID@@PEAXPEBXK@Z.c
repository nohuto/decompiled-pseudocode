/*
 * XREFs of ?CrmpActivityWNFCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800102E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmpActivityWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall **a4)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        unsigned int *a5,
        unsigned int a6)
{
  if ( a6 >= 4 )
    a4[3](a4[2], a4, *a5, 0LL, a4[4]);
  return 0LL;
}
