/*
 * XREFs of ?AddTriageBlocks@MiniportCustomCollector@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140093A70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E7A90 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

void __fastcall MiniportCustomCollector::AddTriageBlocks(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct TriageDataArray *a2,
        const struct BugcheckParameters *a3)
{
  _NDIS_IF_BLOCK *IfBlock; // rdx
  NDIS_EVENT_LOG_HANDLE__ *PnpEventLog; // rcx
  NDIS_EVENT_LOG_HANDLE__ *v7; // rdx
  unsigned int v8; // eax

  if ( a3->Code == 159 && a3->Parameter1 == 3 && a1->PhysicalDeviceObject == (_DEVICE_OBJECT *)a3->Parameter2 )
    qword_14011CC60 = (__int64)a1;
  IfBlock = a1->IfBlock;
  if ( IfBlock )
    TriageDataArray::AddDataBlock(a2, IfBlock, 0x4D0uLL);
  PnpEventLog = a1->PnpEventLog;
  if ( PnpEventLog && MmIsAddressValid(PnpEventLog) )
  {
    v7 = a1->PnpEventLog;
    v8 = 4096;
    if ( *((_DWORD *)v7 + 7) < 0x1000u )
      v8 = *((_DWORD *)v7 + 7);
    TriageDataArray::AddDataBlock(a2, v7, v8);
  }
}
