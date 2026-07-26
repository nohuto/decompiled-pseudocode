/*
 * XREFs of NdisCmDeactivateVc @ 0x1400D5CD0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMCoDeactivateVcComplete @ 0x1400D7330 (NdisMCoDeactivateVcComplete.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisCmDeactivateVc(NDIS_HANDLE NdisVcHandle)
{
  __int64 v1; // rdi
  KIRQL v3; // al
  _DWORD *v4; // r10
  NDIS_STATUS result; // eax

  v1 = *((_QWORD *)NdisVcHandle + 9);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v4 = (_DWORD *)*((_QWORD *)NdisVcHandle + 1);
  if ( (*v4 & 3) != 0 && (*v4 & 4) == 0 )
    *v4 |= 4u;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v3);
  *(_QWORD *)(v1 + 104) = *((_QWORD *)NdisVcHandle + 22);
  *(_QWORD *)(v1 + 88) = *((_QWORD *)NdisVcHandle + 18);
  result = (*((__int64 (__fastcall **)(_QWORD))NdisVcHandle + 29))(*((_QWORD *)NdisVcHandle + 25));
  if ( result != 259 )
  {
    NdisMCoDeactivateVcComplete(result, NdisVcHandle);
    return 259;
  }
  return result;
}
