/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x1802E4BBC
 * Callers:
 *     ??_ECApplicationManager@@OFI@EAAPEAXI@Z @ 0x1802E48D0 (--_ECApplicationManager@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1802E3CD4 (--1CApplicationManager@@MEAA@XZ.c)
 */

CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  CApplicationManager::~CApplicationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x420);
  return this;
}
