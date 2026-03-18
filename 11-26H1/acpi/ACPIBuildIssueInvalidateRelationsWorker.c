/*
 * XREFs of ACPIBuildIssueInvalidateRelationsWorker @ 0x14004F2DC
 * Callers:
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x14004F2DC (ACPIBuildIssueInvalidateRelationsWorker.c)
 *     ACPIBuildIssueInvalidateRelations @ 0x140057CF0 (ACPIBuildIssueInvalidateRelations.c)
 * Callees:
 *     ACPIPendingInvalidate @ 0x14004427C (ACPIPendingInvalidate.c)
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x14004F2DC (ACPIBuildIssueInvalidateRelationsWorker.c)
 */

void __fastcall ACPIBuildIssueInvalidateRelationsWorker(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 0x208) == 0x200 )
  {
    if ( (v2 & 0x40000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFBFFFFFFFFFFuLL);
      if ( !ACPIPendingInvalidate(a1) )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v3 + 784), BusRelations);
    }
    else
    {
      v4 = (_QWORD *)(a1 + 800);
      v5 = *(_QWORD **)(a1 + 800);
      while ( v5 != v4 )
      {
        v6 = v5 - 102;
        v5 = (_QWORD *)*v5;
        v7 = v6[1];
        if ( (v7 & 8) == 0 && (v7 & 0x200) != 0 )
          ACPIBuildIssueInvalidateRelationsWorker();
      }
    }
  }
}
