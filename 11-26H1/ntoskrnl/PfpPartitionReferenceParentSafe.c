/*
 * XREFs of PfpPartitionReferenceParentSafe @ 0x140384710
 * Callers:
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 *     PfTTraceListAdd @ 0x140AF85FC (PfTTraceListAdd.c)
 *     PfTAccessTracingCleanup @ 0x140BFEDFC (PfTAccessTracingCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionReferenceParentSafe(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int64 v2; // rax
  char v3; // cl
  signed __int64 v4; // rtt

  v1 = *a1;
  _m_prefetchw((const void *)(*a1 + 40));
  v2 = *(_QWORD *)(v1 + 40);
  v3 = 1;
  while ( (unsigned __int64)(v2 + 1) > 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 40), v2 + 1, v2);
    if ( v4 == v2 )
      return v1 & -(__int64)(v3 != 0);
  }
  if ( v2 )
    __fastfail(0xEu);
  v3 = 0;
  return v1 & -(__int64)(v3 != 0);
}
