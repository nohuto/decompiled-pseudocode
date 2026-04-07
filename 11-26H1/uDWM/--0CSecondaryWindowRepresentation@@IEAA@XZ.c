/*
 * XREFs of ??0CSecondaryWindowRepresentation@@IEAA@XZ @ 0x180089588
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180028B6C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CSecondaryWindowRepresentation *__fastcall CSecondaryWindowRepresentation::CSecondaryWindowRepresentation(
        CSecondaryWindowRepresentation *this)
{
  __int64 v1; // rcx
  CSecondaryWindowRepresentation *result; // rax

  CBaseObject::CBaseObject(this);
  *(_QWORD *)v1 = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v1 + 16) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_DWORD *)(v1 + 72) = 0;
  *(_QWORD *)(v1 + 128) = 0LL;
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_QWORD *)(v1 + 144) = 0LL;
  *(_DWORD *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 216) = 0LL;
  *(_QWORD *)(v1 + 224) = 0LL;
  *(_QWORD *)(v1 + 192) = 0x3FF0000000000000LL;
  *(_QWORD *)(v1 + 184) = 0x3FF0000000000000LL;
  result = (CSecondaryWindowRepresentation *)v1;
  *(_WORD *)(v1 + 256) = 0;
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_WORD *)(v1 + 160) = 0;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_DWORD *)(v1 + 120) = 100;
  *(_DWORD *)(v1 + 200) = 1065353216;
  return result;
}
