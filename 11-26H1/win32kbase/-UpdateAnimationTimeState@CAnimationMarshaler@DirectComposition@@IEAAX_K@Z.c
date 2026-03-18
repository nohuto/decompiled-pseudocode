/*
 * XREFs of ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x14015E2E8
 * Callers:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400ADCB4 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1400AFBB8 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x14015E39C (-CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  DirectComposition::CAnimationTimeList *v7; // rcx
  bool v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(
    this,
    *((struct DirectComposition::CAnimationTimeList **)this + 9),
    a2,
    (unsigned __int64 *)this + 14,
    &v8,
    (__int64 *)this + 26,
    (unsigned __int64 *)this + 27);
  v6 = *((_QWORD *)this + 10);
  *((_BYTE *)this + 200) = *((_BYTE *)this + 200) & 0xFB | (4 * v8);
  v7 = (DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
  if ( v7 == (DirectComposition::CAnimationTimeList *)v6 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_DWORD *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 28) = 0;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *((_DWORD *)this + 8) &= 0xFFFF3FFF;
  }
  else
  {
    *((_QWORD *)this + 9) = *((_QWORD *)v7 + 2);
    DirectComposition::CAnimationTimeList::Release(v7, v3, v4, v5);
  }
}
