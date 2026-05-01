/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801111F4
 * Callers:
 *     _lambda_fe0fa93ea00b211fee91aac62f93999b_::operator() @ 0x1801108C8 (_lambda_fe0fa93ea00b211fee91aac62f93999b_--operator().c)
 *     ?SetNavigationLevelOverride@UwpWindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x180110AE0 (-SetNavigationLevelOverride@UwpWindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1801DBB20 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?put_VisibilityRevoked@UwpWindowWrapperBase@@UEAAJE@Z @ 0x18043C6E0 (-put_VisibilityRevoked@UwpWindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(UwpWindowWrapperBase *this)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ebp
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8[2]; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+48h] [rbp-10h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  v2 = *((int *)this + 74);
  v3 = *((_DWORD *)this + 120);
  v4 = *((_DWORD *)this + 45);
  if ( (v4 & 0x10) != 0 && (v4 & 0x20) == 0 )
    v3 = v3 != 0;
  if ( v3 != (*(unsigned int (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 144LL))(this) )
  {
    (*(void (__fastcall **)(UwpWindowWrapperBase *, _QWORD))(*(_QWORD *)this + 176LL))(this, v3);
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
      if ( (*((_BYTE *)this + 356) & 1) == 0 )
      {
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 8LL))(this);
        v8[0] = (__int64)this;
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 8LL))(this);
        v8[1] = v2;
        v9 = 2;
        v5 = *((_DWORD *)this + 140);
        v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v7 = v6;
        if ( v6 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
          v7[2] = this;
          v8[0] = 0LL;
          v7[3] = this;
          v7[4] = v2;
          *((_DWORD *)v7 + 10) = 2;
          *v7 = &off_1806EFD98;
        }
        else
        {
          v7 = 0LL;
        }
        SHTaskPoolQueueTask(3LL, 2LL, v5);
        if ( v7 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8);
        (*(void (__fastcall **)(UwpWindowWrapperBase *))(*(_QWORD *)this + 16LL))(this);
      }
    }
  }
  UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion(this);
}
