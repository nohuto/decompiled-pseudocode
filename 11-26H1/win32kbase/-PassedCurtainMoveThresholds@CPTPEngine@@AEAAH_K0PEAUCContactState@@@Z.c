/*
 * XREFs of ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x14017E6B4
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B2030 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::PassedCurtainMoveThresholds(
        CPTPEngine *this,
        __int64 a2,
        __int64 a3,
        struct CContactState *a4)
{
  __int64 v5; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( a3 - a2 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 799) / 0x3E8 )
  {
    v5 = *(_QWORD *)((char *)this + 2844);
    if ( (int)((v5 - *((_QWORD *)a4 + 1)) * (v5 - *((_QWORD *)a4 + 1))
             + (HIDWORD(v5) - HIDWORD(*((_QWORD *)a4 + 1))) * (HIDWORD(v5) - HIDWORD(*((_QWORD *)a4 + 1)))) > (unsigned __int64)*((unsigned int *)this + 800) )
      return 1;
  }
  return result;
}
