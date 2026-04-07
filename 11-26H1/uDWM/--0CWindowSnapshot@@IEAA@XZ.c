/*
 * XREFs of ??0CWindowSnapshot@@IEAA@XZ @ 0x18008BE20
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003457C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CWindowSnapshot *__fastcall CWindowSnapshot::CWindowSnapshot(CWindowSnapshot *this)
{
  __int64 v1; // rcx
  CWindowSnapshot *result; // rax

  CBaseObject::CBaseObject(this);
  *(_QWORD *)(v1 + 16) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)v1 = &CWindowSnapshot::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 40) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_QWORD *)(v1 + 72) = 0LL;
  result = (CWindowSnapshot *)v1;
  *(_DWORD *)(v1 + 56) = 1065353216;
  return result;
}
