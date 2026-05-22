/*
 * XREFs of ??$_Emplace_reallocate@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@$$QEAW4NotificationType@@AEA_K2@Z @ 0x18006DC10
 * Callers:
 *     ??$emplace_back@W4NotificationType@@AEA_KAEA_K@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAAEAVNotificationData@@$$QEAW4NotificationType@@AEA_K1@Z @ 0x1800A5378 (--$emplace_back@W4NotificationType@@AEA_KAEA_K@-$vector@VNotificationData@@V-$allocator@VNotific.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAVNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x18005D630 (--$_Uninitialized_move@PEAVNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@YAPEAVN.c)
 *     ?_Change_array@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXQEAVNotificationData@@_K1@Z @ 0x18005E3BC (-_Change_array@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEAAXQEAV.c)
 *     ?_Calculate_growth@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEBA_K_K@Z @ 0x180061D8C (-_Calculate_growth@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@AEBA_.c)
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x180063290 (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA@XZ @ 0x1800A54B8 (--1_Reallocation_guard@-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@Q.c)
 */

_DWORD *__fastcall std::vector<NotificationData>::_Emplace_reallocate<enum NotificationType,unsigned __int64 &,unsigned __int64 &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rbp
  __int64 size_of; // rax
  _DWORD *v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rdi
  __int64 v17; // r8
  _DWORD *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // r11
  __int64 v22; // r11
  _QWORD v24[3]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v25; // [rsp+38h] [rbp-40h]
  _DWORD *v26; // [rsp+40h] [rbp-38h]

  v9 = (a2 - *a1) / 96;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 5);
  if ( v10 == 0x2AAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(0x2AAAAAAAAAAAAAALL);
  v11 = v10 + 1;
  v12 = std::vector<NotificationData>::_Calculate_growth(a1, v10 + 1);
  size_of = std::_Get_size_of_n<96>(v12);
  v14 = (_DWORD *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v15 = *a4;
  v16 = &v14[24 * v9];
  v24[0] = a1;
  v24[2] = v12;
  v17 = *a5;
  *v16 = *a3;
  *((_QWORD *)v16 + 1) = v15;
  *((_QWORD *)v16 + 2) = 0LL;
  *((_QWORD *)v16 + 3) = v17;
  v18 = v14;
  v19 = a1[1];
  v20 = *a1;
  v26 = v16 + 24;
  v25 = v16;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<NotificationData *>(v20, a2, v14);
    v19 = a1[1];
    v18 = v16 + 24;
    v20 = a2;
    v25 = v21;
  }
  std::_Uninitialized_move<NotificationData *>(v20, v19, v18);
  v24[1] = 0LL;
  std::vector<NotificationData>::_Change_array(a1, v22, v11, v12);
  std::vector<NotificationData>::_Reallocation_guard::~_Reallocation_guard(v24);
  return v16;
}
