/*
 * XREFs of HamRpcSrvServicingQueryPackageStateEx @ 0x18007C800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvServicingQueryPackageStateEx(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        union _HAM_EXTERNAL_STATE_SUMMARY *a3,
        struct _HAM_HOST_STATE_SUMMARY **a4,
        unsigned int *a5)
{
  return HamSrvQueryPackageState(a1, a2, a3, a4, a5);
}
