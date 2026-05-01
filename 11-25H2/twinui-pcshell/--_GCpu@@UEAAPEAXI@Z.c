/*
 * XREFs of ??_GCpu@@UEAAPEAXI@Z @ 0x1803429F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1Cpu@@UEAA@XZ @ 0x180356A44 (--1Cpu@@UEAA@XZ.c)
 */

Cpu *__fastcall Cpu::`scalar deleting destructor'(Cpu *this, char a2)
{
  Cpu::~Cpu(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
