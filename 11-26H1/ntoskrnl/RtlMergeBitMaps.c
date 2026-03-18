/*
 * XREFs of RtlMergeBitMaps @ 0x140465FF0
 * Callers:
 *     HvUnCOWReconciledPages @ 0x140465CE8 (HvUnCOWReconciledPages.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     HvStoreModifiedData @ 0x1408B7270 (HvStoreModifiedData.c)
 *     HvFoldBackUnreconciledData @ 0x140AE563C (HvFoldBackUnreconciledData.c)
 *     HvpPerformLogFileRecovery @ 0x140AEB2A8 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMaps(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  __int64 v5; // r8

  result = *a2;
  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 >= (unsigned int)result )
    v3 = *a2;
  v4 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      result = 4LL * v4;
      if ( v3 < 0x20 )
        break;
      ++v4;
      *(_DWORD *)(v5 + result) |= *(_DWORD *)(result + *((_QWORD *)a2 + 1));
      v3 -= 32;
      if ( !v3 )
        return result;
    }
    *(_DWORD *)(v5 + 4LL * v4) |= *(_DWORD *)(4LL * v4 + *((_QWORD *)a2 + 1)) & ((1LL << v3) - 1);
  }
  return result;
}
