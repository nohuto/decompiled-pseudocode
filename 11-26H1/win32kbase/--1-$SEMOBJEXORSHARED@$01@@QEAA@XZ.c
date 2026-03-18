/*
 * XREFs of ??1?$SEMOBJEXORSHARED@$01@@QEAA@XZ @ 0x1400146D4
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall SEMOBJEXORSHARED<2>::~SEMOBJEXORSHARED<2>(__int64 a1, __int64 a2, int a3)
{
  HSEMAPHORE v3; // rsi
  __int64 v4; // rdi
  struct _KTHREAD *v5; // rbp
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  bool v9; // zf
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // ebx
  __int64 v15; // rax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v3 = *(HSEMAPHORE *)a1;
  v4 = 0LL;
  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockRelease, a3, *(_QWORD *)a1, (__int64)L"GreLock");
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v12 = v4 + 8;
    v13 = -v4;
    if ( (v12 & -(__int64)(v13 != 0)) != 0 )
    {
      v9 = (*(_BYTE *)((v12 & -(__int64)(v13 != 0)) + 0xA))-- == 1;
      if ( v9 )
        *(_QWORD *)(v12 & -(__int64)(v13 != 0)) &= ~4uLL;
    }
  }
  else
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockRelease, a3, *(_QWORD *)a1, (__int64)L"GreLock");
    v5 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v14 = W32GetCurrentWin32kSessionId(),
          v15 = PsGetCurrentThreadProcess(),
          v14 == (unsigned int)PsGetProcessSessionIdEx(v15)) )
    {
      v6 = (__int64 *)PsGetThreadWin32Thread(v5);
      if ( v6 )
        v4 = *v6;
    }
    v7 = v4 + 8;
    v8 = -v4;
    if ( (v7 & -(__int64)(v8 != 0)) != 0 )
    {
      v9 = (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xA))-- == 1;
      if ( v9 )
        *(_QWORD *)(v7 & -(__int64)(v8 != 0)) &= ~4uLL;
    }
  }
  GreReleaseSemaphoreSharedInternal(v3);
}
