/*
 * XREFs of NdisClCloseAddressFamily @ 0x140070340
 * Callers:
 *     <none>
 * Callees:
 *     NdisCmCloseAddressFamilyComplete @ 0x140041A50 (NdisCmCloseAddressFamilyComplete.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisClCloseAddressFamily(NDIS_HANDLE NdisAfHandle)
{
  KIRQL v2; // al
  int v3; // esi
  NDIS_STATUS v4; // esi
  __int64 v5; // rax
  NDIS_STATUS result; // eax

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  v3 = *((_DWORD *)NdisAfHandle + 2);
  *((_DWORD *)NdisAfHandle + 2) = v3 | 0x80000000;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisAfHandle + 48, v2);
  v4 = (v3 >> 31) & 0xC0000001;
  if ( v4 )
    return v4;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
    v5 = *((_QWORD *)NdisAfHandle + 4);
  else
    v5 = *((_QWORD *)NdisAfHandle + 3);
  result = (*(__int64 (__fastcall **)(_QWORD))(v5 + 32))(*((_QWORD *)NdisAfHandle + 6));
  if ( result != 259 )
  {
    NdisCmCloseAddressFamilyComplete(result, NdisAfHandle);
    return 259;
  }
  return result;
}
