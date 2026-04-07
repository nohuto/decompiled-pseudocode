/*
 * XREFs of ??0CMILRefCountBase@@QEAA@XZ @ 0x180067328
 * Callers:
 *     ??0CDWMDXGIEnumeration@@AEAA@XZ @ 0x180066A04 (--0CDWMDXGIEnumeration@@AEAA@XZ.c)
 *     ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x1800672C4 (--0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 * Callees:
 *     <none>
 */

CMILRefCountBase *__fastcall CMILRefCountBase::CMILRefCountBase(CMILRefCountBase *this)
{
  CMILRefCountBase *result; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  result = this;
  *((_DWORD *)this + 2) = 0;
  return result;
}
