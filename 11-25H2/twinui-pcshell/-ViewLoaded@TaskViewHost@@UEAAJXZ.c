/*
 * XREFs of ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x1801F7450
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D4D68 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x180107F40 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180108940 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AC1C (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802BE56C (-ensure_data@-$tip_test@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@t.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CF2E8 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_return.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180681064 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_re.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TaskViewHost::ViewLoaded(TaskViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  enum _TABLETMODESTATE *v3; // rdx
  const char *v4; // r9
  int v5; // r14d
  TabletModeHelpers *v6; // rcx
  _DWORD *v7; // r8
  _QWORD *v8; // rsi
  _QWORD *v9; // r12
  int v10; // eax
  char IsTabletMode; // al
  _QWORD *v12; // r15
  __int64 v13; // rsi
  __int64 result; // rax
  _OWORD v15[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v16; // [rsp+70h] [rbp-38h]
  int v17; // [rsp+78h] [rbp-30h]
  __int64 v18; // [rsp+80h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v20; // [rsp+B0h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120));
  try
  {
    v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    v6 = (TabletModeHelpers *)(*((_QWORD *)this + 28) + 1LL);
    *((_QWORD *)this + 28) = v6;
    if ( v6 == (TabletModeHelpers *)((__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3) )
    {
      v7 = (_DWORD *)*((_QWORD *)this + 64);
      if ( *v7 == 1 )
      {
        wil::ActivityThreadWatcher::ActivityThreadWatcher(
          (wil::ActivityThreadWatcher *)v15,
          (TaskViewHost *)((char *)this + 240),
          (const struct wil::details::StoredCallContextInfo *)(v7 + 10));
      }
      else
      {
        memset(v15, 0, sizeof(v15));
        v16 = 0LL;
        v17 = 0;
        v18 = 0LL;
      }
      v8 = (_QWORD *)*((_QWORD *)this + 25);
      v9 = (_QWORD *)*((_QWORD *)this + 26);
      while ( v8 != v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 48LL))(*v8);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 24LL))(*v8, *((_QWORD *)this + 15)) )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 72LL))(*v8);
          if ( v10 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x1A3,
              (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
              (const char *)(unsigned int)v10,
              (int)v2);
        }
        ++v8;
      }
      *((_DWORD *)this + 156) = 1;
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v15);
    }
    if ( *((_QWORD *)this + 28) == (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3 )
    {
      IsTabletMode = TabletModeHelpers::IsTabletMode(v6, v3);
      XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        (TaskViewHost *)((char *)this + 240),
        (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3,
        IsTabletMode,
        1u);
      v12 = (_QWORD *)((char *)this + 632);
      v13 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::ensure_data((char *)this + 632);
      v20 = v13;
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 280));
      tip2::details::shared_data<0,0,1>::begin_update(v13 + 8);
      *(_BYTE *)(v13 + 264) = 1;
      tip2::details::shared_data<0,0,0>::end_update(v13 + 8);
      wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::reset(&v20);
      wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>(&v20);
      if ( *v12 )
        tip2::details::shared_data<0,0,0>::complete_without_lock(*v12 + 8LL);
    }
    if ( v5 >= 0 )
      LeaveCriticalSection(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1B2,
                     (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                     v4);
    return (unsigned int)v20;
  }
  return result;
}
