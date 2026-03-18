/*
 * XREFs of ?Free@PDEV@@SAXPEAV1@H@Z @ 0x140092D10
 * Callers:
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 *     vUnreferencePdevWorker @ 0x140092830 (vUnreferencePdevWorker.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019D5BC (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019E28C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x140093214 (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14019FBE8 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall PDEV::Free(struct PDEV *a1)
{
  if ( *((_QWORD *)a1 + 442) )
    ReleaseReferenceCountedObjectHandle(1LL);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(a1);
}
