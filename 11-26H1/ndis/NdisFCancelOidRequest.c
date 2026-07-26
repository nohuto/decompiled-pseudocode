/*
 * XREFs of NdisFCancelOidRequest @ 0x14009D7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x140050920 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 */

void __stdcall NdisFCancelOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = NdisFilterHandle;
  v2[3] = RequestId;
  v2[0] = 0LL;
  v2[2] = 0LL;
  ndisExpandStack((void (*)(void *))ndisFCancelOidRequestInternal, v2);
}
