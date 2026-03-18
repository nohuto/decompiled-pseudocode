/*
 * XREFs of ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1400C61E0
 * Callers:
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1401ED038 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x1401ED754 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400C6CB8 (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C1164 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall PDEV::Free(struct PDEV *a1)
{
  if ( *((_QWORD *)a1 + 442) )
    ReleaseReferenceCountedObjectHandle(1LL);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(a1);
}
