/*
 * XREFs of ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1400C779C
 * Callers:
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x140058AF0 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1400C7598 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatch::SetSynchronizationObject(
        DirectComposition::CBatch *this,
        const struct DirectComposition::SynchronizationObject *a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
    ObfDereferenceObject(v4);
  *((_QWORD *)this + 10) = a2;
  if ( a2 )
  {
    ObReferenceObjectByPointer(a2, 3u, ExCompositionObjectType, 0);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 36LL));
    *((_BYTE *)this + 32) |= 0x20u;
  }
  else
  {
    *((_BYTE *)this + 32) &= ~0x20u;
  }
}
