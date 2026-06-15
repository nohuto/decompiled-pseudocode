/*
 * XREFs of ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18003E970
 * Callers:
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002CA68 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Append_range_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@std@@QEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18003E7D8 (--$_Append_range_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_typ.c)
 *     ??1?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003EF60 (--1-$_Flist_insert_after_op2@V-$allocator@U-$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::forward_list<IAudioSessionInfo *>::_Assign_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<IAudioSessionInfo *>>,std::_Iterator_base0>,std::_Default_sentinel>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = (__int64)a1;
  while ( 1 )
  {
    v3 = a1;
    a1 = (_QWORD *)*a1;
    if ( !a2 )
      break;
    if ( !a1 )
    {
      v5 = v2;
      v6 = 0LL;
      std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>::_Append_range_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<IAudioSessionInfo *>>,std::_Iterator_base0>,std::_Default_sentinel>(
        &v5,
        a2);
      if ( v6 )
      {
        *v6 = *v3;
        *v3 = v7;
        v6 = 0LL;
      }
      std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>(&v5);
      return;
    }
    a1[1] = a2[1];
    a2 = (_QWORD *)*a2;
  }
  *v3 = 0LL;
  if ( a1 )
  {
    do
    {
      v4 = (_QWORD *)*a1;
      std::_Deallocate<16>(a1, (const struct std::nothrow_t *)0x10);
      a1 = v4;
    }
    while ( v4 );
  }
}
