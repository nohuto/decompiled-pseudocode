/*
 * XREFs of CmpSecurityMethod @ 0x1408ED400
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmpQueryKeySecurity @ 0x1408ED790 (CmpQueryKeySecurity.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSecurityMethod(
        __int64 a1,
        int a2,
        unsigned int *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  char v8; // di
  ULONG_PTR v11; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  int KeySecurity; // ebx
  unsigned int v21; // ecx
  __int64 v22; // rcx
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned int BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  __int64 v26; // [rsp+28h] [rbp-D8h]
  _QWORD v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+64h] [rbp-9Ch]
  __int128 *v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+74h] [rbp-8Ch]
  __int64 v35; // [rsp+84h] [rbp-7Ch]
  int v36; // [rsp+8Ch] [rbp-74h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int128 v39; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-50h]
  __int128 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int128 v43; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-18h]
  _OWORD v45[2]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = 0;
  v38 = a6;
  v37 = a8;
  v11 = a2;
  v43 = 0LL;
  v44 = 0LL;
  memset(v45, 0, sizeof(v45));
  v28 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v45, 0x20000uLL, (__int64)a3);
    v8 = 1;
  }
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v43);
  v27[1] = v27;
  v15 = 0;
  v27[0] = v27;
  v39 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( CmpTraceRoutine && a1 )
    v28 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() )
  {
    if ( (_DWORD)v11 == 1 )
    {
      *((_QWORD *)&v40 + 1) = a5;
      v17 = 36;
      v18 = 37;
    }
    else
    {
      if ( (_DWORD)v11 )
        goto LABEL_26;
      v17 = 38;
      v18 = 39;
    }
    *(_QWORD *)&v40 = a4;
    *((_QWORD *)&v39 + 1) = a3;
    *(_QWORD *)&v39 = a1;
    v19 = CmpCallCallBacksEx(v17, (__int64)&v39, 0LL, 1, v18, a1, (__int64)v27);
    if ( v19 < 0 )
    {
      KeySecurity = 0;
      if ( v19 != -1073740541 )
        KeySecurity = v19;
      goto LABEL_19;
    }
    v15 = 1;
  }
  if ( (_DWORD)v11 == 1 )
  {
    KeySecurity = CmpQueryKeySecurity(a1, (_DWORD)a3, (_DWORD)a4, a5, BugCheckParameter4);
    if ( KeySecurity < 0 )
      goto LABEL_12;
    goto LABEL_28;
  }
LABEL_26:
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v11 == 2 )
    {
LABEL_28:
      KeySecurity = 0;
      goto LABEL_12;
    }
    if ( (_DWORD)v11 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, *(_QWORD *)(a1 + 8), v11);
    KeySecurity = CmpAssignKeySecurity(a1, a4);
    if ( KeySecurity >= 0 )
    {
      ExFreePoolWithTag(a4, 0);
      goto LABEL_28;
    }
  }
  else
  {
    KeySecurity = CmpSetKeySecurity(a1, a3, (__int64)a4, v38, a7, v37);
    if ( KeySecurity >= 0 )
      goto LABEL_28;
  }
LABEL_12:
  if ( v15 )
  {
    if ( (_DWORD)v11 == 1 )
    {
      if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v27[0] != v27 )
      {
        v21 = 37;
        v32 = &v39;
        v26 = a1;
        BugCheckParameter4a = 37;
LABEL_18:
        v31 = 0;
        v35 = 0LL;
        v36 = 0;
        v29 = a1;
        v34 = 0LL;
        v30 = KeySecurity;
        v33 = KeySecurity;
        CmpCallCallBacksEx(v21, (__int64)&v29, 0LL, 0, BugCheckParameter4a, v26, (__int64)v27);
        KeySecurity = v33;
      }
    }
    else if ( !(_DWORD)v11
           && WheapPfaLock.ExpectedRunTime
           && !(unsigned int)CmpIsRegistryLockAcquired()
           && (_QWORD *)v27[0] != v27 )
    {
      v21 = 39;
      v32 = &v39;
      v26 = a1;
      BugCheckParameter4a = 39;
      goto LABEL_18;
    }
  }
LABEL_19:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v43);
  if ( v8 && CmpTraceRoutine )
  {
    LOBYTE(v22) = ((_DWORD)v11 != 0) + 28;
    guard_dispatch_icall_no_overrides(v22, (__int64)v45);
  }
  return (unsigned int)KeySecurity;
}
