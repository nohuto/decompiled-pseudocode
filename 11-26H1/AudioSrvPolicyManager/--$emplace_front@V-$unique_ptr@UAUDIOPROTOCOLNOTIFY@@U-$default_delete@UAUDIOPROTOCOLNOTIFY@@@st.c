/*
 * XREFs of ??$emplace_front@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@1@$$QEAV21@@Z @ 0x18004306C
 * Callers:
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180017D2C (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002A32C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$def.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::forward_list<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>::emplace_front<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v7 = a1;
  v8 = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
  v5 = *a2;
  *a2 = 0LL;
  v4[1] = v5;
  *v4 = *a1;
  v8 = 0LL;
  *a1 = v4;
  std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::unique_ptr<AUDIOPROTOCOLNOTIFY>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::unique_ptr<AUDIOPROTOCOLNOTIFY>,void *>>>((__int64)&v7);
  return *a1 + 8LL;
}
