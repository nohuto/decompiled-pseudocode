/*
 * XREFs of ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x18026BF00
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1802756A0 (-SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 */

void __fastcall CConditionalExpression::GetSampledConditionAnimation(
        CConditionalExpression *this,
        struct CBaseExpression **a2)
{
  __int64 v2; // rax
  struct CBaseExpression *v3; // rbx
  struct CBaseExpression *v5; // rdi
  struct CBaseExpression *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((int *)this + 87);
  v3 = 0LL;
  v6 = 0LL;
  if ( (int)v2 < 0 )
  {
    v5 = (struct CBaseExpression *)*((_QWORD *)this + 42);
    if ( v5 )
    {
      v6 = (struct CBaseExpression *)*((_QWORD *)this + 42);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v6);
      v6 = 0LL;
      v3 = v5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)&v6, *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v2));
    v3 = v6;
  }
  v6 = 0LL;
  *a2 = v3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
}
