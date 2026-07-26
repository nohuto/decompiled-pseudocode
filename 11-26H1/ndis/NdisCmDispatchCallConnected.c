/*
 * XREFs of NdisCmDispatchCallConnected @ 0x1400D50E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmDispatchCallConnected(NDIS_HANDLE NdisVcHandle)
{
  (*((void (__fastcall **)(_QWORD))NdisVcHandle + 16))(*((_QWORD *)NdisVcHandle + 3));
}
