/*
 * XREFs of ??0CSnapshotMarshaler@DirectComposition@@QEAA@XZ @ 0x140054E38
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054F20 (--0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSnapshotMarshaler::CSnapshotMarshaler(
        DirectComposition::CSnapshotMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CSceneObjectMarshaler::CSceneObjectMarshaler(this, 136LL);
  result = v1;
  *v1 = &DirectComposition::CSnapshotMarshaler::`vftable';
  return result;
}
