/*
 * XREFs of ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x140134970
 * Callers:
 *     ??0CInputSpace@@QEAA@_N@Z @ 0x14013493C (--0CInputSpace@@QEAA@_N@Z.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x14019EAAC (--0CInputConfig@@AEAA@XZ.c)
 * Callees:
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1401349E0 (--0CInputSpaceRegion@@QEAA@XZ.c)
 */

CInputSpace *__fastcall CInputSpace::CInputSpace(CInputSpace *this, const struct INPUT_SPACE *a2, char a3)
{
  int v5; // eax

  *(_QWORD *)this = *(_QWORD *)a2;
  v5 = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 2) = v5;
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 24));
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 736));
  *((_DWORD *)this + 363) = 0;
  *((_BYTE *)this + 1448) = a3;
  *((_QWORD *)this + 183) = 0LL;
  *((_QWORD *)this + 183) = (char *)this + 1456;
  *((_QWORD *)this + 182) = (char *)this + 1456;
  return this;
}
