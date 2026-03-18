/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1401715D0
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1401713D4 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071770 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     PostDeviceNotification @ 0x140171974 (PostDeviceNotification.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x140171FE8 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x140172A84 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x140172BE0 (-SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x140172C3C (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1402296F0 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     SearchHidTLCInfo @ 0x14022F0DC (SearchHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x14023590C (AllocateAndLinkHidTLCInfo.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x140236D14 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InsertProcRequest(
        struct tagPROCESSINFO *a1,
        const struct tagRAWINPUTDEVICE *a2,
        struct tagPROCESS_HID_REQUEST *a3,
        int a4,
        int a5,
        struct tagWND *a6,
        int a7)
{
  const struct tagRAWINPUTDEVICE *v8; // r12
  struct tagHID_PAGEONLY_REQUEST *v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct DEVICEINFO *i; // rsi
  __int64 UserSessionState; // rax
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ecx
  char *v32; // [rsp+30h] [rbp-40h] BYREF
  struct tagWND *v33; // [rsp+38h] [rbp-38h]
  char v34[16]; // [rsp+40h] [rbp-30h] BYREF
  tagObjLock *v35; // [rsp+50h] [rbp-20h]
  char v36; // [rsp+60h] [rbp-10h]

  v8 = a2;
  switch ( a4 )
  {
    case 1:
      if ( !a5 )
      {
        UserSessionState = W32GetUserSessionState(a1, a2);
        v20 = 0LL;
        v21 = 0LL;
        v32 = 0LL;
        v22 = UserSessionState + 104;
        if ( *(struct _KTHREAD **)(UserSessionState + 112) != KeGetCurrentThread() )
        {
          v20 = UserSessionState + 104;
          v32 = (char *)(UserSessionState + 104);
          RIMLockExclusive(v22);
          v21 = v22;
        }
        v23 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
        if ( !v23 )
        {
          v23 = AllocateAndLinkHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
          if ( !v23 )
          {
            UserSetLastError(8);
            if ( v21 )
              RIMUnlockExclusive(v20);
            return 0LL;
          }
        }
        *((_QWORD *)a3 + 3) = v23;
        ++*(_DWORD *)(v23 + 24);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v32);
      }
      if ( !a7 )
      {
        v32 = (char *)a3 + 32;
        v33 = a6;
        HMAssignmentLock(&v32, 0LL);
      }
      v24 = *((_QWORD *)a1 + 103) + 16LL;
      goto LABEL_24;
    case 2:
      v10 = SearchHidPageOnlyRequest(*((_WORD *)a3 + 8));
      if ( !v10 )
      {
        v10 = AllocateAndLinkHidPageOnlyRequest(*((_WORD *)a3 + 8));
        if ( !v10 )
        {
          UserSetLastError(8);
          return 0LL;
        }
      }
      *((_QWORD *)a3 + 3) = v10;
      SetHidPOCountToTLCInfo(*((_WORD *)a3 + 8), ++*((_DWORD *)v10 + 5), 0);
      v32 = (char *)a3 + 32;
      v33 = a6;
      HMAssignmentLock(&v32, 0LL);
      v24 = *((_QWORD *)a1 + 103) + 32LL;
LABEL_24:
      v25 = *(_QWORD *)v24;
      if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) == v24 )
      {
        *(_QWORD *)a3 = v25;
        *((_QWORD *)a3 + 1) = v24;
        *(_QWORD *)(v25 + 8) = a3;
LABEL_26:
        *(_QWORD *)v24 = a3;
        break;
      }
      goto LABEL_34;
    case 3:
      if ( !a5 )
      {
        v26 = W32GetUserSessionState(a1, a2);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v32,
          (struct RIMLOCK *)(v26 + 104));
        v27 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
        if ( !v27 )
        {
          v27 = AllocateAndLinkHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
          if ( !v27 )
          {
            UserSetLastError(8);
            RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v32);
            return 0LL;
          }
        }
        *((_QWORD *)a3 + 3) = v27;
        ++*(_DWORD *)(v27 + 36);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v32);
      }
      v24 = *((_QWORD *)a1 + 103) + 48LL;
      a2 = *(const struct tagRAWINPUTDEVICE **)v24;
      if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) == v24 )
      {
        *(_QWORD *)a3 = a2;
        *((_QWORD *)a3 + 1) = v24;
        *((_QWORD *)a2 + 1) = a3;
        goto LABEL_26;
      }
LABEL_34:
      __fastfail(3u);
  }
  v12 = *((_DWORD *)a3 + 5) & 0xFFFFFFFB | (*((_DWORD *)v8 + 1) >> 11) & 4;
  *((_DWORD *)a3 + 5) = v12;
  if ( (*((_DWORD *)v8 + 1) & 0x1100) != 0 )
  {
    if ( !a5 && (v12 & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 103) + 80LL);
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v34);
      v30 = W32GetUserSessionState(v29, v28);
      ++*(_DWORD *)(v30 + 16848);
      if ( v36 )
      {
        if ( v35 )
          tagObjLock::UnLockExclusive(v35);
      }
    }
    v31 = *((_DWORD *)a3 + 5) | 1;
    *((_DWORD *)a3 + 5) = v31;
    if ( (*((_DWORD *)v8 + 1) & 0x1000) != 0 )
      v12 = v31 | 2u;
    else
      v12 = v31 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v12;
  }
  v13 = W32GetUserSessionState(v12, a2);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v13 + 16832));
  W32AcquirePushLockSharedEx(Lock, 0);
  v17 = W32GetUserSessionState(v16, v15);
  for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v17 + 16832)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    PostDeviceNotification(a3, i, 0, 1);
  W32ReleasePushLockSharedEx(Lock, 0LL);
  return 1LL;
}
