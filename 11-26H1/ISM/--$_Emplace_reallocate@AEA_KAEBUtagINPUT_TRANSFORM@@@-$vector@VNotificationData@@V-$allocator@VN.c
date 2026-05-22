/*
 * XREFs of ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x180060A88
 * Callers:
 *     ??$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x1800A5304 (--$emplace_back@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VNotifica.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18005D630 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Change_array@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXQEAVNotificationData@@_K1@Z @ 0x18005E3BC (-_Change_array@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEAAXQEAV.c)
 *     ?_Calculate_growth@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEBA_K_K@Z @ 0x180061D8C (-_Calculate_growth@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEBA_.c)
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x180063290 (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA@XZ @ 0x1800A54B8 (--1_Reallocation_guard@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@Q.c)
 */

_DWORD *__fastcall std::vector<NotificationData>::_Emplace_reallocate<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int128 *a4)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 size_of; // rax
  _DWORD *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  _DWORD *v16; // r8
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  _DWORD *v20; // r11
  __int64 v21; // r11
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v24; // [rsp+38h] [rbp-40h]
  _DWORD *v25; // [rsp+40h] [rbp-38h]

  v8 = (a2 - *a1) / 96;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 5);
  if ( v9 == 0x2AAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(0x2AAAAAAAAAAAAAALL);
  v10 = v9 + 1;
  v11 = std::vector<NotificationData>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<96>(v11);
  v13 = (_DWORD *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = &v13[24 * v8];
  v23[0] = a1;
  v23[2] = v11;
  v16 = v13;
  v24 = v15;
  *v15 = 2;
  *((_QWORD *)v15 + 1) = v14;
  *((_QWORD *)v15 + 2) = 0LL;
  v17 = *a4;
  v25 = v15 + 24;
  *((_OWORD *)v15 + 2) = v17;
  *((_OWORD *)v15 + 3) = a4[1];
  *((_OWORD *)v15 + 4) = a4[2];
  *((_OWORD *)v15 + 5) = a4[3];
  v18 = a1[1];
  v19 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<NotificationData *>(v19, a2, v13);
    v18 = a1[1];
    v16 = v15 + 24;
    v19 = a2;
    v24 = v20;
  }
  std::_Uninitialized_move<NotificationData *>(v19, v18, v16);
  v23[1] = 0LL;
  std::vector<NotificationData>::_Change_array(a1, v21, v10, v11);
  std::vector<NotificationData>::_Reallocation_guard::~_Reallocation_guard(v23);
  return v15;
}
