/*
 * XREFs of ??0PolicyRule@@QEAA@XZ @ 0x180129388
 * Callers:
 *     ??$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x180128F9C (--$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_Dynam.c)
 *     ??0RemapPolicyRule@@QEAA@XZ @ 0x180129404 (--0RemapPolicyRule@@QEAA@XZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180041278 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PolicyRule *__fastcall PolicyRule::PolicyRule(PolicyRule *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPolicyRule>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &PolicyRule::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 10;
  return this;
}
