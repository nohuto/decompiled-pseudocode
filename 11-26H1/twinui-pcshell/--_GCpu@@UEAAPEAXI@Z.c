/*
 * XREFs of ??_GCpu@@UEAAPEAXI@Z @ 0x180345330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1Cpu@@UEAA@XZ @ 0x18035D334 (--1Cpu@@UEAA@XZ.c)
 */

Cpu *__fastcall Cpu::`scalar deleting destructor'(Cpu *this, char a2)
{
  Cpu::~Cpu(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
