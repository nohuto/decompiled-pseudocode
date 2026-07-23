/*
 * XREFs of VslpRecordBootRanges @ 0x140D0FFC8
 * Callers:
 *     VslConnectSwInterrupt @ 0x140D0CEFC (VslConnectSwInterrupt.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x140479300 (RtlPcToFileHeader.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall VslpRecordBootRanges(__int64 a1, unsigned __int64 a2)
{
  void *v2; // rbx
  ULONG_PTR Pool2; // r14
  unsigned __int64 i; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD *v10; // r15
  PVOID BaseOfImage; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( VslpHiberBootRanges )
    return 3221225865LL;
  Pool2 = 0LL;
  for ( i = 0LL; i < 2; ++i )
  {
    v2 = 0LL;
    v8 = a2 >> 6;
    if ( a2 >> 6 )
    {
      v9 = a1 + 8;
      v10 = (_QWORD *)Pool2;
      do
      {
        --v8;
        if ( (*(_WORD *)(v9 + 16) == 4097 || *(_WORD *)(v9 + 16) == 4105)
          && *(_QWORD *)(v9 + 8)
          && (*(_BYTE *)(v9 + 18) & 1) == 0
          && !RtlPcToFileHeader(*(PVOID *)v9, &BaseOfImage) )
        {
          if ( i == 1 )
          {
            *v10 = *(_QWORD *)v9;
            v10[1] = *(_QWORD *)(v9 + 8);
          }
          v2 = (char *)v2 + 1;
          v10 += 2;
        }
        v9 += 64LL;
      }
      while ( v8 );
    }
    if ( !i )
    {
      if ( !v2 )
        return 0LL;
      Pool2 = ExAllocatePool2(64LL, 16LL * (_QWORD)v2, 0x526C7356u);
      if ( !Pool2 )
        return 3221225626LL;
    }
  }
  VslpHiberBootRanges = Pool2;
  VslpReservedTransferLock.FirstArgument = v2;
  return 0LL;
}
