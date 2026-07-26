/*
 * XREFs of ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x140050920
 * Callers:
 *     NdisFCancelOidRequest @ 0x14009D7A0 (NdisFCancelOidRequest.c)
 *     NdisFCancelDirectOidRequest @ 0x1400CD030 (NdisFCancelDirectOidRequest.c)
 *     NdisFDirectOidRequestComplete @ 0x1400CD200 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisExpandStack(void (*a1)(void *), void *a2)
{
  return KeExpandKernelStackAndCalloutEx(a1, a2, (unsigned int)Size, 0, 0LL);
}
