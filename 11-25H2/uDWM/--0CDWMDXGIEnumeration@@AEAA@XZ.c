/*
 * XREFs of ??0CDWMDXGIEnumeration@@AEAA@XZ @ 0x180066A04
 * Callers:
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x180066930 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??0CMILRefCountBase@@QEAA@XZ @ 0x180067328 (--0CMILRefCountBase@@QEAA@XZ.c)
 */

CDWMDXGIEnumeration *__fastcall CDWMDXGIEnumeration::CDWMDXGIEnumeration(CDWMDXGIEnumeration *this)
{
  _QWORD *v1; // r9
  CDWMDXGIEnumeration *v2; // r9

  CMILRefCountBase::CMILRefCountBase(this);
  *v1 = &CDWMDXGIEnumeration::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)(v1 + 7), 0LL, 0);
  return v2;
}
