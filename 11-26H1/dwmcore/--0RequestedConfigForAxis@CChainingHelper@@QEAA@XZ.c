/*
 * XREFs of ??0RequestedConfigForAxis@CChainingHelper@@QEAA@XZ @ 0x1801524D4
 * Callers:
 *     ??0CChainingHelper@@QEAA@PEAVCInteraction@@@Z @ 0x180152464 (--0CChainingHelper@@QEAA@PEAVCInteraction@@@Z.c)
 * Callees:
 *     <none>
 */

CChainingHelper::RequestedConfigForAxis *__fastcall CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis(
        CChainingHelper::RequestedConfigForAxis *this)
{
  CChainingHelper::RequestedConfigForAxis *result; // rax

  *(_BYTE *)this &= 0xF8u;
  result = this;
  *(_QWORD *)((char *)this + 4) = 0LL;
  return result;
}
