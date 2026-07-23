/*
 * XREFs of MiSelectDataMapAddress @ 0x140995DF0
 * Callers:
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiFindPlaceholderVadToReplace @ 0x1404C5AC8 (MiFindPlaceholderVadToReplace.c)
 *     MiSelectUserAddress @ 0x140995F80 (MiSelectUserAddress.c)
 *     MiIsVaRangeAvailable @ 0x14099F404 (MiIsVaRangeAvailable.c)
 */

__int64 __fastcall MiSelectDataMapAddress(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v4; // rdx
  BOOL v5; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  int v9; // r10d
  __int64 v10; // r11
  __int64 PlaceholderVadToReplace; // rax
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  v12 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(v1 + 88) + 500LL) & 0x20) != 0 )
    return 3221225738LL;
  v4 = *(_QWORD *)(a1[1] + 24) << 12;
  if ( (*(_DWORD *)(v1 + 56) & 1) != 0 )
  {
    v7 = a1[5];
  }
  else
  {
    if ( !v4 )
    {
      v5 = MiVadPureReserve(a1[13]);
      result = MiSelectUserAddress(
                 *(_DWORD *)(v1 + 40),
                 *(_QWORD *)v1,
                 *(_QWORD *)(v1 + 8),
                 *(_QWORD *)(v1 + 24),
                 *(_QWORD *)(v1 + 16),
                 0LL,
                 *((_DWORD *)a1 + 8),
                 v5 ? 4 : 0,
                 (__int64)(a1 + 18),
                 (__int64)(a1 + 15));
      if ( (int)result < 0 )
        return result;
      a1[16] = a1[15] + *(_QWORD *)(v1 + 24) - 1LL;
      return 0LL;
    }
    v7 = v4 + *(_QWORD *)a1[2];
  }
  a1[15] = v7;
  a1[16] = v7 + *(_QWORD *)(v1 + 24) - 1LL;
  if ( (unsigned int)HalSystemVectorDispatchEntry() )
    return 3221225793LL;
  if ( (*(_DWORD *)(v1 + 60) & 0x4000000) != 0 )
  {
    PlaceholderVadToReplace = MiFindPlaceholderVadToReplace(v8, v10, *(_BYTE *)(v1 + 53), (int *)&v12);
    if ( !PlaceholderVadToReplace )
      return v12;
    a1[17] = PlaceholderVadToReplace;
    return 0LL;
  }
  if ( !(unsigned int)MiIsVaRangeAvailable(v9, v8, (int)v10 - (int)v8 + 1, *(_QWORD *)v1, *(_QWORD *)(v1 + 8)) )
    return (unsigned int)-1073741800;
  return v2;
}
