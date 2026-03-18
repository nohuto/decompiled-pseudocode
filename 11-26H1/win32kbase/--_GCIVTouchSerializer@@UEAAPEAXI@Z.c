/*
 * XREFs of ??_GCIVTouchSerializer@@UEAAPEAXI@Z @ 0x14021C600
 * Callers:
 *     <none>
 * Callees:
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 */

CIVTouchSerializer *__fastcall CIVTouchSerializer::`scalar deleting destructor'(
        CIVTouchSerializer *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer(this, a2, a3, a4);
  return this;
}
