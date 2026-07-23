/*
 * XREFs of MiEmptyDeferredWorkingSetEntries @ 0x1402C7EE0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCachePtesValid @ 0x1402C7F80 (MiMakeSystemCachePtesValid.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402CC3A0 (MiQueueCoreWorkingSetEntries.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 */

__int64 __fastcall MiEmptyDeferredWorkingSetEntries(__int64 *a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[2] << 25 >> 16 << 25;
  v4 = *((unsigned __int16 *)a1 + 4);
  v5 = *((_BYTE *)a1 + 13) & 2;
  v6 = (v4 << 12) + (v3 >> 16);
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = v5 | 5;
  }
  else
  {
    v7 = v5 | 4;
    if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 )
      v7 = v5;
  }
  MiAddWorkingSetEntries(v2, v6, *((unsigned __int16 *)a1 + 5), v7);
  result = 0LL;
  *((_WORD *)a1 + 5) = 0;
  return result;
}
