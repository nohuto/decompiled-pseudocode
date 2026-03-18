/*
 * XREFs of ?ModifiableInputSpace@Iter@CInputConfig@@QEAAPEAUCInputSpace@@XZ @ 0x140212054
 * Callers:
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x14008EE48 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x14008E5A0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CInputSpace *__fastcall CInputConfig::Iter::ModifiableInputSpace(CInputConfig::Iter *this, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8

  v4 = 0LL;
  if ( !CInputConfig::LockExclusivelyHeld((int)this, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 384);
  v5 = *((_QWORD *)this + 2);
  if ( v5 != *((_QWORD *)this + 1) )
    return (struct CInputSpace *)(v5 + 16);
  return (struct CInputSpace *)v4;
}
