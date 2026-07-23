/*
 * XREFs of HalpIommuProcessReservationsInternal @ 0x1405908A8
 * Callers:
 *     HalpIommuProcessReservations @ 0x14059084C (HalpIommuProcessReservations.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     HalpIommuDetermineReservedPciRid @ 0x14058FDF4 (HalpIommuDetermineReservedPciRid.c)
 *     HalpIommuProcessMemoryErrata @ 0x140590758 (HalpIommuProcessMemoryErrata.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuProcessReservationsInternal(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *MemoryInternal; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  result = guard_dispatch_icall_no_overrides(a1[2], &v6);
  if ( (_DWORD)result == -1073741789 )
  {
    MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(8 * v6 + 8, 1u);
    a1[66] = MemoryInternal;
    if ( MemoryInternal )
    {
      *MemoryInternal = v6;
      result = guard_dispatch_icall_no_overrides(a1[2], &v6);
      if ( (int)result >= 0 )
      {
        result = HalpIommuProcessMemoryErrata(v6, a1[66] + 8LL, a2);
        if ( (int)result >= 0 )
          return HalpIommuDetermineReservedPciRid(a1);
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
