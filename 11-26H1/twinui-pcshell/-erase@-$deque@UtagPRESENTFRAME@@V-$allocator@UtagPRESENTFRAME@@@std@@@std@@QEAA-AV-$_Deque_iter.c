/*
 * XREFs of ?erase@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@0@Z @ 0x180359278
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$move@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@0@V10@00@Z @ 0x180340154 (--$move@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFRAME@@@std.c)
 *     ??$move_backward@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@0@V10@00@Z @ 0x1803401F4 (--$move_backward@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFR.c)
 */

__int64 **__fastcall std::deque<tagPRESENTFRAME>::erase(__int64 a1, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 *v7; // rax
  __int64 v8; // r11
  __int64 *v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rcx
  __m128i v19; // [rsp+20h] [rbp-40h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __m128i v21; // [rsp+40h] [rbp-20h] BYREF
  __m128i v22; // [rsp+50h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a3 + 16);
  if ( a1 )
    v7 = *(__int64 **)a1;
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(a4 + 16);
  if ( a1 )
    v9 = *(__int64 **)a1;
  else
    v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = v4 - v10;
  v12 = v8 - v4;
  if ( v8 == v4 )
  {
    a2[1] = (__int64 *)v12;
    *a2 = v7;
    a2[2] = (__int64 *)v4;
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
    v15 = v10 + *(_QWORD *)(a1 + 32);
    v19.m128i_i64[0] = v14;
    v19.m128i_i64[1] = v8;
    if ( v11 >= v15 - v8 )
    {
      v21.m128i_i64[0] = v13;
      *((_QWORD *)&v20 + 1) = v15;
      v21.m128i_i64[1] = v4;
      *(_QWORD *)&v20 = a1;
      std::move<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>>(
        &v22,
        (__int128 *)v19.m128i_i8,
        &v20,
        &v21);
      do
      {
        v16 = (*(_QWORD *)(a1 + 32))-- == 1LL;
        if ( v16 )
          *(_QWORD *)(a1 + 24) = 0LL;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      *(_QWORD *)&v20 = v13;
      v21.m128i_i64[1] = v10;
      *((_QWORD *)&v20 + 1) = v4;
      v21.m128i_i64[0] = a1;
      std::move_backward<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>>(
        &v22,
        (__int128 *)v21.m128i_i8,
        (__int64 *)&v20,
        &v19);
      do
      {
        v16 = (*(_QWORD *)(a1 + 32))-- == 1LL;
        if ( v16 )
          *(_QWORD *)(a1 + 24) = 0LL;
        else
          ++*(_QWORD *)(a1 + 24);
        --v12;
      }
      while ( v12 );
    }
    v17 = *(_QWORD *)(a1 + 24);
    *a2 = *(__int64 **)a1;
    a2[1] = 0LL;
    a2[2] = (__int64 *)(v17 + v11);
  }
  return a2;
}
