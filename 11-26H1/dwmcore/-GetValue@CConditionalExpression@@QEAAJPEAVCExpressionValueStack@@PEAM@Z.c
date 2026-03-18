/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18026BF9C
 * Callers:
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4OutputCoordinate@@PEA_NPEAM@Z @ 0x18013B1A4 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4Outp.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1802756A0 (-SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x18028E870 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        float *a3)
{
  __int64 v3; // rax
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  *a3 = 0.0;
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(CConditionalExpression *, struct CExpressionValueStack *, __int64 *))(v3 + 224))(
         this,
         a2,
         &v15);
  if ( v6 < 0 )
  {
    v7 = 505LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\conditionalexpression.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((_DWORD *)a2 + 24);
  v10 = v9;
  v11 = *(_QWORD *)a2;
  v12 = v9 - 1;
  if ( v9 )
    v10 = v12;
  v13 = 9 * v10;
  if ( *(_DWORD *)(v11 + 8 * v13 + 64) != 18 )
  {
    v6 = -2147024809;
    v7 = 508LL;
    goto LABEL_3;
  }
  if ( v9 )
    *((_DWORD *)a2 + 24) = v12;
  *a3 = *(float *)(v11 + 8 * v13);
  return 0LL;
}
