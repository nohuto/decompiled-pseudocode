/*
 * XREFs of RtlStackDbStackRemove @ 0x180120DAC
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x18002BA50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014F3D4 (RtlpHpPerHeapStackTraceCleanup.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpStackDbEntryCleanup @ 0x18015B258 (RtlpStackDbEntryCleanup.c)
 */

__int64 __fastcall RtlStackDbStackRemove(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r8
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD *i; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = a2;
  for ( result = v2; ; v2 = result )
  {
    result &= 0xFFFFFFFFFFFFFFuLL;
    if ( result == 1 )
      break;
    a2 = 0xFF00000000000000uLL;
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(v3 + 16),
               (v2 - 1) ^ (v2 ^ (v2 - 1)) & 0xFF00000000000000uLL,
               v2);
    if ( v2 == result )
      break;
  }
  if ( (v2 & 0xFFFFFFFFFFFFFFuLL) <= 1 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), a2);
    if ( (_InterlockedDecrement64((volatile signed __int64 *)(v3 + 16)) & 0xFFFFFFFFFFFFFFLL) != 0 )
    {
      return (__int64)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
    }
    else
    {
      v7 = *(_QWORD *)(v3 + 8) & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                         + 8LL
                         * (((*(_DWORD *)(a1 + 20) >> 5) - 1) & (HIBYTE(v7)
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
            (*i & 1) == 0;
            i = (_QWORD *)*i )
      {
        if ( *i == v3 )
        {
          *i = *(_QWORD *)v3;
          --*(_DWORD *)(a1 + 16);
          *(_QWORD *)v3 |= 0x8000000000000002uLL;
          break;
        }
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
      return RtlpStackDbEntryCleanup(a1, v3);
    }
  }
  return result;
}
