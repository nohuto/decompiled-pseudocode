/*
 * XREFs of ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1400BB400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::RawMouseEvent::RawMouseEvent(
        CMouseProcessor::RawMouseEvent *this)
{
  CMouseProcessor::RawMouseEvent *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 18) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *(_OWORD *)((char *)this + 124) = 0xFFFFFFFF;
  *((_BYTE *)this + 140) = 0;
  *((_BYTE *)this + 160) = 0;
  *((_OWORD *)this + 9) = 0xFFFFFFFF;
  *(_QWORD *)((char *)this + 164) = 0LL;
  result = this;
  *((_QWORD *)this + 22) = 0LL;
  return result;
}
