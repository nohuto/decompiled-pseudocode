/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___ @ 0x18046091C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_scalar_deleting_destructor_ @ 0x180461030 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___--_scala.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIXamlLauncherState@@UIImmersiveLauncherCortana@@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180064550 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSi.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::Release(
               v3,
               a2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
