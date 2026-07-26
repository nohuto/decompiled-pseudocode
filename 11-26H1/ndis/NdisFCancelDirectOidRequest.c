/*
 * XREFs of NdisFCancelDirectOidRequest @ 0x1400CD030
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x140050920 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 */

void __stdcall NdisFCancelDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = NdisFilterHandle;
  v2[3] = RequestId;
  v2[0] = 0LL;
  v2[2] = 0LL;
  ndisExpandStack((void (*)(void *))ndisFCancelDirectOidRequestInternal, v2);
}
