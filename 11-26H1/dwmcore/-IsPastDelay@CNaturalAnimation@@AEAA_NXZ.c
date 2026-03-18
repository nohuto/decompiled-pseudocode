/*
 * XREFs of ?IsPastDelay@CNaturalAnimation@@AEAA_NXZ @ 0x180045304
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180045210 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResul.c)
 * Callees:
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x180045960 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 */

bool __fastcall CNaturalAnimation::IsPastDelay(CNaturalAnimation *this)
{
  TimeDelta *v1; // rdi

  v1 = (CNaturalAnimation *)((char *)this + 368);
  if ( (int)TimeDelta::ToMilliseconds((CNaturalAnimation *)((char *)this + 368)) >= *((_DWORD *)this + 90) )
    return 1;
  *(_QWORD *)v1 = CComposition::GetFrameTargetTime(*((CComposition **)this + 3))
                - *((_QWORD *)this + 43)
                - Time::s_luBegin.QuadPart;
  return (int)TimeDelta::ToMilliseconds(v1) >= *((_DWORD *)this + 90);
}
