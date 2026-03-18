/*
 * XREFs of ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x14014CA8C
 * Callers:
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x140083B88 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014CA0C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 *     CleanupResources @ 0x1401B9768 (CleanupResources.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HYDRA_HINT(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = a1;
  result = W32GetUserSessionState(a1, a2);
  *(_DWORD *)(result + 68936) |= v2;
  return result;
}
