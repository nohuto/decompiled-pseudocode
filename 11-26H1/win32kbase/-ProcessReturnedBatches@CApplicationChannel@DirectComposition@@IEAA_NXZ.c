/*
 * XREFs of ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1400AE4E0
 * Callers:
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1400B46B8 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400B4790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400B4CB8 (-OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1401290C8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1401293C0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401B2C40 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 *     ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x1401B95EC (-CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPO.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1401BC1EC (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 * Callees:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1400AE5A4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 */

PSLIST_ENTRY __fastcall DirectComposition::CApplicationChannel::ProcessReturnedBatches(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v3; // rdi
  struct _SLIST_ENTRY *Next; // rax

  KeResetEvent(*(PRKEVENT *)(this[15].Alignment + 8));
  result = ExpInterlockedPopEntrySList(this + 13);
  v3 = result;
  if ( result )
  {
    do
    {
      --*((_DWORD *)&this[15].HeaderX64 + 3);
      Next = v3[4].Next;
      if ( (unsigned __int64)Next > this[16].Alignment )
      {
        *((_BYTE *)&this[16].HeaderX64 + 8) |= 2u;
        this[16].Alignment = (ULONGLONG)Next;
      }
      DirectComposition::CBatch::Clear((DirectComposition::CBatch *)v3);
      v3->Next = (struct _SLIST_ENTRY *)this[12].Alignment;
      this[12].Alignment = (ULONGLONG)v3;
      v3 = ExpInterlockedPopEntrySList(this + 13);
    }
    while ( v3 );
    return (PSLIST_ENTRY)1;
  }
  return result;
}
