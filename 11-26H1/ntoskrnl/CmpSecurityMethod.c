/*
 * XREFs of CmpSecurityMethod @ 0x1408F39C0
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpAssignKeySecurity @ 0x140860E54 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     CmpQueryKeySecurity @ 0x1408F3D50 (CmpQueryKeySecurity.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  char v13; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  int KeySecurity; // ebx
  unsigned int v19; // ecx
  __int64 v20; // rcx
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned int BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+28h] [rbp-D8h]
  _QWORD v25[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+64h] [rbp-9Ch]
  __int128 *v30; // [rsp+68h] [rbp-98h]
  int v31; // [rsp+70h] [rbp-90h]
  __int128 v32; // [rsp+74h] [rbp-8Ch]
  __int64 v33; // [rsp+84h] [rbp-7Ch]
  int v34; // [rsp+8Ch] [rbp-74h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int128 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-18h]
  _OWORD v43[2]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = 0;
  v36 = a6;
  v35 = a8;
  v11 = a2;
  v41 = 0LL;
  v42 = 0LL;
  memset(v43, 0, sizeof(v43));
  v26 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v43, 0x20000uLL, (__int64)a3);
    v8 = 1;
  }
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v41);
  v25[1] = v25;
  v13 = 0;
  v25[0] = v25;
  v37 = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( CmpTraceRoutine && a1 )
    v26 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() )
  {
    if ( (_DWORD)v11 == 1 )
    {
      *((_QWORD *)&v38 + 1) = a5;
      v15 = 36;
      v16 = 37;
    }
    else
    {
      if ( (_DWORD)v11 )
        goto LABEL_26;
      v15 = 38;
      v16 = 39;
    }
    *(_QWORD *)&v38 = a4;
    *((_QWORD *)&v37 + 1) = a3;
    *(_QWORD *)&v37 = a1;
    v17 = CmpCallCallBacksEx(v15, (__int64)&v37, 0LL, 1, v16, a1, (__int64)v25);
    if ( v17 < 0 )
    {
      KeySecurity = 0;
      if ( v17 != -1073740541 )
        KeySecurity = v17;
      goto LABEL_19;
    }
    v13 = 1;
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
    KeySecurity = CmpSetKeySecurity(a1, a3, (__int64)a4, v36, a7, v35);
    if ( KeySecurity >= 0 )
      goto LABEL_28;
  }
LABEL_12:
  if ( v13 )
  {
    if ( (_DWORD)v11 == 1 )
    {
      if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v25[0] != v25 )
      {
        v19 = 37;
        v30 = &v37;
        v24 = a1;
        BugCheckParameter4a = 37;
LABEL_18:
        v29 = 0;
        v33 = 0LL;
        v34 = 0;
        v27 = a1;
        v32 = 0LL;
        v28 = KeySecurity;
        v31 = KeySecurity;
        CmpCallCallBacksEx(v19, (__int64)&v27, 0LL, 0, BugCheckParameter4a, v24, (__int64)v25);
        KeySecurity = v31;
      }
    }
    else if ( !(_DWORD)v11
           && HIDWORD(WheapPfaLock.StateSaveArea)
           && !(unsigned int)CmpIsRegistryLockAcquired()
           && (_QWORD *)v25[0] != v25 )
    {
      v19 = 39;
      v30 = &v37;
      v24 = a1;
      BugCheckParameter4a = 39;
      goto LABEL_18;
    }
  }
LABEL_19:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v41);
  if ( v8 && CmpTraceRoutine )
  {
    LOBYTE(v20) = ((_DWORD)v11 != 0) + 28;
    guard_dispatch_icall_no_overrides(v20, (__int64)v43);
  }
  return (unsigned int)KeySecurity;
}
