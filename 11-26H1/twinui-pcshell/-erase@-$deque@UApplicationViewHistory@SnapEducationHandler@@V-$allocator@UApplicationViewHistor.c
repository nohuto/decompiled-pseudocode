/*
 * XREFs of ?erase@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@0@Z @ 0x1801633C4
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180162E20 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@XZ @ 0x1800CB824 (--1-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@23@.c)
 *     ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x180162B28 (--$_Move_backward_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UA.c)
 *     ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x1801632AC (--$_Move_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicatio.c)
 *     ?pop_back@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAXXZ @ 0x180269580 (-pop_back@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHis.c)
 */

__int64 **__fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // rdx
  __int64 *v7; // rax
  __int64 *v8; // r10
  __int64 *v9; // rcx
  __int64 *v10; // r11
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 **result; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-18h]
  __int128 v23; // [rsp+50h] [rbp-10h] BYREF

  v5 = *(__int64 **)(a3 + 16);
  if ( a1 )
    v7 = *(__int64 **)a1;
  else
    v7 = 0LL;
  v8 = *(__int64 **)(a4 + 16);
  if ( a1 )
    v9 = *(__int64 **)a1;
  else
    v9 = 0LL;
  v10 = *(__int64 **)(a1 + 24);
  v11 = (char *)v5 - (char *)v10;
  v12 = (char *)v8 - (char *)v5;
  if ( v8 == v5 )
  {
    a2[2] = v5;
  }
  else
  {
    if ( v7 )
      v13 = *v7;
    else
      v13 = 0LL;
    if ( v9 )
      v14 = *v9;
    else
      v14 = 0LL;
    v15 = (__int64 *)((char *)v10 + *(_QWORD *)(a1 + 32));
    v18[0] = v14;
    v18[1] = v8;
    if ( v11 >= (char *)v15 - (char *)v8 )
    {
      v21 = v13;
      v22 = v5;
      v20 = v15;
      v19 = a1;
      std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>>(
        &v23,
        (__int64)v18,
        (__int64)&v19,
        (__int64)&v21);
      do
      {
        std::deque<SnapEducationHandler::ApplicationViewHistory>::pop_back(a1);
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v19 = v13;
      v20 = v5;
      v21 = a1;
      v22 = v10;
      std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>>(
        &v23,
        (__int64)&v21,
        (__int64)&v19,
        (__int64)v18);
      do
      {
        std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::~deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>((__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (*(_QWORD *)(a1 + 24) & (*(_QWORD *)(a1 + 16) - 1LL))) + 16LL));
        if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
          *(_QWORD *)(a1 + 24) = 0LL;
        else
          ++*(_QWORD *)(a1 + 24);
        --v12;
      }
      while ( v12 );
    }
    v7 = *(__int64 **)a1;
    a2[2] = (__int64 *)(v11 + *(_QWORD *)(a1 + 24));
  }
  *a2 = v7;
  result = a2;
  a2[1] = 0LL;
  return result;
}
