/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x1802B3EA8
 * Callers:
 *     ??1CFormatConverter@@MEAA@XZ @ 0x1802B3E48 (--1CFormatConverter@@MEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x1802B3F50 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CScanPipeline::~CScanPipeline(void **this)
{
  *this = &CScanPipeline::`vftable';
  operator delete(this[80]);
  this[80] = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 74));
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 67));
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 1));
}
