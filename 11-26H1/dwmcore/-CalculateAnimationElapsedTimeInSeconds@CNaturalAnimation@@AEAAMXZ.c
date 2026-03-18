/*
 * XREFs of ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801CA34C
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 */

float __fastcall CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(CComposition **this)
{
  unsigned __int64 v1; // r8

  v1 = CComposition::GetFrameTargetTime(this[3])
     - 1000 * Time::s_luFreq.QuadPart * *((int *)this + 90) / 1000000
     - (_QWORD)this[43]
     - Time::s_luBegin.QuadPart;
  if ( v1 == 0x7FFFFFFFFFFFFFFFLL )
    return FLOAT_3_4028235e38;
  else
    return (float)(int)((__int64)(1000000 * v1) / Time::s_luFreq.QuadPart) / 1000000.0;
}
