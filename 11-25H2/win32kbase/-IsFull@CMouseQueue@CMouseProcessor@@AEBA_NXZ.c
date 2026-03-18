/*
 * XREFs of ?IsFull@CMouseQueue@CMouseProcessor@@AEBA_NXZ @ 0x140190410
 * Callers:
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x140190004 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CMouseProcessor::CMouseQueue::IsFull(CMouseProcessor::CMouseQueue *this)
{
  if ( *((_WORD *)this + 1473) > 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6993LL);
  return *((_WORD *)this + 1473) == 16;
}
