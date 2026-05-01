/*
 * XREFs of ?PowerNotificationCallback@BroadcastDVRComponent@@AEAAXK@Z @ 0x18020AD20
 * Callers:
 *     ?StaticPowerNotificationCallback@BroadcastDVRComponent@@CAKPEAXK0@Z @ 0x18020ACE0 (-StaticPowerNotificationCallback@BroadcastDVRComponent@@CAKPEAXK0@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z @ 0x18020ADD0 (-BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d10fea719efe163af90bfed8ecd7e768___ @ 0x18030EBA0 (Windows--Internal--ComTaskPool--QueueTask__lambda_d10fea719efe163af90bfed8ecd7e768___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BroadcastDVRComponent::PowerNotificationCallback(BroadcastDVRComponent *this, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  BroadcastDVRComponent *v6; // [rsp+40h] [rbp+18h] BYREF

  GameDVRTraceProvider::BroadcastDVRComponent_PowerNotificationCallback(a2);
  if ( a2 )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)this + 109, 1, 0);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 109, 0, 1) == 1 )
  {
    v6 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    v6 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    Windows::Internal::ComTaskPool::QueueTask__lambda_d10fea719efe163af90bfed8ecd7e768___(
      v5,
      v4,
      *((unsigned int *)this + 60),
      &v6);
    if ( v6 )
      (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v6 + 16LL))(v6);
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  }
}
