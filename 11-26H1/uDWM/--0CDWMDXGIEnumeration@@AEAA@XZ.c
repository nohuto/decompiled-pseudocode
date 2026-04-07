/*
 * XREFs of ??0CDWMDXGIEnumeration@@AEAA@XZ @ 0x180057120
 * Callers:
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x180057018 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CDWMDXGIEnumeration *__fastcall CDWMDXGIEnumeration::CDWMDXGIEnumeration(CDWMDXGIEnumeration *this)
{
  CDWMDXGIEnumeration *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CDWMDXGIEnumeration::`vftable';
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  return result;
}
