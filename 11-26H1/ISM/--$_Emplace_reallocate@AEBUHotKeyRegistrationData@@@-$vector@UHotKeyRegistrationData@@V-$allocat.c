/*
 * XREFs of ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@AEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x180107E58
 * Callers:
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x18002E4CC (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAUHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@YAPEAUHotKeyRegistrationData@@QEAU1@0PEAU1@AEAV?$allocator@UHotKeyRegistrationData@@@0@@Z @ 0x180107FD4 (--$_Uninitialized_move@PEAUHotKeyRegistrationData@@V-$allocator@UHotKeyRegistrationData@@@std@@@.c)
 *     ??1_Reallocation_guard@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@QEAA@XZ @ 0x1801080A8 (--1_Reallocation_guard@-$vector@UHotKeyRegistrationData@@V-$allocator@UHotKeyRegistrationData@@@.c)
 *     ?_Change_array@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@AEAAXQEAUHotKeyRegistrationData@@_K1@Z @ 0x18010827C (-_Change_array@-$vector@UHotKeyRegistrationData@@V-$allocator@UHotKeyRegistrationData@@@std@@@st.c)
 */

char *__fastcall std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // xmm0_8
  char *v14; // rdi
  char *v15; // r8
  char *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  char *v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 12;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 2);
  if ( v7 == 0x1555555555555555LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2);
  v10 = v9 >> 1;
  if ( v9 <= 0x1555555555555555LL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x1555555555555555LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x1555555555555555LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(12 * v11);
  v13 = *a3;
  v14 = v12;
  v20 = a1;
  v21 = v11;
  v15 = v12;
  v16 = &v12[12 * v6];
  *(_QWORD *)v16 = v13;
  *((_DWORD *)v16 + 2) = *((_DWORD *)a3 + 2);
  v17 = a1[1];
  v18 = *a1;
  v23 = v16 + 12;
  v22 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<HotKeyRegistrationData *>(v18, a2, v12);
    v17 = a1[1];
    v15 = v16 + 12;
    v18 = a2;
    v22 = v14;
  }
  std::_Uninitialized_move<HotKeyRegistrationData *>(v18, v17, v15);
  std::vector<HotKeyRegistrationData>::_Change_array(a1, v14, v8, v11, v20, 0LL, v21, v22, v23);
  std::vector<HotKeyRegistrationData>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v16;
}
