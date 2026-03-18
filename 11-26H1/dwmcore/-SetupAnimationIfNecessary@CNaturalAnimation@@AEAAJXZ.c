/*
 * XREFs of ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180044E40
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180045210 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResul.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18027B4B0 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x18027B804 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18027BDFC (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x18027C2E8 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetupAnimationIfNecessary(CNaturalAnimation *this)
{
  unsigned int v1; // edi
  int v4; // eax
  int v5; // ecx
  unsigned __int64 FrameTargetTime; // rax

  v1 = 0;
  if ( (*((_BYTE *)this + 532) & 1) == 0 )
  {
    v4 = CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(this);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x28Eu, 0LL);
      *((_BYTE *)this + 532) &= ~1u;
    }
    else
    {
      v5 = *((_DWORD *)this + 72);
      *(_QWORD *)((char *)this + 292) = *((_QWORD *)this + 35);
      *((_DWORD *)this + 75) = v5;
      CNaturalAnimation::InitializeForces(this);
      FrameTargetTime = CComposition::GetFrameTargetTime(*((CComposition **)this + 3));
      CNaturalAnimation::SetStartTimeIfNecessary(this, FrameTargetTime);
      *((_BYTE *)this + 532) = *((_BYTE *)this + 532) & 0xF6 | 1;
    }
  }
  return v1;
}
