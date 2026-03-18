/*
 * XREFs of ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x14000480C
 * Callers:
 *     VidMmTerminateProcess @ 0x1400047F0 (VidMmTerminateProcess.c)
 *     VidMmCreateProcess @ 0x14003F240 (VidMmCreateProcess.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1401294CC (--1VIDMM_PROCESS@@QEAA@XZ.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::`scalar deleting destructor'(VIDMM_PROCESS *this)
{
  VIDMM_PROCESS::~VIDMM_PROCESS(this);
  operator delete(this);
  return this;
}
