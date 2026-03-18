/*
 * XREFs of ??_GCRecalcState@@UEAAPEAXI@Z @ 0x140023F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRecalcState@@UEAA@XZ @ 0x140023D64 (--1CRecalcState@@UEAA@XZ.c)
 */

CMonitorTopology **__fastcall CRecalcState::`scalar deleting destructor'(CMonitorTopology **this, char a2)
{
  CRecalcState::~CRecalcState(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
