/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x180015A9C
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180015510 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x180015194 (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 *     ??1?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18002A288 (--1-$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U-$default_delete@UMEDIAMANAGER_NOTIFICATION_B.c)
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x18002DF94 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GenerateMediaManagerNotification(CApplication ***a1, void **a2)
{
  unsigned int NotificationDataSize; // ebx
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  size_t v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  void *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  NotificationDataSize = GetNotificationDataSize(a1, &v15);
  if ( (NotificationDataSize & 0x80000000) != 0 )
  {
    v5 = 421LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)NotificationDataSize);
    return NotificationDataSize;
  }
  v6 = v15;
  v7 = v15 + 42;
  if ( v15 >= 0xFFFFFFFFFFFFFFD6uLL )
  {
    NotificationDataSize = -2147024362;
    v5 = 425LL;
    goto LABEL_17;
  }
  v8 = operator new[](v15 + 42, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v15 = (unsigned __int64)v8;
  if ( v8 )
  {
    memset_0(v8, 0, v7);
    *v9 = v7;
    v9[1] = 0x10000;
    *((_QWORD *)v9 + 1) = 0LL;
    v9[6] = 0;
    if ( v6 )
    {
      v10 = SetNotificationData(a1, (__int64)(v9 + 8), v6);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B9,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v10);
LABEL_14:
        std::unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>::~unique_ptr<MEDIAMANAGER_NOTIFICATION_BLOCK>(&v15);
        return v11;
      }
      if ( v6 > 0xFFFFFFFF )
      {
        v9[7] = -1;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BB,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x80070216LL);
        v11 = -2147024362;
        goto LABEL_14;
      }
      v9[7] = v6;
    }
    v15 = 0LL;
    v12 = *a2;
    *a2 = v9;
    if ( v12 )
      operator delete(v12, (const struct std::nothrow_t *)0x21);
    v11 = 0;
    goto LABEL_14;
  }
  NotificationDataSize = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AC,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)0x8007000ELL);
  return NotificationDataSize;
}
