/*
 * XREFs of SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___ @ 0x18065D25C
 * Callers:
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____lambda_d01d769641b0a3ac426af1e1f82876ea__&_ @ 0x1800B9330 (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____l.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     _lambda_d01d769641b0a3ac426af1e1f82876ea_::__lambda_d01d769641b0a3ac426af1e1f82876ea_ @ 0x1800B9304 (_lambda_d01d769641b0a3ac426af1e1f82876ea_--__lambda_d01d769641b0a3ac426af1e1f82876ea_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)a1);
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveSessionIdleNotification>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *a1 = off_1807346C8;
  v4 = *a2;
  a1[2] = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  a1[3] = a2[1];
  lambda_d01d769641b0a3ac426af1e1f82876ea_::__lambda_d01d769641b0a3ac426af1e1f82876ea_(a2);
  return a1;
}
