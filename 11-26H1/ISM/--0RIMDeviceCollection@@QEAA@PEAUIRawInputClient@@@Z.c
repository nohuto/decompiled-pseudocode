/*
 * XREFs of ??0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180044D50
 * Callers:
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180044D10 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

RIMDeviceCollection *__fastcall RIMDeviceCollection::RIMDeviceCollection(
        RIMDeviceCollection *this,
        struct IRawInputClient *a2)
{
  RIMDeviceCollection *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &RIMDeviceCollection::`vftable';
  *((_DWORD *)this + 8) = 0;
  memset_0((char *)this + 88, 0, 0x208uLL);
  *((_OWORD *)this + 38) = 0LL;
  memset_0((char *)this + 624, 0, 0x800uLL);
  *((_DWORD *)this + 668) = 0;
  *((_QWORD *)this + 5) = 0LL;
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 335) = 0LL;
  *((_DWORD *)this + 672) = 0;
  *((_QWORD *)this + 337) = 0LL;
  *((_OWORD *)this + 170) = 0LL;
  *((_BYTE *)this + 2736) = 0;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
