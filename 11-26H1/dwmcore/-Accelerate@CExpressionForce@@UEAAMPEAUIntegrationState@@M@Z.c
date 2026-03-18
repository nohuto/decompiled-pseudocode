/*
 * XREFs of ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x18028E870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18026BF9C (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 */

float __fastcall CExpressionForce::Accelerate(CExpressionForce *this, struct IntegrationState *a2, float a3)
{
  struct CExpressionValueStack *v3; // rdx
  CConditionalExpression *v4; // rcx
  float v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct CExpressionValueStack *)*((_QWORD *)this + 14);
  v4 = (CConditionalExpression *)*((_QWORD *)this + 12);
  v6 = 0.0;
  CConditionalExpression::GetValue(v4, v3, &v6);
  return v6;
}
