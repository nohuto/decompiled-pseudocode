/*
 * XREFs of ?GetTargetPropertyValue@CBaseExpression@@IEBAJPEAVCExpressionValue@@@Z @ 0x180045604
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18027BDFC (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?GetPropertyValueHelper@CBaseExpression@@IEBAJPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@_NPEAVCExpressionValue@@@Z @ 0x180045500 (-GetPropertyValueHelper@CBaseExpression@@IEBAJPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@_.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18004C220 (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBaseExpression::GetTargetPropertyValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  struct CResource *v4; // rax
  int PropertyValueHelper; // eax
  unsigned int v6; // edi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = CBaseExpression::ResolveTargetNoRef(this);
  if ( !v4 )
  {
    v8 = -2147024782;
    v9 = 319LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\BaseExpression.h",
      (const char *)v8,
      v10);
    return v8;
  }
  PropertyValueHelper = CBaseExpression::GetPropertyValueHelper(
                          (__int64)this,
                          (__int64)v4,
                          *((_DWORD *)this + 45),
                          1,
                          a2);
  v6 = PropertyValueHelper;
  if ( PropertyValueHelper >= 0 )
  {
    if ( *((_DWORD *)a2 + 16) == *((_DWORD *)this + 38) )
      return 0LL;
    v8 = -2147024809;
    v9 = 321LL;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x140,
    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\BaseExpression.h",
    (const char *)(unsigned int)PropertyValueHelper,
    v10);
  return v6;
}
