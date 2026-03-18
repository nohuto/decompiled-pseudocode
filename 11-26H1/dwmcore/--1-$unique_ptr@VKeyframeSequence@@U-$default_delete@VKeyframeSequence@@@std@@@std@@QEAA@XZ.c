/*
 * XREFs of ??1?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAA@XZ @ 0x18010F04C
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18015294C (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1KeyframeSequence@@QEAA@XZ @ 0x18010F078 (--1KeyframeSequence@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<KeyframeSequence>::~unique_ptr<KeyframeSequence>(KeyframeSequence **a1)
{
  KeyframeSequence *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    KeyframeSequence::~KeyframeSequence(*a1);
    operator delete(v1);
  }
}
