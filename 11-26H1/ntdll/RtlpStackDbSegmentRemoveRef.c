/*
 * XREFs of RtlpStackDbSegmentRemoveRef @ 0x18015B3A8
 * Callers:
 *     RtlpStackDbEntryCleanup @ 0x18015B124 (RtlpStackDbEntryCleanup.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpStackDbSegmentRemoveRef(__int64 a1, _QWORD *a2)
{
  signed __int64 v2; // r8
  signed __int64 i; // rax
  _QWORD *j; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h]

  v2 = a2[2];
  for ( i = v2; (i & 0xFFFFFFFFFFFFFFLL) != 1; v2 = i )
  {
    i = _InterlockedCompareExchange64(a2 + 2, (v2 - 1) ^ (v2 ^ (v2 - 1)) & 0xFF00000000000000uLL, v2);
    if ( v2 == i )
      break;
  }
  if ( (v2 & 0xFFFFFFFFFFFFFFuLL) <= 1 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
    if ( (_InterlockedDecrement64(a2 + 2) & 0xFFFFFFFFFFFFFFLL) != 0 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
    }
    else
    {
      v7 = a2[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
      for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8LL
                         * (((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v7)
                                                              - 877075889
                                                              + 442596621 * (unsigned __int8)v7
                                                              + 37
                                                              * (BYTE6(v7)
                                                               + 37
                                                               * (BYTE5(v7)
                                                                + 37
                                                                * (BYTE4(v7)
                                                                 + 37
                                                                 * (BYTE3(v7)
                                                                  + 37 * (BYTE2(v7) + 37 * (unsigned int)BYTE1(v7)))))))));
            (*j & 1) == 0;
            j = (_QWORD *)*j )
      {
        if ( (_QWORD *)*j == a2 )
        {
          *j = *a2;
          --*(_DWORD *)a1;
          *a2 |= 0x8000000000000002uLL;
          break;
        }
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
      (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(a2, *(_QWORD *)(a1 + 64));
    }
  }
}
