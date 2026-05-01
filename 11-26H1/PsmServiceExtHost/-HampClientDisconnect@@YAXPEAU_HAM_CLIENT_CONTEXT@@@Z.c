/*
 * XREFs of ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004131C
 * Callers:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040958 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007F4F8 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012DC0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012E20 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180016FA4 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800414D0 (RmpWnfCleanupPendingCallbackList.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18005BA40 (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampClientQueryReconnectTimeout@@YAKXZ @ 0x18006ED10 (-HampClientQueryReconnectTimeout@@YAKXZ.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampClientDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  void *v2; // rsi
  unsigned int v3; // edx
  struct _HAM_ACTIVITY *FirstActivity; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_WORD *)a1 + 110) )
  {
    v7 = -10000LL * HampClientQueryReconnectTimeout();
    FirstActivity = HampClientGetFirstActivity(a1, v3);
    while ( FirstActivity )
    {
      if ( *((_BYTE *)FirstActivity + 562) == 2 )
        HampActStop(FirstActivity);
      v5 = *((_QWORD *)FirstActivity + 6);
      v6 = *((_QWORD *)FirstActivity + 8);
      FirstActivity = 0LL;
      if ( v5 != v6 + 56 )
        FirstActivity = (struct _HAM_ACTIVITY *)(v5 - 48);
    }
    HampClientAcquireLockExclusive(a1);
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    *((_DWORD *)a1 + 36) |= 2u;
    TpSetTimer(*((_QWORD *)a1 + 26), &v7, 0LL, 10LL);
  }
  else
  {
    HampClientAcquireLockExclusive(a1);
  }
  *((_DWORD *)a1 + 50) = 0;
  ++*((_DWORD *)a1 + 54);
  if ( (*((_BYTE *)a1 + 144) & 1) == 0 )
  {
    if ( *((_QWORD *)a1 + 16) )
    {
      v2 = (void *)*((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = 0LL;
    }
    if ( *((_DWORD *)a1 + 30) || *((_DWORD *)a1 + 31) )
    {
      v8 = *((_QWORD *)a1 + 15);
      *((_QWORD *)a1 + 15) = 0LL;
    }
  }
  HampClientReleaseLockExclusive(a1);
  if ( v2 )
    RmpWnfCleanupPendingCallbackList(v2);
  if ( v8 )
    NtDeleteWnfStateName(&v8);
  RtlWakeAddressAll((char *)a1 + 216);
  CemRcObjectDereference(a1);
}
