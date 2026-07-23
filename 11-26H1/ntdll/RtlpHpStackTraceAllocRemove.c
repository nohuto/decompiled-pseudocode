/*
 * XREFs of RtlpHpStackTraceAllocRemove @ 0x18014F6F8
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x180016B50 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x18014F640 (RtlpHpStackTraceAllocFindMapping.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocRemove(__int64 a1, __int64 a2)
{
  _QWORD *Mapping; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  _QWORD *i; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h]

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  Mapping = RtlpHpStackTraceAllocFindMapping(a1, a2);
  v5 = (__int64)Mapping;
  if ( Mapping )
  {
    v10 = Mapping[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                       + 8LL
                       * (((*(_DWORD *)(a1 + 20) >> 5) - 1) & (HIBYTE(v10)
                                                             + 37
                                                             * (BYTE6(v10)
                                                              + 37
                                                              * (BYTE5(v10)
                                                               + 37
                                                               * (BYTE4(v10)
                                                                + 37
                                                                * (BYTE3(v10)
                                                                 + 374026047
                                                                 + 37
                                                                 * (BYTE2(v10)
                                                                  + 37
                                                                  * (BYTE1(v10) + 37
                                                                                * (unsigned int)(unsigned __int8)v10)))))))));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == Mapping )
      {
        *i = *Mapping;
        --*(_DWORD *)(a1 + 16);
        *Mapping |= 0x8000000000000002uLL;
        break;
      }
    }
    v6 = Mapping[2];
  }
  else
  {
    v6 = 0LL;
  }
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  if ( v5 )
  {
    v9 = RtlpHpEnvHandle;
    RtlpHpMetadataFree(v5, &v9);
  }
  return v6;
}
