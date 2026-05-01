/*
 * XREFs of ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180290720 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x18068B474 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18068BAEC (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18068C300 (--1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180697408 (-StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180697574 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _CacheAppOrderInIDList @ 0x1806989CC (_CacheAppOrderInIDList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPinnedList::ApplyPrependDefaultTaskbarLayout(CPinnedList *this)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r14
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID *v15; // [rsp+38h] [rbp-C8h]
  char v16; // [rsp+40h] [rbp-C0h]
  LPVOID pv[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[42]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  memset_0(v21, 0, 0x148uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"TaskbarLayoutPrependDefaultActivity");
  v21[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::StartActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)v21);
  v19 = 0;
  pv[0] = 0LL;
  pv[1] = 0LL;
  v18 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(3LL, pv, &v19, 0LL);
  v3 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout >= 0 )
  {
    v15 = pv;
    v16 = 1;
    if ( v19 )
    {
      v6 = LODWORD(pv[1]) - 1;
      if ( LODWORD(pv[1]) - 1 >= 0 )
      {
        v7 = 8LL * v6;
        do
        {
          std::to_wstring((__int64)v20, v6 + 1);
          CacheAppOrderInIDList(*(_QWORD *)((char *)pv[0] + v7), v20, (char *)pv[0] + v7);
          v8 = *(_QWORD *)((char *)pv[0] + v7);
          if ( !(*(unsigned int (__fastcall **)(CPinnedList *, __int64))(*(_QWORD *)this + 72LL))(this, v8) )
          {
            v9 = CPinnedList::InternalModify((char *)this - 16, v8, 0LL, 37LL);
            if ( v9 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xA39,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v9);
          }
          if ( (unsigned int)CPinnedList::InternalModify((char *)this - 16, 0LL, v8, 37LL) )
          {
            v14 = 7;
            ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)&v14);
          }
          else
          {
            v10 = CPinnedList::InternalModify((char *)this - 16, v8, 1LL, 37LL);
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xA40,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v10);
          }
          std::wstring::_Tidy_deallocate(v20);
          v7 -= 8LL;
          --v6;
        }
        while ( v6 >= 0 );
      }
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
      v11 = 0;
      if ( pv[1] )
      {
        v12 = 0LL;
        do
        {
          ILFree(*((LPITEMIDLIST *)pv[0] + v12));
          v12 = ++v11;
        }
        while ( (LPVOID)v11 < pv[1] );
      }
      if ( pv[0] )
      {
        CoTaskMemFree(pv[0]);
        pv[0] = 0LL;
      }
      v3 = 0;
    }
    else
    {
      v4 = 0;
      if ( pv[1] )
      {
        v5 = 0LL;
        do
        {
          ILFree(*((LPITEMIDLIST *)pv[0] + v5));
          v5 = ++v4;
        }
        while ( (LPVOID)v4 < pv[1] );
      }
      if ( pv[0] )
      {
        CoTaskMemFree(pv[0]);
        pv[0] = 0LL;
      }
      v3 = -2147019873;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1D,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
  }
  pv[1] = 0LL;
  *((_QWORD *)&v18 + 1) = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)v21);
  return v3;
}
