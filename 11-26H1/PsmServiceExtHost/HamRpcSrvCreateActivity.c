/*
 * XREFs of HamRpcSrvCreateActivity @ 0x1800638F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 */

void __fastcall __noreturn HamRpcSrvCreateActivity(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        void *a9,
        unsigned __int64 *a10)
{
  HamSrvCreateActivity(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
