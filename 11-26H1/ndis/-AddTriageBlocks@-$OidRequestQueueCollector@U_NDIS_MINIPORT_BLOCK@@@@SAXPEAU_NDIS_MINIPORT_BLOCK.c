/*
 * XREFs of ?AddTriageBlocks@?$OidRequestQueueCollector@U_NDIS_MINIPORT_BLOCK@@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140093360
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

void __fastcall OidRequestQueueCollector<_NDIS_MINIPORT_BLOCK>::AddTriageBlocks(__int64 a1, TriageDataArray *a2)
{
  void *v4; // rcx
  unsigned __int16 *v5; // rdx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rdi
  unsigned int v8; // ebp
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r8

  v4 = *(void **)(a1 + 2208);
  if ( v4 && MmIsAddressValid(v4) )
  {
    v5 = *(unsigned __int16 **)(a1 + 2208);
    v6 = v5[1];
    if ( v5[1] >= 0xF8u )
      v6 = 248LL;
    TriageDataArray::AddDataBlock(a2, v5, v6);
  }
  v7 = (_QWORD *)(a1 + 2192);
  v8 = 0;
  v9 = *(_QWORD **)(a1 + 2192);
  do
  {
    if ( v9 == v7 || !MmIsAddressValid(v9) || !MmIsAddressValid(v9 - 9) )
      break;
    v10 = *((unsigned __int16 *)v9 - 35);
    if ( *((_WORD *)v9 - 35) >= 0xF8u )
      v10 = 248LL;
    TriageDataArray::AddDataBlock(a2, v9 - 9, v10);
    v9 = (_QWORD *)*v9;
    ++v8;
  }
  while ( v8 < 0xA );
}
