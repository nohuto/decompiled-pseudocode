/*
 * XREFs of ??_GSnapEducationHandler@@UEAAPEAXI@Z @ 0x18057AD10
 * Callers:
 *     ??_ESnapEducationHandler@@W7EAAPEAXI@Z @ 0x18057AB10 (--_ESnapEducationHandler@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SnapEducationHandler@@UEAA@XZ @ 0x18057A4CC (--1SnapEducationHandler@@UEAA@XZ.c)
 */

void **__fastcall SnapEducationHandler::`scalar deleting destructor'(void **this, char a2)
{
  SnapEducationHandler::~SnapEducationHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
