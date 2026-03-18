/*
 * XREFs of ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x18020A3C4
 * Callers:
 *     ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18020A320 (-Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1801DB3E4 (--0CMmcssTask@@QEAA@XZ.c)
 */

CGlobalMit *__fastcall CGlobalMit::CGlobalMit(CGlobalMit *this, struct CComposition *a2)
{
  CGlobalMit *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = 0LL;
  CMit::s_pMessageSession = 0LL;
  CMit::s_pMessageCallSendHost = 0LL;
  CMit::s_pSystemInputHost = 0LL;
  *(_QWORD *)this = &CGlobalMit::`vftable';
  CMmcssTask::CMmcssTask((CGlobalMit *)((char *)this + 48));
  *((_QWORD *)this + 17) = 0LL;
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
