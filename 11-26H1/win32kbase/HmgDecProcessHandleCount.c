/*
 * XREFs of HmgDecProcessHandleCount @ 0x140056DC4
 * Callers:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRegionOwner @ 0x14001EE60 (GreSetRegionOwner.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     UserDeleteW32Process @ 0x1401C0400 (UserDeleteW32Process.c)
 */

void __fastcall HmgDecProcessHandleCount(_QWORD *a1, int a2)
{
  void *v2; // rbx
  __int64 v4; // rcx
  PVOID *CurrentProcessWin32Process; // rax
  volatile signed __int32 *v6; // rbx
  struct _ERESOURCE *v7; // rbp
  struct _GRETHREAD *v8; // rax
  unsigned __int64 i; // rcx
  __int64 v10; // r8
  struct _GRETHREAD *v11; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  void *v18; // rdi
  bool v19; // cl
  int CurrentWin32kSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  PVOID *ProcessWin32Process; // rax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  PEPROCESS Process; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return;
  v2 = (void *)a2;
  if ( a2 == -2147483630 )
    return;
  if ( a2 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    CurrentProcessWin32Process = (PVOID *)PsGetCurrentProcessWin32Process(v4);
    v6 = (volatile signed __int32 *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process || !CurrentProcessWin32Process )
      return;
    ObfReferenceObject(*CurrentProcessWin32Process);
    _InterlockedIncrement(v6 + 2);
    goto LABEL_8;
  }
  Process = 0LL;
  if ( PsLookupProcessByProcessId(v2, &Process) >= 0 )
  {
    ProcessWin32Process = (PVOID *)PsGetProcessWin32Process(Process);
    v6 = (volatile signed __int32 *)ProcessWin32Process;
    if ( ProcessWin32Process && !*ProcessWin32Process )
    {
      v6 = 0LL;
    }
    else if ( ProcessWin32Process )
    {
      ObfReferenceObject(*ProcessWin32Process);
      _InterlockedIncrement(v6 + 2);
    }
    ObfDereferenceObject(Process);
    if ( v6 )
    {
LABEL_8:
      v7 = (struct _ERESOURCE *)(*a1 + 1512LL);
      GreAcquireSemaphoreInternal(v7);
      v8 = GreGetCurrentThreadCrossSessionCheck();
      v11 = v8;
      if ( v8 )
      {
        v10 = *(_QWORD *)v8;
        if ( (*(_QWORD *)v8 & 0xFFFFFFDFFFF00000uLL) != 0 && (v10 & 0x100000) == 0 )
        {
          v23 = 38;
          for ( i = 0LL; i < 0x40; ++i )
          {
            v24 = i;
            if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v10) == 0 )
              v24 = v23;
            v23 = v24;
          }
          if ( v24 > 20 && v24 != 38 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v24, v10);
        }
        LOBYTE(i) = *((_BYTE *)v11 + 28);
        *((_BYTE *)v11 + 28) = i + 1;
        if ( !(_BYTE)i )
          *(_QWORD *)v11 |= 0x100000uLL;
      }
      --*((_DWORD *)v6 + 15);
      if ( v7 )
      {
        if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(i, (unsigned int)&LockRelease, v10, (_DWORD)v7, (__int64)L"Hmgr");
        CurrentThread = KeGetCurrentThread();
        v13 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v13 = *ThreadWin32Thread;
        }
        v15 = v13 + 8;
        v16 = -v13;
        if ( (v15 & -(__int64)(v16 != 0)) != 0 && (*(_BYTE *)((v15 & -(__int64)(v16 != 0)) + 0x1C))-- == 1 )
          *(_QWORD *)(v15 & -(__int64)(v16 != 0)) &= ~0x100000uLL;
        GreReleaseSemaphoreSharedInternal(v7);
      }
      v18 = *(void **)v6;
      v19 = (v6[69] & 0x200) == 0;
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        if ( v19 )
        {
          if ( v19 )
            UserDeleteW32Process((PVOID)v6);
        }
        else
        {
          PsSetProcessWin32Process(*(_QWORD *)v6, 0LL, v6);
          GreDeleteFastMutex((char *)v6, v25, v26, v27);
        }
      }
      ObfDereferenceObject(v18);
    }
  }
}
