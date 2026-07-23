/*
 * XREFs of KeIsEmptyGroupMask @ 0x140404550
 * Callers:
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x14060D87C (PpmHeteroHgsCpuSupportedForContainment.c)
 *     PspSelectNodeForProcessNoRestrictions @ 0x1407F89BC (PspSelectNodeForProcessNoRestrictions.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PspReadIFEONodeOptions @ 0x140A78470 (PspReadIFEONodeOptions.c)
 *     PspBuildCreateProcessContext @ 0x140A79424 (PspBuildCreateProcessContext.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 *     KiConfigureProcessorBlock @ 0x140BF9A10 (KiConfigureProcessorBlock.c)
 *     KiComputeNumaCosts @ 0x140CCF47C (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsEmptyGroupMask(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // r10
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // r8d
  int v5; // r14d
  __int64 v6; // rsi
  int i; // edi
  char v8; // dl
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  char v12; // dl

  v1 = a1;
  v2 = 0LL;
  v3 = (unsigned __int8)a1 & 7;
  if ( (unsigned __int64)(8 - v3) <= 4 )
  {
    v4 = 8 - v3;
    v5 = (4 - (8 - (_BYTE)v3)) & 7;
    v6 = 4LL - (unsigned int)(v5 + 8 - v3);
  }
  else
  {
    v4 = 4;
    v5 = 0;
    v6 = 0LL;
  }
  for ( i = 0; v4; --v4 )
  {
    v8 = *(_BYTE *)v1;
    v1 = (unsigned __int64 *)((char *)v1 + 1);
    ++i;
    v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v8);
  }
  if ( v6 )
  {
    v10 = ((unsigned __int64)(v6 - 1) >> 3) + 1;
    i += 8 * v10;
    do
    {
      v11 = *v1++;
      v2 += (unsigned int)__popcnt(v11);
      --v10;
    }
    while ( v10 );
  }
  for ( ; v5; --v5 )
  {
    v12 = *(_BYTE *)v1;
    v1 = (unsigned __int64 *)((char *)v1 + 1);
    ++i;
    v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v12);
  }
  return v2 == 0;
}
