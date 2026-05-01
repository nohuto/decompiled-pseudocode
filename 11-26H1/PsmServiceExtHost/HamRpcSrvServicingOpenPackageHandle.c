/*
 * XREFs of HamRpcSrvServicingOpenPackageHandle @ 0x180019AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvServicingOpenPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        PCWSTR packageFullName,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  return HamSrvOpenPackageHandle(a1, packageFullName, a3, a4, a5, a6);
}
