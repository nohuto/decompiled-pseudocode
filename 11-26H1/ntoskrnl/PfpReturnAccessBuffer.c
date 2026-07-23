/*
 * XREFs of PfpReturnAccessBuffer @ 0x1404D2BC0
 * Callers:
 *     PfpFlushBuffers @ 0x1409F13D0 (PfpFlushBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MmFreeAccessPfnBuffer @ 0x14049D998 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r15d
  int v5; // edi
  __int64 v6; // rax
  BOOL v7; // ebp

  v2 = *(_QWORD *)(a1 + 32);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v2 + 728)) )
    goto LABEL_19;
  v4 = *(unsigned __int16 *)(v2 + 768);
  if ( v4 >= *(_DWORD *)(v2 + 760) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v2 + 688), 0x64u);
    v5 = 0;
  }
  else
  {
    v5 = 1;
    v7 = 0;
    if ( *(int *)(a2 + 8) <= 1 )
    {
      v6 = *(_QWORD *)(a2 + 56);
      if ( v6 )
      {
        if ( *(PVOID *)v2 != PspSystemPartition
          && (*(_DWORD *)(v6 + 500) & 4) != 0
          && (*(_DWORD *)(*(_QWORD *)v2 + 136LL) & 1) != 0 )
        {
          v7 = 1;
        }
      }
    }
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 768), (PSLIST_ENTRY)a2);
    if ( !*(_DWORD *)(v2 + 740) && (unsigned __int16)v4 >= 8u )
      KeSetEvent((PRKEVENT)(v2 + 736), 0, 0);
    if ( !*(_DWORD *)(v2 + 740) )
    {
      if ( v7 )
        KeSetEvent((PRKEVENT)(v2 + 736), 0, 0);
    }
  }
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v2 + 728));
  if ( !v5 )
LABEL_19:
    MmFreeAccessPfnBuffer((_QWORD *)a2, 0);
}
