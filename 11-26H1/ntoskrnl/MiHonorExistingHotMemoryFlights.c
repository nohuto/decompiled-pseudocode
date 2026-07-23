/*
 * XREFs of MiHonorExistingHotMemoryFlights @ 0x14086C92C
 * Callers:
 *     MiAllocateInitialMemoryBlocks @ 0x14086BDD8 (MiAllocateInitialMemoryBlocks.c)
 * Callees:
 *     MiExtendMemoryBlocks @ 0x14086C6C4 (MiExtendMemoryBlocks.c)
 *     MiUnlinkHotAddFlight @ 0x14086D444 (MiUnlinkHotAddFlight.c)
 */

__int64 __fastcall MiHonorExistingHotMemoryFlights(__int64 a1)
{
  __int64 *v1; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned int v6; // ecx
  __int64 *v7; // rax
  __int64 *v8; // rdi
  unsigned int v9; // r8d

  v1 = (__int64 *)qword_140E2D958;
  if ( !qword_140E2D958 )
  {
    v1 = &qword_140E2D958;
    qword_140E2D960 = (__int64)&qword_140E2D958;
    qword_140E2D958 = (__int64)&qword_140E2D958;
  }
  while ( v1 != &qword_140E2D958 )
  {
    v3 = v1[2];
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 >= v3 )
    {
      if ( v4 < v1[3] )
        return 3221225496LL;
    }
    else if ( *(_QWORD *)(a1 + 24) > v3 )
    {
      return 3221225496LL;
    }
    v1 = (__int64 *)*v1;
  }
  if ( dword_140E2D968 != -1 )
  {
    v6 = *(_DWORD *)(a1 + 152);
    if ( v6 + dword_140E2D96C >= v6 )
    {
      v7 = (__int64 *)qword_140E2D960;
      ++dword_140E2D968;
      dword_140E2D96C += v6;
      if ( (__int64 *)qword_140E2D958 == &qword_140E2D958 )
      {
        if ( *(__int64 **)qword_140E2D960 == &qword_140E2D958 )
        {
          *(_QWORD *)a1 = &qword_140E2D958;
          *(_QWORD *)(a1 + 8) = v7;
          *v7 = a1;
          qword_140E2D960 = a1;
          return 0LL;
        }
      }
      else if ( *(__int64 **)qword_140E2D960 == &qword_140E2D958 )
      {
        *(_QWORD *)a1 = &qword_140E2D958;
        *(_QWORD *)(a1 + 8) = v7;
        *v7 = a1;
        v8 = (__int64 *)qword_140E2D958;
        qword_140E2D960 = a1;
        while ( v8 != &qword_140E2D958 )
        {
          if ( (int)MiExtendMemoryBlocks((__int64)v8) < 0 )
          {
            MiUnlinkHotAddFlight(a1);
            return v9;
          }
          v8 = (__int64 *)*v8;
        }
        return 0LL;
      }
      __fastfail(3u);
    }
  }
  return 3221225626LL;
}
