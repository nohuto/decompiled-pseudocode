/*
 * XREFs of NvmeNamespaceIsOutstandingRequest @ 0x140107740
 * Callers:
 *     NvmeNamespaceWaitForOutstandingIoComplete @ 0x140116210 (NvmeNamespaceWaitForOutstandingIoComplete.c)
 * Callees:
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400D1B5C (IsOutstandingRequestInNvmeControllerQueue.c)
 */

char __fastcall NvmeNamespaceIsOutstandingRequest(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // esi
  unsigned int i; // edx
  unsigned __int64 v7; // r8
  unsigned int j; // edi
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // r14d
  unsigned int k; // edx
  unsigned __int64 v13; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 712);
  v5 = *(_DWORD *)(v4 + 124);
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 88) + 136LL) & 2) == 0 )
    --v5;
  if ( IsOutstandingRequestInNvmeControllerQueue(v3, v4) )
  {
    for ( i = 0; i < v5; ++i )
    {
      v7 = (unsigned __int64)i << 7;
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 32) + v7 + 60) & 1) != 0
        && *(_DWORD *)(*(_QWORD *)(v4 + 32) + v7 + 80) == *(_DWORD *)(a1 + 56) )
      {
        return 1;
      }
    }
  }
  for ( j = 0; ; ++j )
  {
    v9 = *(_QWORD *)(a1 + 16);
    if ( j >= *(unsigned __int16 *)(v9 + 22) )
      break;
    v10 = *(_QWORD *)(v9 + 728) + 192LL * j;
    v11 = *(_DWORD *)(v10 + 124);
    if ( (*(_BYTE *)(*(_QWORD *)(v10 + 88) + 136LL) & 2) == 0 )
      --v11;
    if ( IsOutstandingRequestInNvmeControllerQueue(v9, v10) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 656LL) == 1 )
        return 1;
      for ( k = 0; k < v11; ++k )
      {
        v13 = (unsigned __int64)k << 7;
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 32) + v13 + 60) & 1) != 0
          && *(_DWORD *)(v13 + *(_QWORD *)(v10 + 32) + 80) == *(_DWORD *)(a1 + 56) )
        {
          return 1;
        }
      }
    }
  }
  return v2;
}
