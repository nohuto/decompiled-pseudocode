/*
 * XREFs of ??$com_weak_query@PEAVCToastCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCToastCenterExperienceManager@@@Z @ 0x1802A2D0C
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x180054F14 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180053738 (-reset@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@UIInputHostLayoutChanges@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180172F2C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall wil::com_weak_query<CToastCenterExperienceManager *>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::reset(a1);
  *a1 = 0LL;
  v8 = 0LL;
  v4 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>>(
         v3,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v8);
  v5 = v8;
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, a1);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x796,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v4,
      1);
  return a1;
}
