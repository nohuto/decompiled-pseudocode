/*
 * XREFs of ??0CInterceptWindowProp@@QEAA@XZ @ 0x1402CA938
 * Callers:
 *     ??$CreateWindowProp@VCInterceptWindowProp@@@CWindowProp@@SAJPEAPEAVCInterceptWindowProp@@@Z @ 0x1402CA87C (--$CreateWindowProp@VCInterceptWindowProp@@@CWindowProp@@SAJPEAPEAVCInterceptWindowProp@@@Z.c)
 * Callees:
 *     <none>
 */

CInterceptWindowProp *__fastcall CInterceptWindowProp::CInterceptWindowProp(CInterceptWindowProp *this, __int64 a2)
{
  __int16 v3; // dx

  *(_QWORD *)this = &CInterceptWindowProp::`vftable';
  v3 = *(_WORD *)(W32GetUserSessionState(this, a2) + 42264);
  *((_QWORD *)this + 4) = (char *)this + 32;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 6) = 0LL;
  *((_WORD *)this + 28) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 12) = v3;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *((_DWORD *)this + 22) = 0;
  return this;
}
