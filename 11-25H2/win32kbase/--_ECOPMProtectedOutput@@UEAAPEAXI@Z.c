/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1401454F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x140083440 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x140145528 (--1COPMProtectedOutput@@UEAA@XZ.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(COPMProtectedOutput *this, char a2)
{
  void *v4; // rdx

  COPMProtectedOutput::~COPMProtectedOutput(this);
  if ( (a2 & 1) != 0 )
    OPM::OPMFreeMemory(this, v4);
  return this;
}
