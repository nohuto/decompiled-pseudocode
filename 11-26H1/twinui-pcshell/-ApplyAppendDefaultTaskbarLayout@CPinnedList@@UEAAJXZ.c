/*
 * XREFs of ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068C860
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180290720 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x18068B474 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18068BAEC (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18068C2A8 (--1TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180697358 (-StartActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180697574 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _CacheAppOrderInIDList @ 0x1806989CC (_CacheAppOrderInIDList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPinnedList::ApplyAppendDefaultTaskbarLayout(CPinnedList *this)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // r12d
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rax
  LPVOID v14[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+68h] [rbp-A0h]
  int v18; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v19[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v20[42]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  memset_0(v20, 0, 0x148uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"TaskbarLayoutAppendDefaultActivity");
  v20[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::StartActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity *)v20);
  v18 = 0;
  pv[1] = 0LL;
  v16 = 0uLL;
  v17 = 0LL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(3LL, &pv[1], &v18, 0LL);
  v3 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout >= 0 )
  {
    v14[1] = &pv[1];
    LOBYTE(pv[0]) = 1;
    if ( v18 )
    {
      v6 = 0;
      v7 = (int)v16;
      if ( (int)v16 > 0 )
      {
        v8 = 0LL;
        do
        {
          v9 = v6 + 1;
          std::to_wstring((__int64)v19, v6 + 1);
          CacheAppOrderInIDList(*((_QWORD *)pv[1] + v8), v19, (char *)pv[1] + 8 * v6);
          v10 = *((_QWORD *)pv[1] + v8);
          if ( (*(unsigned int (__fastcall **)(CPinnedList *, __int64))(*(_QWORD *)this + 72LL))(this, v10) == 1
            && (int)CPinnedList::InternalModify((char *)this - 16, 0LL, v10, 37LL) < 0 )
          {
            LODWORD(v14[0]) = 7;
            ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)v14);
          }
          std::wstring::_Tidy_deallocate(v19);
          v6 = v9;
          ++v8;
        }
        while ( v8 < v7 );
      }
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
      v11 = 0;
      if ( (_QWORD)v16 )
      {
        v12 = 0LL;
        do
        {
          ILFree(*((LPITEMIDLIST *)pv[1] + v12));
          v12 = ++v11;
        }
        while ( v11 < (unsigned __int64)v16 );
      }
      if ( pv[1] )
      {
        CoTaskMemFree(pv[1]);
        pv[1] = 0LL;
      }
      v3 = 0;
    }
    else
    {
      v4 = 0;
      if ( (_QWORD)v16 )
      {
        v5 = 0LL;
        do
        {
          ILFree(*((LPITEMIDLIST *)pv[1] + v5));
          v5 = ++v4;
        }
        while ( v4 < (unsigned __int64)v16 );
      }
      if ( pv[1] )
      {
        CoTaskMemFree(pv[1]);
        pv[1] = 0LL;
      }
      v3 = -2147019873;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA53,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    if ( pv[1] )
    {
      CoTaskMemFree(pv[1]);
      pv[1] = 0LL;
    }
  }
  *(_QWORD *)&v16 = 0LL;
  v17 = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::~TaskbarLayoutAppendDefaultActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity *)v20);
  return v3;
}
