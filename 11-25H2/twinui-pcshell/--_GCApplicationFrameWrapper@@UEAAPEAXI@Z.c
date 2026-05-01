/*
 * XREFs of ??_GCApplicationFrameWrapper@@UEAAPEAXI@Z @ 0x180081530
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationFrameWrapper@@UEAA@XZ @ 0x18008156C (--1CApplicationFrameWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CApplicationFrameWrapper *__fastcall CApplicationFrameWrapper::`scalar deleting destructor'(
        CApplicationFrameWrapper *this,
        char a2)
{
  CApplicationFrameWrapper::~CApplicationFrameWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
