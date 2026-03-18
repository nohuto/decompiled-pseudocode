/*
 * XREFs of GreIsDisconnectDeviceAttached @ 0x1400587A4
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1400FA930 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreIsDisconnectDeviceAttached(__int64 a1)
{
  struct _ERESOURCE **v1; // r14
  struct _ERESOURCE *v2; // rbp
  struct _GRETHREAD *v3; // rax
  unsigned __int64 i; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  struct _GRETHREAD *v7; // rbx
  unsigned int v8; // esi
  struct _ERESOURCE *v9; // rax
  struct _ERESOURCE *v10; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v20; // edx
  int v21; // eax

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v2 = *v1 + 6;
  EngAcquireSemaphoreShared((HSEMAPHORE)v2);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  v6 = 0LL;
  v7 = v3;
  v8 = 1;
  if ( v3 )
  {
    v5 = *(_QWORD *)v3;
    if ( (*(_QWORD *)v3 & 0xFFFFFFDFFFFFFFFEuLL) != 0 && (*(_QWORD *)v3 & 2) == 0 )
    {
      v20 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v21 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v5) == 0 )
          v21 = v20;
        v20 = v21;
      }
      if ( v21 > 1 && v21 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v21, v5);
    }
    LOBYTE(i) = *((_BYTE *)v7 + 9);
    *((_BYTE *)v7 + 9) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v7 |= 2uLL;
  }
  v9 = v1[165];
  if ( !v9 || (v9[1].OwnerEntry.TableSize & 1) == 0 )
  {
    v10 = v1[163];
    if ( !v10 || (v10[1].OwnerEntry.TableSize & 1) == 0 )
      v8 = 0;
  }
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(i, (unsigned int)&LockRelease, v5, (_DWORD)v2, (__int64)L"DynamicModeChange");
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v12),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v14 = v6 + 8;
  v15 = -v6;
  if ( (v14 & -(__int64)(v15 != 0)) != 0 && (*(_BYTE *)((v14 & -(__int64)(v15 != 0)) + 9))-- == 1 )
    *(_QWORD *)(v14 & -(__int64)(v15 != 0)) &= ~2uLL;
  GreReleaseSemaphoreSharedInternal(v2);
  return v8;
}
