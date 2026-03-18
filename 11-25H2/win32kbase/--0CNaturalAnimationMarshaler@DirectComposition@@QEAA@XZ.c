/*
 * XREFs of ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x14019FA4C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

LARGE_INTEGER *__fastcall DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(
        LARGE_INTEGER *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)this, 111);
  this->QuadPart = (LONGLONG)&DirectComposition::CNaturalAnimationMarshaler::`vftable';
  this[22] = KeQueryPerformanceCounter(0LL);
  this[23].QuadPart = 0LL;
  this[24].LowPart = 0;
  return this;
}
