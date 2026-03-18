/*
 * XREFs of MiHonorExistingHotMemoryFlights @ 0x14086654C
 * Callers:
 *     MiAllocateInitialMemoryBlocks @ 0x1408659F8 (MiAllocateInitialMemoryBlocks.c)
 * Callees:
 *     MiExtendMemoryBlocks @ 0x1408662E4 (MiExtendMemoryBlocks.c)
 *     MiUnlinkHotAddFlight @ 0x140867064 (MiUnlinkHotAddFlight.c)
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

  v1 = (__int64 *)qword_140E2D7D8;
  if ( !qword_140E2D7D8 )
  {
    v1 = &qword_140E2D7D8;
    qword_140E2D7E0 = (__int64)&qword_140E2D7D8;
    qword_140E2D7D8 = (__int64)&qword_140E2D7D8;
  }
  while ( v1 != &qword_140E2D7D8 )
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
  if ( dword_140E2D7E8 != -1 )
  {
    v6 = *(_DWORD *)(a1 + 152);
    if ( v6 + dword_140E2D7EC >= v6 )
    {
      v7 = (__int64 *)qword_140E2D7E0;
      ++dword_140E2D7E8;
      dword_140E2D7EC += v6;
      if ( (__int64 *)qword_140E2D7D8 == &qword_140E2D7D8 )
      {
        if ( *(__int64 **)qword_140E2D7E0 == &qword_140E2D7D8 )
        {
          *(_QWORD *)a1 = &qword_140E2D7D8;
          *(_QWORD *)(a1 + 8) = v7;
          *v7 = a1;
          qword_140E2D7E0 = a1;
          return 0LL;
        }
      }
      else if ( *(__int64 **)qword_140E2D7E0 == &qword_140E2D7D8 )
      {
        *(_QWORD *)a1 = &qword_140E2D7D8;
        *(_QWORD *)(a1 + 8) = v7;
        *v7 = a1;
        v8 = (__int64 *)qword_140E2D7D8;
        qword_140E2D7E0 = a1;
        while ( v8 != &qword_140E2D7D8 )
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
