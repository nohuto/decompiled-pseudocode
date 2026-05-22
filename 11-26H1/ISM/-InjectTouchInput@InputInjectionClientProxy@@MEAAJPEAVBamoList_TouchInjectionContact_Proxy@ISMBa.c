/*
 * XREFs of ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801A17D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ @ 0x1800280E4 (-VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E262C (-OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800E2768 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x18013CCE4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@AEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x18015FD74 (--$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@-$vector@USystemButtonEventInfo@@V-$allocator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InputInjectionClientProxy::InjectTouchInput(
        InputInjectionClientProxy *this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *a2)
{
  InjectionRawInputProvider *v4; // rbx
  __int64 v5; // r14
  unsigned int i; // r15d
  Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  const char *v8; // r9
  __int128 *v9; // r8
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *v14; // [rsp+70h] [rbp+30h] BYREF
  InjectionRawInputProvider *v15; // [rsp+80h] [rbp+40h]

  v4 = InjectionRawInputProvider::s_rawInputProvider;
  v15 = InjectionRawInputProvider::s_rawInputProvider;
  if ( InjectionRawInputProvider::s_rawInputProvider )
    _InterlockedIncrement((volatile signed __int32 *)InjectionRawInputProvider::s_rawInputProvider + 4);
  if ( !*((_BYTE *)this + 56) )
  {
    if ( (int)InjectionRawInputProvider::OnAttachDevice(v4, this) < 0 )
      goto LABEL_17;
    *((_BYTE *)this + 56) = 1;
  }
  v14 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *))a2)(a2);
  v11 = 0LL;
  v12 = 0LL;
  v5 = (__int64)(*((_QWORD *)a2 + 7) - *((_QWORD *)a2 + 6)) >> 4;
  for ( i = 0; i < (unsigned int)v5; ++i )
  {
    Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(a2);
    Microsoft::Bamo::BaseBamoConnection::VerifyLockHeldIfOffThread(Connection);
    if ( i >= (unsigned __int64)((__int64)(*((_QWORD *)a2 + 7) - *((_QWORD *)a2 + 6)) >> 4) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5C,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v8);
    v9 = (__int128 *)(*((_QWORD *)a2 + 6) + 16LL * i);
    if ( *((_QWORD *)&v11 + 1) == v12 )
    {
      std::vector<SystemButtonEventInfo>::_Emplace_reallocate<SystemButtonEventInfo const &>(
        (__int64 *)&v11,
        *((__int64 *)&v11 + 1),
        v9);
    }
    else
    {
      **((_OWORD **)&v11 + 1) = *v9;
      *((_QWORD *)&v11 + 1) += 16LL;
    }
  }
  InjectionRawInputProvider::OnInputReport((__int64)v4, (__int64)this, &v11);
  if ( (_QWORD)v11 )
  {
    std::_Deallocate<16>((void *)v11, (struct std::nothrow_t *)((v12 - v11) & 0xFFFFFFFFFFFFFFF0uLL));
    v11 = 0LL;
    v12 = 0LL;
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
LABEL_17:
  if ( v4 )
    InputContext::Release((InjectionRawInputProvider *)((char *)v4 + 8));
  return 0LL;
}
