/*
 * XREFs of RaidCreateAdapter @ 0x14006C434
 * Callers:
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 * Callees:
 *     StorCreateDictionary @ 0x1400499A0 (StorCreateDictionary.c)
 *     RaidCreateDeferredQueue @ 0x14007213C (RaidCreateDeferredQueue.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaCreateBus @ 0x1401875FC (RaCreateBus.c)
 *     RaidCreateDma @ 0x140187BC8 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1401887B8 (RaCreateMiniport.c)
 *     RaidCreateResourceList @ 0x140188928 (RaidCreateResourceList.c)
 */

__int64 __fastcall RaidCreateAdapter(_DWORD *a1)
{
  __int64 v2; // r8
  int Dictionary; // edi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset_0(a1, 0, 0x18C0uLL);
  *a1 = 1094997074;
  *((_QWORD *)a1 + 19) = a1 + 36;
  *((_QWORD *)a1 + 18) = a1 + 36;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 17);
  *((_QWORD *)a1 + 29) = a1 + 56;
  *((_QWORD *)a1 + 28) = a1 + 56;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 27);
  InitializeSListHead((PSLIST_HEADER)a1 + 16);
  InitializeSListHead((PSLIST_HEADER)a1 + 17);
  InitializeSListHead((PSLIST_HEADER)a1 + 313);
  InitializeSListHead((PSLIST_HEADER)a1 + 18);
  a1[14] = -1;
  Dictionary = StorCreateDictionary((__int64)(a1 + 42), 0x14u, v2, (__int64)RaidGetKeyFromUnit);
  if ( Dictionary >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *((_QWORD *)a1 + 42) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      RaCreateMiniport(a1 + 94);
      RaidCreateDma(a1 + 224);
      *((_QWORD *)a1 + 43) = 0LL;
      a1[88] = 0;
      *((_BYTE *)a1 + 356) = 0;
      RaidCreateResourceList(a1 + 90);
      RaCreateBus(a1 + 198);
      *((_OWORD *)a1 + 58) = 0LL;
      *((_QWORD *)a1 + 118) = 0LL;
      RaidCreateDeferredQueue(a1 + 268);
      RaidCreateDeferredQueue(a1 + 364);
      a1[304] = 134684677;
      a1[324] = 134684677;
      a1[344] = 134684677;
      KeInitializeTimer((PKTIMER)(a1 + 412));
      KeInitializeTimer((PKTIMER)(a1 + 460));
      KeInitializeTimer((PKTIMER)(a1 + 1050));
      KeInitializeTimer((PKTIMER)(a1 + 1366));
      a1[22] = 2;
      *((_BYTE *)a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 110);
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 699);
      a1[156] &= ~1u;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)Dictionary;
}
