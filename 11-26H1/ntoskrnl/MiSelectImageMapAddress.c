/*
 * XREFs of MiSelectImageMapAddress @ 0x14099EAF8
 * Callers:
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiSelectUserAddress @ 0x140995F80 (MiSelectUserAddress.c)
 *     MiIsVaRangeAvailable @ 0x14099F404 (MiIsVaRangeAvailable.c)
 */

__int64 __fastcall MiSelectImageMapAddress(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r15
  unsigned __int64 v4; // rsi
  __int64 *v5; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // rcx
  unsigned int VadFlags; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  __int16 v14; // ax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v19; // r8
  char v20; // r9

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v1 + 88);
  if ( (*(_DWORD *)(v3 + 500) & 0x20) != 0 )
    return 3221225738LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v1 + 56) & 1) != 0 && *(_QWORD *)(a1 + 88) != 0x200000LL )
  {
    if ( !(unsigned int)MiIsVaRangeAvailable(
                          *(_QWORD *)(v1 + 88),
                          *(_QWORD *)(a1 + 72),
                          *(_QWORD *)(a1 + 64),
                          *(_QWORD *)v1,
                          *(_QWORD *)(v1 + 8)) )
      return 3221225496LL;
    return 0LL;
  }
  if ( v4 > 0x7FFFFFFF0000LL )
    return 3221225495LL;
  if ( (*(_DWORD *)(a1 + 56) & 1) == 0
    && (unsigned int)MiIsVaRangeAvailable(
                       *(_QWORD *)(v1 + 88),
                       *(_QWORD *)(a1 + 72),
                       *(_QWORD *)(a1 + 64),
                       *(_QWORD *)v1,
                       *(_QWORD *)(v1 + 8)) )
  {
    return 0LL;
  }
  v5 = *(__int64 **)(a1 + 32);
  v6 = *(_QWORD *)a1;
  v7 = 0LL;
  v8 = *(_QWORD *)(v1 + 8);
  v9 = *v5;
  if ( *(_QWORD *)(*v5 + 32) < 0x100000000uLL && v8 >= 0x100000000LL && (*(_WORD *)(v9 + 12) & 0x4000) == 0 )
    v8 = 0xFFFFFFFFLL;
  if ( *(__int16 *)(v9 + 12) < 0 )
  {
    if ( !*(_QWORD *)(v3 + 784) || (v14 = *(_WORD *)(v3 + 1772), v14 != 332) && v14 != 452 )
      v7 = 0x100000000LL;
  }
  if ( *(_QWORD *)v1 >= v8 )
  {
    result = 3221225495LL;
  }
  else
  {
    VadFlags = MiReadVadFlags(*(_QWORD *)a1);
    result = MiSelectUserAddress(
               *(_DWORD *)(v1 + 40),
               *(_QWORD *)v1,
               v8,
               v4,
               *(_QWORD *)(a1 + 88),
               v7,
               (VadFlags >> 5) & 0x1F,
               0,
               v11,
               a1 + 72);
    if ( (int)result >= 0 )
      goto LABEL_10;
  }
  if ( v8 != *(_QWORD *)(v1 + 8) )
  {
    v16 = MiReadVadFlags(v6);
    result = MiSelectUserAddress(
               *(_DWORD *)(v1 + 40),
               *(_QWORD *)v1,
               *(_QWORD *)(v1 + 8),
               v4,
               *(_QWORD *)(a1 + 88),
               v7,
               (v16 >> 5) & 0x1F,
               0,
               v17,
               a1 + 72);
    if ( (int)result >= 0 )
    {
LABEL_10:
      if ( *(_QWORD *)(a1 + 88) == 0x200000LL )
      {
        if ( v4 - *(_QWORD *)(v1 + 24) >= 0x10000 )
        {
          v15 = ExGenRandom(1, v13);
          *(_QWORD *)(a1 + 104) = v15;
          *(_QWORD *)(a1 + 104) = v15 % ((v4 - *(_QWORD *)(v1 + 24)) >> 16);
        }
        LockedVadEvent = MiLocateLockedVadEvent(v6, 0x10u);
        *(_QWORD *)(LockedVadEvent + 32) = v19;
        *(_BYTE *)(LockedVadEvent + 24) = v20;
      }
      return 0LL;
    }
  }
  return result;
}
