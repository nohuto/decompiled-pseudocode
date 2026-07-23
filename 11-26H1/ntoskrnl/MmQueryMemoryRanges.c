/*
 * XREFs of MmQueryMemoryRanges @ 0x14086E460
 * Callers:
 *     IoInitializeLiveDump @ 0x1405CE8E8 (IoInitializeLiveDump.c)
 *     IopLiveDumpQueryIOSpaceRanges @ 0x1405D3C78 (IopLiveDumpQueryIOSpaceRanges.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiWalkAllHugeRanges @ 0x140534FF0 (MiWalkAllHugeRanges.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmQueryMemoryRanges(_QWORD *a1)
{
  char v1; // r14
  bool v2; // zf
  unsigned int v4; // edx
  ULONG **v5; // rcx
  ULONG *v6; // rsi
  __int16 v7; // ax
  ULONG *v8; // rax
  int v9; // edi
  PVOID v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  char v15; // [rsp+70h] [rbp+20h] BYREF

  v1 = 0;
  v2 = *(_DWORD *)a1 == 1;
  v15 = 0;
  v12 = 0LL;
  v14 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( !v2 )
    return 3221225485LL;
  if ( a1[5] )
    return 3221225485LL;
  v4 = *((_DWORD *)a1 + 1);
  if ( v4 >= 0x40
    || KeGetCurrentIrql()
    || ((_DWORD)a1[4] & 0x7FFFFFFFu) >= (unsigned __int16)KeNumberNodes
    || (v4 & 1) == 0
    || a1[3] != 0x40000000LL )
  {
    return 3221225485LL;
  }
  v5 = (ULONG **)a1[1];
  if ( v5 == (ULONG **)-2LL )
  {
    v6 = 0LL;
    v7 = 1025;
    goto LABEL_12;
  }
  v8 = MiPartitionObjectToPartition(v5, 0, &v15);
  v6 = v8;
  if ( !v8 )
    return 3221225485LL;
  v7 = *(_WORD *)v8;
  v1 = v15;
LABEL_12:
  v9 = 0;
  if ( *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)
    && (P[1] = a1, LOWORD(v14) = v7, v9 = MiWalkAllHugeRanges((__int64)MiAddRuns, (__int64)&v12), v9 < 0) )
  {
    v10 = P[0];
    if ( P[0] )
    {
      ExFreePoolWithTag(P[0], 0);
      v10 = 0LL;
      P[0] = 0LL;
    }
  }
  else
  {
    v10 = P[0];
  }
  if ( v1 )
  {
    PsDereferencePartition(*((_QWORD *)v6 + 32));
    v10 = P[0];
  }
  if ( v9 >= 0 )
  {
    a1[5] = v12;
    a1[6] = v10;
  }
  return (unsigned int)v9;
}
