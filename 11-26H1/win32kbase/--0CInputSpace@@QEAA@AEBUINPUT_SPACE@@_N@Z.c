/*
 * XREFs of ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x14008D984
 * Callers:
 *     ??0CInputSpace@@QEAA@_N@Z @ 0x14008D5E8 (--0CInputSpace@@QEAA@_N@Z.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x1401BDFA8 (--0CInputConfig@@AEAA@XZ.c)
 * Callees:
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x14008D9F4 (--0CInputSpaceRegion@@QEAA@XZ.c)
 */

CInputSpace *__fastcall CInputSpace::CInputSpace(CInputSpace *this, const struct INPUT_SPACE *a2, char a3)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0LL;
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 24));
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 736));
  *((_BYTE *)this + 1448) = a3;
  *((_DWORD *)this + 363) = 0;
  *((_QWORD *)this + 183) = (char *)this + 1456;
  *((_QWORD *)this + 182) = (char *)this + 1456;
  return this;
}
