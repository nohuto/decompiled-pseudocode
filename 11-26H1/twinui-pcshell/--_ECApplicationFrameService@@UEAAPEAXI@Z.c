/*
 * XREFs of ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x1802F9690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationFrameService@@UEAA@XZ @ 0x1802F9540 (--1CApplicationFrameService@@UEAA@XZ.c)
 */

CApplicationFrameService *__fastcall CApplicationFrameService::`vector deleting destructor'(
        CApplicationFrameService *this,
        char a2)
{
  CApplicationFrameService::~CApplicationFrameService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
