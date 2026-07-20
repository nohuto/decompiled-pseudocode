/*
 * XREFs of SmpWaitForStatusChange @ 0x140019224
 * Callers:
 *     SmpWaitForSingleSubSys @ 0x140005610 (SmpWaitForSingleSubSys.c)
 *     SmpTerminateCSR @ 0x1400056C0 (SmpTerminateCSR.c)
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmpSbCreateSession @ 0x140006E70 (SmpSbCreateSession.c)
 *     SmpWaitForSubSysStartup @ 0x140008630 (SmpWaitForSubSysStartup.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x1400073F0 (SmpUnlockKnownSubSysList.c)
 *     SmpGetProcessId @ 0x1400078F0 (SmpGetProcessId.c)
 *     SmLogFailureInt @ 0x140007A08 (SmLogFailureInt.c)
 *     SmpLockKnownSubSysList @ 0x1400091D0 (SmpLockKnownSubSysList.c)
 *     SmpCheckSubSysStatus @ 0x14000B500 (SmpCheckSubSysStatus.c)
 *     SmpDisposeSubSysSynch @ 0x140019080 (SmpDisposeSubSysSynch.c)
 *     SmpGetSubSysSynch @ 0x140019138 (SmpGetSubSysSynch.c)
 */

__int64 __fastcall SmpWaitForStatusChange(__int64 a1, int a2, unsigned int *a3)
{
  HANDLE *v6; // rsi
  HANDLE *SubSysSynch; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  signed __int64 v11; // rax
  ULONG v12; // ecx
  NTSTATUS v13; // eax
  unsigned int v14; // esi
  __int64 ProcessId; // rax
  HANDLE Object[5]; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  *(_OWORD *)Object = 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    SubSysSynch = *(HANDLE **)(a1 + 16);
    if ( SubSysSynch )
      goto LABEL_10;
    SmpUnlockKnownSubSysList((__int64)a3);
    SubSysSynch = (HANDLE *)SmpGetSubSysSynch(v9, v8, v10);
    if ( !SubSysSynch )
    {
      Interval.QuadPart = -50000000LL;
      NtDelayExecution(0, &Interval);
    }
    SmpLockKnownSubSysList(*(_DWORD *)(a1 + 64), *a3, 0LL);
    if ( (unsigned int)SmpCheckSubSysStatus(a1) )
      break;
    if ( SubSysSynch )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v6 = SubSysSynch;
        SubSysSynch = *(HANDLE **)(a1 + 16);
      }
      else
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), (signed __int64)SubSysSynch, 0LL);
        if ( v11 )
        {
          v6 = SubSysSynch;
          SubSysSynch = (HANDLE *)v11;
        }
      }
LABEL_10:
      _InterlockedIncrement((volatile signed __int32 *)SubSysSynch);
      SmpUnlockKnownSubSysList((__int64)a3);
      if ( v6 )
        SmpDisposeSubSysSynch(v6);
      v12 = 1;
      Object[0] = SubSysSynch[1];
      if ( a2 == 1 )
      {
        v12 = 2;
        Object[1] = *(HANDLE *)(a1 + 32);
      }
      v13 = NtWaitForMultipleObjects(v12, Object, WaitAny, 0, 0LL);
      v14 = v13;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          ProcessId = SmpGetProcessId(*(void **)(a1 + 48));
          SmLogFailureInt((__int64)"SmpWaitForStatusChange", 965, ProcessId, 0LL, 1);
          v14 = -1073741823;
        }
      }
      else
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)SubSysSynch, 0xFFFFFFFF) == 1 )
          SmpDisposeSubSysSynch(SubSysSynch);
        v14 = 0;
      }
      SmpLockKnownSubSysList(*(_DWORD *)(a1 + 64), *a3, 0LL);
      return v14;
    }
  }
  if ( SubSysSynch )
    SmpDisposeSubSysSynch(SubSysSynch);
  return 0LL;
}
