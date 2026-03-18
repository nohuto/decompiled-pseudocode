/*
 * XREFs of ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x140077C74
 * Callers:
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x140077CC0 (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ??1LongPowerButtonHoldListener@@QEAA@XZ @ 0x14007BC6C (--1LongPowerButtonHoldListener@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall LongPowerButtonHoldListener::Stop(LongPowerButtonHoldListener *this)
{
  if ( *(_QWORD *)this )
  {
    ExUnsubscribeWnfStateChange();
    *(_QWORD *)this = 0LL;
  }
}
