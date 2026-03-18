/*
 * XREFs of ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180271730
 * Callers:
 *     ?ProcessSetInertiaCenterpointX@CInteractionTracker2@@AEAAXXZ @ 0x180274D58 (-ProcessSetInertiaCenterpointX@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetInertiaCenterpointY@CInteractionTracker2@@AEAAXXZ @ 0x180274DC0 (-ProcessSetInertiaCenterpointY@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease(&v5);
  }
  return a1;
}
