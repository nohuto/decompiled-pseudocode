/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1400B2E90
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0 (-GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140043320 (-GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x1400B31BC (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400B3250 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SfmResetTokenEvent@@YAJXZ @ 0x1400B333C (-SfmResetTokenEvent@@YAJXZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(__int64 a1, unsigned int *a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v5; // ebp
  __int64 v6; // r14
  struct _ERESOURCE *v7; // rsi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // r8d
  struct W32_PUSH_LOCK *v13; // rbx
  int NotificationTokens; // eax
  unsigned int v15; // edi
  bool v16; // zf
  struct _GRETHREAD *v17; // rax
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0;
  v5 = a1;
  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = (struct _ERESOURCE *)(*(_QWORD *)v6 + 520LL);
  EngAcquireSemaphoreShared((HSEMAPHORE)v7);
  GrepAcquireLockValidate<7>();
  if ( UserIsCurrentProcessDwm(v9, v8, v10) )
  {
    v13 = *(struct W32_PUSH_LOCK **)(v6 + 4344);
    if ( v13 )
      GreAcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)(v6 + 4344));
    NotificationTokens = SfmTokenArray::GetNotificationTokens(
                           (SfmTokenArray *)(*(_QWORD *)(v6 + 4344) + 8LL),
                           v5,
                           &v19,
                           a3);
    v11 = *(_QWORD *)(v6 + 4344);
    v15 = NotificationTokens;
    if ( !*(_DWORD *)(v11 + 20) )
      SfmResetTokenEvent();
    if ( v13 )
      GreReleasePushLockExclusive(v13);
  }
  else
  {
    v15 = -1073741790;
  }
  v16 = HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) == 0;
  *a2 = v19;
  if ( !v16 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v11, (unsigned int)&LockRelease, v12, (_DWORD)v7, (__int64)L"DwmState");
  v17 = GreGetCurrentThreadCrossSessionCheck();
  if ( v17 )
  {
    v16 = (*((_BYTE *)v17 + 15))-- == 1;
    if ( v16 )
      *(_QWORD *)v17 &= ~0x80uLL;
  }
  GreReleaseSemaphoreSharedInternal(v7);
  return v15;
}
