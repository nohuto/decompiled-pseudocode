/*
 * XREFs of ??0CSpriteShapeMarshaler@DirectComposition@@QEAA@XZ @ 0x140056094
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CShapeMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400560BC (--0CShapeMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSpriteShapeMarshaler::CSpriteShapeMarshaler(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CShapeMarshaler::CShapeMarshaler(this, 138LL);
  result = v1;
  *v1 = &DirectComposition::CSpriteShapeMarshaler::`vftable';
  return result;
}
