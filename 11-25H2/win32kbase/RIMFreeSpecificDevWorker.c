/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1401380A4
 * Callers:
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401D62EC (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RawInputManagerObjectDelete @ 0x1401E6DF8 (RawInputManagerObjectDelete.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMHidTLCActive @ 0x1401172EC (RIMHidTLCActive.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x140127BE0 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     RIMIDEFreeInjectedInfo @ 0x14013553C (RIMIDEFreeInjectedInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeHidDesc @ 0x1401E0854 (RIMFreeHidDesc.c)
 *     RIMReleasePointerDeviceInfo @ 0x1401E45C0 (RIMReleasePointerDeviceInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1401E6AF0 (RIMFreeHidTLCInfo.c)
 */

void __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2)
{
  char *v4; // rcx
  char *v5; // rcx
  __int64 v6; // rax
  char ***v8; // rdi
  __int64 v9; // rsi
  char *v10; // rcx
  char *v11; // rcx
  char *v12; // rcx

  if ( *(_QWORD *)(a2 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 676LL);
  if ( *(_QWORD *)(a2 + 176) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 677LL);
  if ( *(_QWORD *)(a2 + 88) != a2 + 88 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 681LL);
  v4 = *(char **)(a2 + 200);
  if ( v4 )
    GreDeleteFastMutex(v4);
  v5 = *(char **)(a2 + 304);
  if ( v5 )
    GreDeleteFastMutex(v5);
  if ( (unsigned int)(*(_DWORD *)(a2 + 48) - 2) <= 1 )
  {
    v6 = *(_QWORD *)(a2 + 448);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_DWORD **)(a2 + 448)) )
        RIMFreeHidTLCInfo(*(PVOID *)(a2 + 448));
    }
    if ( *(_QWORD *)(a2 + 440) )
    {
      if ( (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 432) )
        {
          v8 = (char ***)(a2 + 392);
          v9 = 5LL;
          do
          {
            if ( *v8 )
            {
              RIMDeadzone::Release(*v8);
              if ( *((_DWORD *)*v8 + 1) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 725LL);
              GreDeleteFastMutex((char *)*v8);
              *v8 = 0LL;
              --*(_DWORD *)(a2 + 432);
            }
            ++v8;
            --v9;
          }
          while ( v9 );
          if ( *(_DWORD *)(a2 + 432) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 732LL);
        }
        RIMReleasePointerDeviceInfo(a1, a2);
      }
      RIMFreeHidDesc(*(PVOID *)(a2 + 440));
      *(_QWORD *)(a2 + 440) = 0LL;
    }
  }
  if ( *(_DWORD *)(a2 + 48) == 3 && *(_QWORD *)(a2 + 448) )
  {
    RIMFreeHidDesc(*(PVOID *)(a2 + 440));
    *(_QWORD *)(a2 + 440) = 0LL;
  }
  if ( !*(_DWORD *)(a2 + 48) )
  {
    v10 = *(char **)(a2 + 880);
    if ( v10 )
    {
      GreDeleteFastMutex(v10);
      *(_QWORD *)(a2 + 880) = 0LL;
      *(_WORD *)(a2 + 874) = 0;
    }
  }
  v11 = *(char **)(a2 + 336);
  if ( v11 )
    GreDeleteFastMutex(v11);
  v12 = *(char **)(a2 + 360);
  if ( v12 )
    GreDeleteFastMutex(v12);
  RIMIDEFreeInjectedInfo(a2);
}
