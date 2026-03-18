/*
 * XREFs of ?FindAndDequeueFromTimeList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationMarshaler@2@@Z @ 0x14016907C
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 * Callees:
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1400AFBB8 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::FindAndDequeueFromTimeList(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationMarshaler *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  _QWORD *i; // rdx

  v5 = *((_QWORD *)a2 + 10);
  if ( v5 && (*(_DWORD *)(v5 + 24) & 3) == 1 )
  {
    for ( i = (_QWORD *)((char *)this + 488); *i != v5; i = (_QWORD *)(*i + 8LL) )
      ;
    *i = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v5 + 8) = 0LL;
    DirectComposition::CAnimationTimeList::Release(
      (DirectComposition::CAnimationTimeList *)v5,
      (__int64)i,
      (__int64)this,
      a4);
  }
}
