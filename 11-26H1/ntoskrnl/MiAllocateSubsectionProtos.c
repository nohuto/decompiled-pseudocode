/*
 * XREFs of MiAllocateSubsectionProtos @ 0x1404503C4
 * Callers:
 *     MiGetAllSubsectionCharges @ 0x1404C8274 (MiGetAllSubsectionCharges.c)
 * Callees:
 *     MiAllocateProtoPool @ 0x1403988A0 (MiAllocateProtoPool.c)
 *     MiSetSubsectionBase @ 0x1404504B8 (MiSetSubsectionBase.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiInitializePrototypePtes @ 0x140988FE0 (MiInitializePrototypePtes.c)
 */

__int64 __fastcall MiAllocateSubsectionProtos(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v7; // eax
  __int64 v8; // rbp
  ULONG_PTR ProtoPool; // rax

  v3 = 0LL;
  while ( 1 )
  {
    v7 = a2 - v3 > a3 ? a3 : (int)a2 - (int)v3;
    v8 = v7;
    ProtoPool = MiAllocateProtoPool(274LL, v7, 1951624525LL);
    if ( !ProtoPool )
      break;
    v3 += v8;
    MiInitializePrototypePtes(ProtoPool);
    MiSetSubsectionBase(BugCheckParameter2, 0LL);
    MiUpdateSystemProtoPtesTree(BugCheckParameter2 + 120, 1LL);
    BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( v3 >= a2 )
      return 0LL;
  }
  return 3221225626LL;
}
