/*
 * XREFs of ??_GUnlockActionHelper@@UEAAPEAXI@Z @ 0x18004E610
 * Callers:
 *     <none>
 * Callees:
 *     ??1UnlockActionHelper@@UEAA@XZ @ 0x18004D1F4 (--1UnlockActionHelper@@UEAA@XZ.c)
 */

UnlockActionHelper *__fastcall UnlockActionHelper::`scalar deleting destructor'(UnlockActionHelper *this, char a2)
{
  UnlockActionHelper::~UnlockActionHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
