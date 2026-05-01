/*
 * XREFs of ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180666170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180298624 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x180664CB0 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18066540C (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180665B80 (--1TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180670678 (-StartActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18067086C (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _CacheAppOrderInIDList @ 0x180671D20 (_CacheAppOrderInIDList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPinnedList::ApplyAppendDefaultTaskbarLayout(CPinnedList *this)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v3; // ebx
  unsigned int v5; // r15d
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID *v15; // [rsp+38h] [rbp-C8h]
  char v16; // [rsp+40h] [rbp-C0h]
  LPVOID pv[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+68h] [rbp-98h] BYREF
  void *v20[4]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v21[42]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  memset_0(v21, 0, 0x148uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"TaskbarLayoutAppendDefaultActivity");
  v21[0] = (volatile signed __int32 *)&TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::StartActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity *)v21);
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
      v5 = 0;
      v6 = SLODWORD(pv[1]);
      if ( SLODWORD(pv[1]) > 0 )
      {
        v7 = 0LL;
        do
        {
          v8 = v5++;
          std::to_wstring((char **)v20, v5);
          CacheAppOrderInIDList(*((_QWORD *)pv[0] + v7), v20, (char *)pv[0] + 8 * v8);
          v9 = *((_QWORD *)pv[0] + v7);
          if ( (*(unsigned int (__fastcall **)(CPinnedList *, __int64))(*(_QWORD *)this + 72LL))(this, v9) == 1
            && (int)CPinnedList::InternalModify((char *)this - 16, 0LL, v9, 37LL) < 0 )
          {
            v14 = 7;
            ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)&v14);
          }
          std::wstring::_Tidy_deallocate(v20);
          ++v7;
        }
        while ( v7 < v6 );
      }
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
      v10 = 0;
      if ( pv[1] )
      {
        v11 = 0LL;
        do
        {
          ILFree(*((LPITEMIDLIST *)pv[0] + v11));
          v11 = ++v10;
        }
        while ( (LPVOID)v10 < pv[1] );
      }
      if ( pv[0] )
      {
        CoTaskMemFree(pv[0]);
        pv[0] = 0LL;
      }
      pv[1] = 0LL;
      *((_QWORD *)&v18 + 1) = 0LL;
      TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::~TaskbarLayoutAppendDefaultActivity(v21);
      return 0LL;
    }
    else
    {
      v12 = 0;
      if ( pv[1] )
      {
        v13 = 0LL;
        do
        {
          ILFree(*((LPITEMIDLIST *)pv[0] + v13));
          v13 = ++v12;
        }
        while ( (LPVOID)v12 < pv[1] );
      }
      if ( pv[0] )
      {
        CoTaskMemFree(pv[0]);
        pv[0] = 0LL;
      }
      pv[1] = 0LL;
      *((_QWORD *)&v18 + 1) = 0LL;
      TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::~TaskbarLayoutAppendDefaultActivity(v21);
      return 2147947423LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA48,
      (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *((_QWORD *)&v18 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::~TaskbarLayoutAppendDefaultActivity(v21);
    return v3;
  }
}
