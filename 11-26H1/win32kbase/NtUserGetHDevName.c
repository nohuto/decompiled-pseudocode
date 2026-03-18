/*
 * XREFs of NtUserGetHDevName @ 0x1400DECF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14001F3E0 (EtwTraceReleaseUserCrit.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1400E5830 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     DrvGetHdevName @ 0x1400EBE20 (DrvGetHdevName.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserGetHDevName(int a1, volatile void *a2)
{
  int v3; // esi
  __int64 v4; // r15
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int16 *v10; // r8
  __int64 UserSessionState; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // rbx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // r12
  __int64 v22; // rcx
  _WORD *v23; // rax
  int v24; // r11d
  __int64 v25; // r9
  __int16 v26; // r10
  __int64 v27; // rax
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rbx
  LONG v31; // r8d
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v37; // rcx
  void (*v38)(void); // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v44; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v45[48]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-48h]

  memset(v45, 0, sizeof(v45));
  v46 = 0LL;
  v3 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v44);
  v4 = 0LL;
  v9 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v9 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8, (_DWORD)v10);
    v15 = *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 19928) * (unsigned __int16)a1;
    v16 = v15 + *(_QWORD *)(UserSessionState + 19920);
    v19 = W32GetUserSessionState(v15, v17, v18);
    v20 = (unsigned int)((v16 - *(_QWORD *)(v19 + 19920)) >> 5);
    v8 = 5 * v20;
    v21 = (__int64 *)(*(_QWORD *)(v19 + 19864) + 40 * v20);
    LOWORD(a1) = HIWORD(a1) & 0x7FFF;
    if ( ((HIWORD(a1) & 0x7FFF) == *(_WORD *)(v16 + 26)
       || (_WORD)a1 == 0x7FFF
       || !(_WORD)a1 && PsGetCurrentProcessWow64Process(v20, v8))
      && (*(_BYTE *)(v16 + 25) & 1) == 0
      && *(_BYTE *)(v16 + 24) == 12 )
    {
      v4 = *v21;
    }
  }
  if ( v4 )
  {
    v22 = *(_QWORD *)(v4 + 88);
    if ( v22 && (unsigned int)DrvGetHdevName(v22, v45) )
    {
      HIWORD(v46) = 0;
      v3 = 1;
      ProbeForWrite(a2, 0x40uLL, 4u);
      v23 = a2;
      v8 = 2147483646LL;
      v10 = (__int16 *)v45;
      v22 = 32LL;
      v24 = 0;
      v25 = 0LL;
      while ( v22 )
      {
        if ( !v8 )
          goto LABEL_19;
        v26 = *v10;
        if ( !*v10 )
          goto LABEL_19;
        ++v10;
        *v23++ = v26;
        --v22;
        --v8;
        ++v25;
      }
      --v23;
      v24 = -2147483643;
LABEL_19:
      *v23 = 0;
      if ( v24 < 0 )
        v3 = 0;
    }
  }
  else
  {
    UserSetLastError(1461);
  }
  v27 = W32GetUserSessionState(v22, v8, (_DWORD)v10);
  v30 = v27;
  v31 = *(_DWORD *)(v27 + 68872);
  if ( v31 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v27 + 68864), 0, v31, 0);
    *(_DWORD *)(v30 + 68872) = 0;
  }
  v32 = W32GetUserSessionState(v29, v28, v31);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v34, v33);
  v37 = *(unsigned int *)(CurrentThreadWin32Thread + 24);
  LOBYTE(v37) = v37 & 0xC;
  if ( (_BYTE)v37 == 8 )
  {
    v38 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 48) + 3520LL);
    if ( v38 )
      v38();
    *(_DWORD *)(v32 + 19820) = 0;
    *(_QWORD *)(v32 + 19800) = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
    *(_QWORD *)(v32 + 24) = 0LL;
  }
  v39 = *(_QWORD *)CurrentThreadWin32Thread;
  if ( *(_QWORD *)CurrentThreadWin32Thread && (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 2) == 0 )
    *(_BYTE *)(v39 + 1708) = 0;
  v40 = PsGetCurrentThreadWin32Thread(v39, v35);
  if ( v40 )
  {
    v41 = *(_DWORD *)(v40 + 28);
    if ( v41 )
      KeBugCheckEx(0x160u, v41, 0LL, 0LL, 0LL);
  }
  EtwTraceReleaseUserCrit();
  *(_DWORD *)(CurrentThreadWin32Thread + 24) &= 0xFFFFFFF1;
  if ( (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 0x10) != 0 )
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
  ExReleaseFastResource(*(_QWORD *)v32, CurrentThreadWin32Thread + 32);
  KeLeaveCriticalRegion();
  return v3;
}
