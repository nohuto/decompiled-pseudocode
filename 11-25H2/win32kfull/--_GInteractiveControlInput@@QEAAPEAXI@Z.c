/*
 * XREFs of ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1402ECEBC
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x14021E508 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1402ECF2C (-CleanQueue@InteractiveControlDevice@@QEAAXK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402ED240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 * Callees:
 *     ??1InteractiveControlInput@@QEAA@XZ @ 0x1402EE124 (--1InteractiveControlInput@@QEAA@XZ.c)
 */

InteractiveControlInput *__fastcall InteractiveControlInput::`scalar deleting destructor'(
        InteractiveControlInput *this,
        char a2)
{
  InteractiveControlInput::~InteractiveControlInput(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
