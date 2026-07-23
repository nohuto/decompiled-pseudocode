/*
 * XREFs of MiQueryInitializeRestrictedVa @ 0x140777004
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCompareMemoryUlong @ 0x1407359E0 (RtlCompareMemoryUlong.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall MiQueryInitializeRestrictedVa(__int64 a1)
{
  void *v2; // rdx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  bool v6; // al
  __int128 Source; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-18h]

  Source = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v2 = *(void **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 32) )
    RtlCopyFromUser(&Source, v2, 0x30uLL);
  else
    RtlCopyVolatileMemory(&Source, v2, 0x30uLL);
  v3 = *((_QWORD *)&v9 + 1);
  *((_QWORD *)&v9 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v4 + v3;
  if ( v4 + v3 > v4 )
  {
    if ( v5 <= 0x7FFFFFFF0000LL )
    {
LABEL_11:
      *(_QWORD *)(a1 + 48) = (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL)
                           + ((v3 + (*(_QWORD *)(a1 + 40) & 0xFFFLL) + 4095) & 0xFFFFFFFFFFFFF000uLL);
      return 0LL;
    }
    v6 = 0;
  }
  else
  {
    if ( v3 )
      return 3221225485LL;
    v6 = v5 < 0x7FFFFFFF0000LL;
  }
  if ( v6 )
    goto LABEL_11;
  return 3221225485LL;
}
