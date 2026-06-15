/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x18003B580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18003B43C (--1CApplicationManager@@MEAA@XZ.c)
 */

CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  CApplicationManager::~CApplicationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
