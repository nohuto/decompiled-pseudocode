/*
 * XREFs of ??0ScrollingConfiguration@CManipulation@@QEAA@XZ @ 0x18010854C
 * Callers:
 *     ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x180108450 (--0CManipulation@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CManipulation::ScrollingConfiguration *__fastcall CManipulation::ScrollingConfiguration::ScrollingConfiguration(
        CManipulation::ScrollingConfiguration *this)
{
  CManipulation::ScrollingConfiguration *result; // rax

  *(_BYTE *)this |= 1u;
  result = this;
  *((_DWORD *)this + 1) = 0;
  return result;
}
