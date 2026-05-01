/*
 * XREFs of ??$GetWeakReference@VCStartExperienceManager@@@details@wil@@YAJPEAVCStartExperienceManager@@PEAPEAUIWeakReference@@@Z @ 0x180053A18
 * Callers:
 *     ??$com_weak_query@PEAVCStartExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCStartExperienceManager@@@Z @ 0x180053604 (--$com_weak_query@PEAVCStartExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exce.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180053AAC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::details::GetWeakReference<CStartExperienceManager>(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v6 = 0LL;
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>>(
         a1,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v6);
  v4 = v6;
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
