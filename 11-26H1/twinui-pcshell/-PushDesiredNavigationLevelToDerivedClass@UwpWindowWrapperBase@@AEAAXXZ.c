/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BDA4
 * Callers:
 *     ?SetNavigationLevelOverride@UwpWindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x18004C890 (-SetNavigationLevelOverride@UwpWindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     _lambda_fe0fa93ea00b211fee91aac62f93999b_::operator() @ 0x18004CAFC (_lambda_fe0fa93ea00b211fee91aac62f93999b_--operator().c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18004DBF0 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?put_VisibilityRevoked@UwpWindowWrapperBase@@UEAAJE@Z @ 0x180448D70 (-put_VisibilityRevoked@UwpWindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_::_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_ @ 0x180438970 (_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_--_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(UwpWindowWrapperBase *this)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  char v10; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[48]; // [rsp+38h] [rbp-30h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF
  UwpWindowWrapperBase *v14; // [rsp+80h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  v2 = *((int *)this + 74);
  v3 = *((_DWORD *)this + 116);
  v4 = *((_DWORD *)this + 45);
  if ( (v4 & 0x10) != 0 && (v4 & 0x20) == 0 )
    v3 = v3 != 0;
  if ( v3 != (*(unsigned int (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 144LL))(this) )
  {
    (*(void (__fastcall **)(UwpWindowWrapperBase *, _QWORD))(*(_QWORD *)this + 176LL))(this, v3);
    if ( v2 )
    {
      v12 = 2;
      v13 = v2;
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
      if ( (*((_BYTE *)this + 356) & 1) == 0 )
      {
        v14 = this;
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 8LL))(this);
        v5 = lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_::_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_(
               (unsigned int)&v10,
               (_DWORD)this,
               (unsigned int)&v14,
               (unsigned int)&v13,
               (__int64)&v12);
        v6 = *((_DWORD *)this + 136);
        v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v8 = v7;
        if ( v7 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v7);
          v8[2] = *(_QWORD *)v5;
          v9 = *(_QWORD *)(v5 + 8);
          *(_QWORD *)(v5 + 8) = 0LL;
          v8[3] = v9;
          v8[4] = *(_QWORD *)(v5 + 16);
          *((_DWORD *)v8 + 10) = *(_DWORD *)(v5 + 24);
          *v8 = &off_18070CF08;
        }
        else
        {
          v8 = 0LL;
        }
        SHTaskPoolQueueTask(3LL, 2LL, v6);
        if ( v8 )
          (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v11);
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 16LL))(this);
      }
    }
  }
  UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion(this);
}
