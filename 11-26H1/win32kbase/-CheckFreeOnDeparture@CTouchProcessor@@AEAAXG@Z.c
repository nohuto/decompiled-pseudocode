/*
 * XREFs of ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x14010AA14
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x140214300 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x140142F1C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckFreeOnDeparture(PERESOURCE *this, __int16 a2)
{
  PERESOURCE i; // rdx

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = this[8]; i != (PERESOURCE)(this + 8); i = (PERESOURCE)i->SystemResourcesList.Flink )
  {
    if ( LOWORD(i->SharedWaiters) == a2 )
    {
      if ( i->OwnerEntry.TableSize == 3
        && (OWNER_ENTRY *)i[2].OwnerEntry.OwnerThread == &i[2].OwnerEntry
        && !HIDWORD(i->SharedWaiters) )
      {
        CTouchProcessor::FreeNode((CTouchProcessor *)this, (struct CInputPointerNode *)i);
      }
      return;
    }
  }
}
