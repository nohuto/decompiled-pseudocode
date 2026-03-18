/*
 * XREFs of GreDeleteSemaphore @ 0x14006D810
 * Callers:
 *     EngDeleteSemaphore @ 0x14006D7F0 (EngDeleteSemaphore.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x14006E15C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     vUnreferencePdevWorker @ 0x140092830 (vUnreferencePdevWorker.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x14019B544 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019D5BC (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019E28C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1401C7890 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x140047360 (MultiUserGreTrackRemoveEngResource.c)
 */

void __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource((__int64 *)&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    GreDeleteFastMutex((char *)&Resource[-1].NumberOfSharedWaiters);
  }
}
