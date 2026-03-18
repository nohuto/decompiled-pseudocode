/*
 * XREFs of ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x14071C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14071C1EC (--1SC_DEVICE@@UEAA@XZ.c)
 *     PspUserApcKernelRoutine @ 0x140959620 (PspUserApcKernelRoutine.c)
 */

SC_DEVICE *__fastcall SC_DEVICE::`scalar deleting destructor'(SC_DEVICE *this, char a2)
{
  SC_DEVICE::~SC_DEVICE(this);
  if ( (a2 & 1) != 0 )
    PspUserApcKernelRoutine(this);
  return this;
}
