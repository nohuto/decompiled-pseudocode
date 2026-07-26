/*
 * XREFs of NdisCmDispatchIncomingCloseCall @ 0x1400D5210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmDispatchIncomingCloseCall(
        NDIS_STATUS CloseStatus,
        NDIS_HANDLE NdisVcHandle,
        PVOID Buffer,
        UINT Size)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  v4 = *((_QWORD *)NdisVcHandle + 8);
  v5 = *((_QWORD *)NdisVcHandle + 3);
  if ( *(_DWORD *)(v4 + 396) >= 6u )
    (*(void (__fastcall **)(NDIS_STATUS, __int64, PVOID, UINT))(v4 + 336))(CloseStatus, v5, Buffer, Size);
  else
    (*(void (__fastcall **)(NDIS_STATUS, __int64, PVOID, UINT))(v4 + 184))(CloseStatus, v5, Buffer, Size);
}
