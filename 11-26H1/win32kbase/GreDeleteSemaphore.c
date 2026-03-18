/*
 * XREFs of GreDeleteSemaphore @ 0x1400C6C70
 * Callers:
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     EngDeleteSemaphore @ 0x1400C6C50 (EngDeleteSemaphore.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x140170C6C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1401B591C (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1401ED038 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x1401ED754 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     EngDeleteSafeSemaphore @ 0x1401F36D0 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x140044510 (MultiUserGreTrackRemoveEngResource.c)
 */

void __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource(&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    GreDeleteFastMutex((char *)&Resource[-1].NumberOfSharedWaiters, v2, v3, v4);
  }
}
