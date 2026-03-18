/*
 * XREFs of PfLogForegroundProcess @ 0x14025875C
 * Callers:
 *     MiAgeTargetedWorkingSet @ 0x140476D30 (MiAgeTargetedWorkingSet.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140258850 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     PfLogEvent @ 0x1403829A0 (PfLogEvent.c)
 */

__int64 __fastcall PfLogForegroundProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // edi
  size_t Size; // [rsp+20h] [rbp-28h]
  int v9[2]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]

  v2 = *(_QWORD *)(a1 + 856);
  if ( (unsigned __int8)PsReferencePartitionSafe(v2, a2, a1) )
  {
    v4 = *(_QWORD *)(v2 + 32);
    v5 = v2;
    if ( v2 && v4 && *(_DWORD *)(v4 + 608) < *(_DWORD *)(v4 + 612) )
    {
      *(_QWORD *)v9 = *(unsigned int *)(v3 - 560);
      v10 = *(_DWORD *)(v3 - 124);
      v11 = 0;
      LODWORD(Size) = 16;
      v6 = PfLogEvent(
             v4,
             7,
             HIDWORD(stru_140E66B30.WriteOperationCount)
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                           + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
             (int)v9,
             Size);
      v5 = v2;
      goto LABEL_5;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v6 = -1073741637;
  if ( v5 )
LABEL_5:
    PsDereferencePartition(v5, 1951426128LL);
  return v6;
}
