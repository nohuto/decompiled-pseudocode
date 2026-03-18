/*
 * XREFs of ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18027BDFC
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180044E40 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?GetTargetPropertyValue@CBaseExpression@@IEBAJPEAVCExpressionValue@@@Z @ 0x180045604 (-GetTargetPropertyValue@CBaseExpression@@IEBAJPEAVCExpressionValue@@@Z.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(CNaturalAnimation *this)
{
  int TargetPropertyValue; // eax
  unsigned int v3; // edi
  unsigned int v5; // ebx
  char v6; // cl
  int v7; // eax
  char v8; // al
  int v9; // xmm0_4
  int v10; // xmm1_4
  char v11; // al
  int v12; // xmm0_4
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  int v14; // [rsp+38h] [rbp-60h]
  int v15; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( (*((_BYTE *)this + 532) & 0x30) == 0x30 )
    return 0;
  v15 = 0;
  TargetPropertyValue = CBaseExpression::GetTargetPropertyValue(this, (struct CExpressionValue *)&v13);
  v3 = TargetPropertyValue;
  if ( TargetPropertyValue < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\naturalanimation.cpp",
      (const char *)(unsigned int)TargetPropertyValue);
    CExpressionValue::DestroyCurrent((CExpressionValue *)&v13);
    return v3;
  }
  switch ( *((_DWORD *)this + 38) )
  {
    case 0x11:
LABEL_21:
      CExpressionValue::DestroyCurrent((CExpressionValue *)&v13);
      return 0;
    case 0x12:
      v11 = *((_BYTE *)this + 532);
      v12 = v13;
      if ( (v11 & 0x10) == 0 )
        *((_DWORD *)this + 70) = v13;
      if ( (v11 & 0x20) == 0 )
        *((_DWORD *)this + 76) = v12;
      goto LABEL_21;
    case 0x23:
      v8 = *((_BYTE *)this + 532);
      v9 = HIDWORD(v13);
      v10 = v13;
      if ( (v8 & 0x10) == 0 )
      {
        *((_DWORD *)this + 70) = v13;
        *((_DWORD *)this + 71) = v9;
      }
      if ( (v8 & 0x20) == 0 )
      {
        *((_DWORD *)this + 76) = v10;
        *((_DWORD *)this + 77) = v9;
      }
      goto LABEL_21;
    case 0x34:
      v6 = *((_BYTE *)this + 532);
      v7 = v14;
      if ( (v6 & 0x10) == 0 )
      {
        *((_QWORD *)this + 35) = v13;
        *((_DWORD *)this + 72) = v7;
      }
      if ( (v6 & 0x20) == 0 )
      {
        *((_QWORD *)this + 38) = v13;
        *((_DWORD *)this + 78) = v7;
      }
      goto LABEL_21;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x2DFu, 0LL);
  CExpressionValue::DestroyCurrent((CExpressionValue *)&v13);
  return v5;
}
