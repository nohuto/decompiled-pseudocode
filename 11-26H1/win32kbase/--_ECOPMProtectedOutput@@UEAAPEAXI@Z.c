/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1400094C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x140009760 (--1COPMProtectedOutput@@UEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14000A430 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(COPMProtectedOutput *this, char a2)
{
  void *v4; // rdx

  COPMProtectedOutput::~COPMProtectedOutput(this);
  if ( (a2 & 1) != 0 )
    OPM::OPMFreeMemory(this, v4);
  return this;
}
