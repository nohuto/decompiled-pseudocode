/*
 * XREFs of PspPostFreezeOperationWorker @ 0x140AF23D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwTraceWin32kFreezeChangeNotifyStart @ 0x14082DF64 (EtwTraceWin32kFreezeChangeNotifyStart.c)
 *     EtwTraceWin32kFreezeChangeNotifyStop @ 0x14082E018 (EtwTraceWin32kFreezeChangeNotifyStop.c)
 *     PspWin32kProcessFreezeNotify @ 0x140B076C8 (PspWin32kProcessFreezeNotify.c)
 */

void __fastcall PspPostFreezeOperationWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rsi
  __int64 v4; // r14
  unsigned int v5; // r13d
  struct _KLOCK_ENTRIES *v6; // r9
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rdi
  _QWORD **v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  struct _KPROCESS *v13; // r15
  _QWORD *v14; // rcx
  unsigned int SessionId; // edi
  __int64 v16; // rdi
  struct _KLOCK_ENTRIES *v17; // r9
  struct _KTHREAD *v18; // rax
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rdi
  char v22; // di
  _DWORD *v23; // r15
  PVOID *v24; // rdi
  __int64 v25; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD **v26; // [rsp+30h] [rbp-D8h]
  _QWORD *v27; // [rsp+38h] [rbp-D0h]
  _DWORD v28[128]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v29[128]; // [rsp+248h] [rbp+140h] BYREF

  v27 = (_QWORD *)a1;
  memset_0(v29, 0, sizeof(v29));
  memset_0(v28, 0, sizeof(v28));
  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(a1 + 8);
  v4 = 0LL;
  LODWORD(v25) = 0;
  --CurrentThread->KernelApcDisable;
  v5 = -1;
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 8, 0LL, 0LL, v6);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 8), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 8), v7, a1 + 8);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (_QWORD **)(a1 + 16);
  v26 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 != v10 && (_DWORD)v4 != 128 )
    {
      v12 = *v11;
      v13 = (struct _KPROCESS *)(v11 - 258);
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v14 = (_QWORD *)v11[1], (_QWORD *)*v14 != v11) )
        __fastfail(3u);
      *v14 = v12;
      *(_QWORD *)(v12 + 8) = v14;
      *(_OWORD *)v11 = 0LL;
      if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
      KeAbPostRelease((unsigned __int64)v3);
      KeLeaveCriticalRegion();
      if ( !v13[1].Padding[2] )
        goto LABEL_22;
      SessionId = PsGetSessionIdEx((__int64)v13);
      if ( (_DWORD)v4 )
      {
        if ( v5 == SessionId )
          goto LABEL_21;
        PspWin32kProcessFreezeNotify(v5, v29, v28, &v25);
        LODWORD(v4) = v25;
      }
      v5 = SessionId;
LABEL_21:
      PsReferenceSiloContext(v13);
      v16 = (unsigned int)v4;
      v29[(unsigned int)v4] = v13;
      v4 = (unsigned int)(v4 + 1);
      v28[v16] = (unsigned int)PsGetProcessId(v13);
      LODWORD(v25) = v4;
LABEL_22:
      ObfDereferenceObject(v13);
      goto LABEL_23;
    }
    if ( !(_DWORD)v4 )
      break;
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((unsigned __int64)v3);
    KeLeaveCriticalRegion();
    if ( (unsigned int)dword_140E08F40 > 5 && (qword_140E08F50 & 4) != 0 && (qword_140E08F58 & 4) == qword_140E08F58 )
    {
      v22 = 1;
      EtwTraceWin32kFreezeChangeNotifyStart();
    }
    else
    {
      v22 = 0;
    }
    Win32kProcessFreezeChangeNotify(v5, v29, (unsigned int)v4);
    if ( v22 )
      EtwTraceWin32kFreezeChangeNotifyStop(v5, (__int64)v28, v4);
    v23 = v28;
    v24 = (PVOID *)v29;
    do
    {
      ObfDereferenceObject(*v24);
      *v24++ = 0LL;
      *v23++ = 0;
      --v4;
    }
    while ( v4 );
    v4 = 0LL;
    LODWORD(v25) = 0;
LABEL_23:
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = (AutoBoost *)KeAbPreAcquire((__int64)v3, 0LL, 0LL, v17);
    v21 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v19, (__int64)v3);
    v10 = v26;
    if ( v21 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        AutoBoost::KiAbpPostAcquire(v21, v20);
        v10 = v26;
      }
      else
      {
        *((_BYTE *)v21 + 10) = 1;
      }
    }
  }
  *v27 &= ~1uLL;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((unsigned __int64)v3);
  KeLeaveCriticalRegion();
}
