/*
 * XREFs of SmpDereferenceKnownSubSys @ 0x140006A10
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 *     SmpApiCallback @ 0x140005960 (SmpApiCallback.c)
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpTerminateCSR @ 0x140006C40 (SmpTerminateCSR.c)
 *     SmpExecPgm @ 0x140006F70 (SmpExecPgm.c)
 *     SmpWaitForSubSysStartup @ 0x140008D90 (SmpWaitForSubSysStartup.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     SmpSetCoreProcessIds @ 0x140018CC4 (SmpSetCoreProcessIds.c)
 *     SmpDeleteSubSys @ 0x140019398 (SmpDeleteSubSys.c)
 * Callees:
 *     SmpTerminate @ 0x14001913C (SmpTerminate.c)
 *     SmpDisposeSubSysSynch @ 0x14001942C (SmpDisposeSubSysSynch.c)
 */

void __fastcall SmpDereferenceKnownSubSys(_BYTE *BaseAddress)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 Parameters[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( BaseAddress && _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) == 1 )
  {
    if ( (BaseAddress[8] & 4) != 0
      && *((_DWORD *)BaseAddress + 6) == 2
      && *((_DWORD *)BaseAddress + 16) == *(_DWORD *)SmpCoreProcessIds )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Core Windows subsystem terminated");
      Parameters[1] = -1073741823LL;
      Parameters[0] = (unsigned __int64)&DestinationString;
      SmpTerminate(Parameters, 1u, 2u);
      __debugbreak();
    }
    v2 = (void *)*((_QWORD *)BaseAddress + 2);
    if ( v2 )
      SmpDisposeSubSysSynch(v2);
    v3 = (void *)*((_QWORD *)BaseAddress + 5);
    if ( v3 )
      NtClose(v3);
    if ( (BaseAddress[8] & 8) != 0 )
    {
      v5 = SmpOverflowSubSysList;
      v6 = BaseAddress + 72;
      if ( *(__int64 **)(SmpOverflowSubSysList + 8) != &SmpOverflowSubSysList )
        __fastfail(3u);
      *v6 = SmpOverflowSubSysList;
      v6[1] = &SmpOverflowSubSysList;
      *(_QWORD *)(v5 + 8) = v6;
      SmpOverflowSubSysList = (__int64)v6;
    }
    else
    {
      v4 = (void *)*((_QWORD *)BaseAddress + 4);
      if ( v4 )
        NtClose(v4);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    }
  }
}
