/*
 * XREFs of NdisCmNotifyCloseAddressFamily @ 0x140065A20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140065BF0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1400D48B0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1400D7B00 (NdisCoRequestComplete.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

NDIS_STATUS __stdcall NdisCmNotifyCloseAddressFamily(NDIS_HANDLE NdisAfHandle)
{
  NDIS_STATUS result; // eax
  KIRQL v3; // al
  KSPIN_LOCK *v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, char *); // rbp
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rcx

  if ( !ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)NdisAfHandle) )
    return -1073741823;
  if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
  {
    memset((char *)NdisAfHandle + 408, 0, 0xB0uLL);
    *((_DWORD *)NdisAfHandle + 110) = 1;
    *((_DWORD *)NdisAfHandle + 112) = -33554422;
    v5 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))*((_QWORD *)NdisAfHandle + 10);
    *((_QWORD *)NdisAfHandle + 62) = *((_QWORD *)NdisAfHandle + 6);
    if ( !v5 )
    {
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, -1073741637);
      return 259;
    }
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
    v7 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
    if ( (*((_DWORD *)NdisAfHandle + 2) & 0x40000000) != 0 )
    {
      *((_BYTE *)NdisAfHandle + 592) = 1;
      *((_QWORD *)NdisAfHandle + 73) = (char *)NdisAfHandle + 408;
      KeReleaseSpinLock(v7, v6);
    }
    else
    {
      KeReleaseSpinLock(v7, v6);
      result = v5(*((_QWORD *)NdisAfHandle + 47), 0LL, 0LL, (char *)NdisAfHandle + 408);
      if ( result == 259 )
        return result;
      NdisCoRequestComplete(result, NdisAfHandle, 0LL, 0LL, (char *)NdisAfHandle + 408);
    }
    return 259;
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
    v4 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
    if ( (*((_DWORD *)NdisAfHandle + 2) & 0x40000000) != 0 )
    {
      *((_BYTE *)NdisAfHandle + 592) = 1;
      *((_QWORD *)NdisAfHandle + 73) = 0LL;
      KeReleaseSpinLock(v4, v3);
      return 259;
    }
    else
    {
      KeReleaseSpinLock(v4, v3);
      result = (*((__int64 (__fastcall **)(_QWORD))NdisAfHandle + 45))(*((_QWORD *)NdisAfHandle + 47));
      if ( result != 259 )
      {
        NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, result);
        return 259;
      }
    }
  }
  return result;
}
