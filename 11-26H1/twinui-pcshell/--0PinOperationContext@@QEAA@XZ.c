/*
 * XREFs of ??0PinOperationContext@@QEAA@XZ @ 0x18028D42C
 * Callers:
 *     ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x18028D10C (--$make_shared@VPinOperationContext@@$$V@std@@YA-AV-$shared_ptr@VPinOperationContext@@@0@XZ.c)
 * Callees:
 *     <none>
 */

PinOperationContext *__fastcall PinOperationContext::PinOperationContext(PinOperationContext *this)
{
  PinOperationContext *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 7LL;
  *((_WORD *)this + 12) = 0;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  result = this;
  *((_QWORD *)this + 9) = 0LL;
  *((_WORD *)this + 28) = 0;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
