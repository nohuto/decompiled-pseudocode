/*
 * XREFs of ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x1802419F8
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180062DA0 (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B9C94 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAXQEAUPendingActivationResumeData@UwpWindowEventDispatcher@@_K1@Z @ 0x1801F2190 (-_Change_array@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPen.c)
 *     ??$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@0PEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18021E7D8 (--$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UP.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAA@XZ @ 0x18042222C (--1_Reallocation_guard@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$alloca.c)
 */

unsigned __int64 __fastcall std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Emplace_reallocate<UwpWindowEventDispatcher::PendingActivationResumeData>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rsi
  unsigned __int64 v16; // r14
  char *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+40h] [rbp-38h]

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = (__int64 *)v13;
  *a3 = 0LL;
  v16 = v13 + (v4 & 0xFFFFFFFFFFFFFFE0uLL);
  v22[0] = a1;
  v22[2] = v3;
  v17 = (char *)v13;
  v23 = (__int64 *)v16;
  *(_QWORD *)v16 = v14;
  v18 = a3[1];
  a3[1] = 0LL;
  *(_QWORD *)(v16 + 8) = v18;
  *(_QWORD *)(v16 + 16) = a3[2];
  *(_DWORD *)(v16 + 24) = *((_DWORD *)a3 + 6);
  v19 = a1[1];
  v20 = *a1;
  v24 = v16 + 32;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<UwpWindowEventDispatcher::PendingActivationResumeData *>(v20, a2, v17);
    v19 = a1[1];
    v17 = (char *)(v16 + 32);
    v20 = a2;
    v23 = v15;
  }
  std::_Uninitialized_move<UwpWindowEventDispatcher::PendingActivationResumeData *>(v20, v19, v17);
  v22[1] = 0LL;
  std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Change_array((__int64 **)a1, v15, v9, v3);
  std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Reallocation_guard::~_Reallocation_guard(v22);
  return v16;
}
