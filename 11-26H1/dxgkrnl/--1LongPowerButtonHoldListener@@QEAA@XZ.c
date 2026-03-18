/*
 * XREFs of ??1LongPowerButtonHoldListener@@QEAA@XZ @ 0x14007BC6C
 * Callers:
 *     ??1DisplayDiagnostics@@QEAA@XZ @ 0x14007BC2C (--1DisplayDiagnostics@@QEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x140077C74 (-Stop@LongPowerButtonHoldListener@@QEAAXXZ.c)
 */

void __fastcall LongPowerButtonHoldListener::~LongPowerButtonHoldListener(LongPowerButtonHoldListener *this)
{
  LongPowerButtonHoldListener::Stop(this);
  DXGFASTMUTEX::~DXGFASTMUTEX((LongPowerButtonHoldListener *)((char *)this + 24));
}
