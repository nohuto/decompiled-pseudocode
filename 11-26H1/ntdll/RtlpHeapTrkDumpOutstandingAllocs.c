/*
 * XREFs of RtlpHeapTrkDumpOutstandingAllocs @ 0x180100FC8
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18005F450 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x18005ED80 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkReportResult @ 0x18005F65C (RtlpHeapTrkReportResult.c)
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 */

char RtlpHeapTrkDumpOutstandingAllocs()
{
  unsigned int v0; // edi
  __int64 v1; // rsi
  __int64 v2; // r14
  _QWORD *i; // rbx
  void *v4; // rcx
  __int64 v5; // rbp
  SIZE_T v6; // rax
  int v7; // r8d
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  PVOID Src; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
LABEL_2:
  if ( v0 >= 0x1EEF )
    return 1;
  v1 = v0 & 0xF;
  if ( RtlTryAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801C67C8 + 8 * v1)) )
  {
    v2 = 16LL * v0;
    for ( i = *(_QWORD **)(v2 + qword_1801C6280); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v2 + qword_1801C6280) )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801C67C8 + 8 * v1));
        ++v0;
        goto LABEL_2;
      }
      if ( i[3] )
      {
        v9 = (unsigned __int64)i[2];
        RtlpEnumProcessHeaps(
          (__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpHeapTrkIsHeapValidCallback,
          (__int64)&v9,
          0);
        if ( BYTE8(v9) )
        {
          v4 = (void *)i[2];
          v5 = i[4];
          Src = (PVOID)(8LL * i[3]);
          v6 = RtlSizeHeap(v4, 0, Src);
          if ( v6 != -1LL )
          {
            v7 = v5 ? *(_DWORD *)(v5 + 20) : 0;
            if ( !RtlpHeapTrkReportResult(0x20uLL, 3u, v7, v6, &Src, 8uLL) )
              break;
          }
        }
      }
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801C67C8 + 8 * v1));
  }
  return 0;
}
