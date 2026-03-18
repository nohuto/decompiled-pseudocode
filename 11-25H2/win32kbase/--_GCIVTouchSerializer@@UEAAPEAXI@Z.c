/*
 * XREFs of ??_GCIVTouchSerializer@@UEAAPEAXI@Z @ 0x140217110
 * Callers:
 *     <none>
 * Callees:
 *     ??1CIVSerializer@@UEAA@XZ @ 0x14019C368 (--1CIVSerializer@@UEAA@XZ.c)
 */

CIVTouchSerializer *__fastcall CIVTouchSerializer::`scalar deleting destructor'(CIVTouchSerializer *this)
{
  *(_QWORD *)this = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer(this);
  return this;
}
