/*
 * XREFs of sub_14004534C @ 0x14004534C
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 * Callees:
 *     sub_14003E8E8 @ 0x14003E8E8 (sub_14003E8E8.c)
 *     sub_14006B1D8 @ 0x14006B1D8 (sub_14006B1D8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_14017A944 @ 0x14017A944 (sub_14017A944.c)
 *     sub_14017AEFC @ 0x14017AEFC (sub_14017AEFC.c)
 *     sub_14017BAA4 @ 0x14017BAA4 (sub_14017BAA4.c)
 *     sub_14017BC60 @ 0x14017BC60 (sub_14017BC60.c)
 */

__int64 __fastcall sub_14004534C(_DWORD *a1)
{
  __int64 v2; // r8
  int v3; // edi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset_0(a1, 0, 0x1880uLL);
  *a1 = 1094997074;
  *((_QWORD *)a1 + 19) = a1 + 36;
  *((_QWORD *)a1 + 18) = a1 + 36;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 17);
  *((_QWORD *)a1 + 29) = a1 + 56;
  *((_QWORD *)a1 + 28) = a1 + 56;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 27);
  InitializeSListHead((PSLIST_HEADER)a1 + 16);
  InitializeSListHead((PSLIST_HEADER)a1 + 17);
  InitializeSListHead((PSLIST_HEADER)a1 + 309);
  InitializeSListHead((PSLIST_HEADER)a1 + 18);
  a1[14] = -1;
  v3 = sub_14003E8E8((__int64)(a1 + 42), 0x14u, v2, (__int64)sub_140034770);
  if ( v3 >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection((POOL_TYPE)512, 0x6D526152u);
    *((_QWORD *)a1 + 42) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      sub_14017BAA4(a1 + 94);
      sub_14017AEFC(a1 + 220);
      a1[86] = 0;
      a1[87] = 0;
      a1[88] = 0;
      *((_BYTE *)a1 + 356) = 0;
      sub_14017BC60(a1 + 90);
      sub_14017A944(a1 + 194);
      *((_OWORD *)a1 + 57) = 0LL;
      *((_QWORD *)a1 + 116) = 0LL;
      sub_14006B1D8(a1 + 252);
      sub_14006B1D8(a1 + 348);
      a1[288] = 134684677;
      a1[308] = 134684677;
      a1[328] = 134684677;
      KeInitializeTimer((PKTIMER)(a1 + 396));
      KeInitializeTimer((PKTIMER)(a1 + 444));
      KeInitializeTimer((PKTIMER)(a1 + 1034));
      KeInitializeTimer((PKTIMER)(a1 + 1350));
      a1[22] = 2;
      *((_BYTE *)a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 108);
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 691);
      *((_BYTE *)a1 + 624) &= ~1u;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v3;
}
