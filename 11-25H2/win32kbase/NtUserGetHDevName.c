/*
 * XREFs of NtUserGetHDevName @ 0x14009E490
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14003D690 (EtwTraceReleaseUserCrit.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     DrvGetHdevName @ 0x1400B6690 (DrvGetHdevName.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1401616B8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall NtUserGetHDevName(int a1, ULONG64 a2)
{
  BOOL v3; // esi
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // r12
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  _WORD *v20; // rax
  __int16 *v21; // r8
  int v22; // r11d
  __int64 v23; // r9
  __int16 v24; // r10
  _BOOL8 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rbx
  LONG v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned int *CurrentThreadWin32Thread; // rbx
  __int64 v34; // rcx
  void (*v35)(void); // rax
  __int64 v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  void (*v42)(void); // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rbx
  char v49[24]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v50[48]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-48h]

  memset(v50, 0, sizeof(v50));
  v51 = 0LL;
  v3 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v49, 1LL);
  v4 = 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v8 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19896) * (unsigned int)(unsigned __int16)a1;
    v13 = v12 + *(_QWORD *)(UserSessionState + 19888);
    v15 = W32GetUserSessionState(v12, v14);
    v16 = (unsigned int)((v13 - *(_QWORD *)(v15 + 19888)) >> 5);
    v7 = 5 * v16;
    v17 = (__int64 *)(*(_QWORD *)(v15 + 19832) + 40 * v16);
    LOWORD(a1) = HIWORD(a1) & 0x7FFF;
    if ( ((HIWORD(a1) & 0x7FFF) == *(_WORD *)(v13 + 26)
       || (_WORD)a1 == 0x7FFF
       || !(_WORD)a1 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v13 + 25) & 1) == 0
      && *(_BYTE *)(v13 + 24) == 12 )
    {
      v4 = *v17;
    }
  }
  if ( v4 )
  {
    v18 = *(_QWORD *)(v4 + 88);
    if ( v18 && (unsigned int)DrvGetHdevName(v18, v50) )
    {
      HIWORD(v51) = 0;
      v19 = (_BYTE *)a2;
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= MmUserProbeAddress )
        v19 = (_BYTE *)MmUserProbeAddress;
      *v19 = *v19;
      v19[63] = v19[63];
      v20 = (_WORD *)a2;
      v7 = 2147483646LL;
      v21 = (__int16 *)v50;
      v18 = 32LL;
      v22 = 0;
      v23 = 0LL;
      while ( v18 )
      {
        if ( !v7 )
          goto LABEL_24;
        v24 = *v21;
        if ( !*v21 )
          goto LABEL_24;
        ++v21;
        *v20++ = v24;
        --v18;
        --v7;
        ++v23;
      }
      --v20;
      v22 = -2147483643;
LABEL_24:
      *v20 = 0;
      v3 = v22 >= 0;
    }
  }
  else
  {
    UserSetLastError(1461);
  }
  v25 = v3;
  v26 = W32GetUserSessionState(v18, v7);
  v27 = v26;
  v28 = *(_DWORD *)(v26 + 68880);
  if ( v28 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v26 + 68872), 0, v28, 0);
    *(_DWORD *)(v27 + 68880) = 0;
  }
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v31 = W32GetUserSessionState(v30, v29);
    CurrentThreadWin32Thread = (unsigned int *)PsGetCurrentThreadWin32Thread();
    v34 = CurrentThreadWin32Thread[6];
    LOBYTE(v34) = v34 & 0x18;
    if ( (_BYTE)v34 == 16 )
    {
      v35 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v34, v32) + 48) + 3968LL);
      if ( v35 )
        v35();
      *(_DWORD *)(v31 + 19788) = 0;
      *(_QWORD *)(v31 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v31 + 19688);
      *(_QWORD *)(v31 + 24) = 0LL;
    }
    if ( *(_QWORD *)CurrentThreadWin32Thread && (CurrentThreadWin32Thread[6] & 2) == 0 )
      *(_BYTE *)(*(_QWORD *)CurrentThreadWin32Thread + 1708LL) = 0;
    v36 = PsGetCurrentThreadWin32Thread();
    if ( v36 )
    {
      v37 = *(_DWORD *)(v36 + 28);
      if ( v37 )
        KeBugCheckEx(0x160u, v37, 0LL, 0LL, 0LL);
    }
    EtwTraceReleaseUserCrit();
    v38 = CurrentThreadWin32Thread[6] & 0xFFFFFFE5;
    CurrentThreadWin32Thread[6] = v38;
    if ( (v38 & 0x20) != 0 )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
    ExReleaseFastResource(*(_QWORD *)v31, CurrentThreadWin32Thread + 8);
  }
  else
  {
    v39 = W32GetUserSessionState(v30, v29);
    if ( (unsigned int)GET_USERCRIT_DISPOSITION() == 2 )
    {
      v42 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v41, v40) + 48) + 3968LL);
      if ( v42 )
        v42();
      if ( *(_DWORD *)(v39 + 19788) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1452LL);
      if ( *(_QWORD *)(v39 + 19768) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1460LL);
      if ( *(_DWORD *)(v39 + 19780) > *(_DWORD *)(v39 + 19776) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1466LL);
      *(_DWORD *)(v39 + 19788) = 0;
      *(_QWORD *)(v39 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v39 + 19688);
      if ( *(_QWORD *)(v39 + 24) )
      {
        v43 = (_QWORD *)PsGetCurrentThreadWin32Thread();
        if ( v43 )
        {
          if ( *v43 )
            *(_BYTE *)(*(_QWORD *)(v39 + 24) + 1708LL) = 0;
        }
      }
      *(_QWORD *)(v39 + 24) = 0LL;
    }
    v44 = PsGetCurrentThreadWin32Thread();
    if ( v44 )
    {
      v45 = *(_DWORD *)(v44 + 28);
      if ( v45 )
        KeBugCheckEx(0x160u, v45, 0LL, 0LL, 0LL);
    }
    EtwTraceReleaseUserCrit();
    v46 = PsGetCurrentThreadWin32Thread();
    ExReleaseFastResource(*(_QWORD *)v39, v46 + 32);
    *(_DWORD *)(v46 + 24) &= ~4u;
  }
  KeLeaveCriticalRegion();
  return v25;
}
