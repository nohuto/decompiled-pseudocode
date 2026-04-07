/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAXPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x1800BAB40
 * Callers:
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x1800BA5A4 (--1CMagnifierControl@@EEAA@XZ.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800BA8EC (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x180050BE0 (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 */

void __fastcall CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CMagnifierControl::MagnifierTableElement *this)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = *(_QWORD *)this;
  Buffer[1] = 0LL;
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement(this);
  if ( !RtlDeleteElementGenericTable(Table, Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
}
