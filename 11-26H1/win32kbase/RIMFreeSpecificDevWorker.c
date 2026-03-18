/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x140131EEC
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401FDC70 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMHidTLCActive @ 0x140096204 (RIMHidTLCActive.c)
 *     RIMReleasePointerDeviceInfo @ 0x14012E9F4 (RIMReleasePointerDeviceInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1401305B0 (RIMFreeHidTLCInfo.c)
 *     RIMIDEFreeInjectedInfo @ 0x1401323A0 (RIMIDEFreeInjectedInfo.c)
 *     RIMFreeHidDesc @ 0x1401323EC (RIMFreeHidDesc.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x14017F750 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  char *v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  char *v10; // rcx
  char *v11; // rcx
  RIMDeadzone **v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rcx

  if ( *(_QWORD *)(a2 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 673LL);
  if ( *(_QWORD *)(a2 + 176) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 674LL);
  if ( *(_QWORD *)(a2 + 88) != a2 + 88 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 678LL);
  v6 = *(char **)(a2 + 200);
  if ( v6 )
    GreDeleteFastMutex(v6, a2, a3, a4);
  v7 = *(char **)(a2 + 304);
  if ( v7 )
    GreDeleteFastMutex(v7, a2, a3, a4);
  v8 = *(_DWORD *)(a2 + 48);
  if ( v8 == 2 || v8 == 3 )
  {
    v9 = *(_QWORD *)(a2 + 448);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_DWORD **)(a2 + 448)) )
        RIMFreeHidTLCInfo(*(PVOID ***)(a2 + 448), a2, a3);
    }
    if ( *(_QWORD *)(a2 + 440) )
    {
      if ( (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 432) )
        {
          v14 = (RIMDeadzone **)(a2 + 392);
          v15 = 5LL;
          do
          {
            if ( *v14 )
            {
              RIMDeadzone::Release(*v14);
              if ( *((_DWORD *)*v14 + 1) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 722LL);
              GreDeleteFastMutex((char *)*v14, v16, v17, v18);
              *v14 = 0LL;
              --*(_DWORD *)(a2 + 432);
            }
            ++v14;
            --v15;
          }
          while ( v15 );
          if ( *(_DWORD *)(a2 + 432) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 729LL);
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
    v19 = *(char **)(a2 + 880);
    if ( v19 )
    {
      GreDeleteFastMutex(v19, a2, a3, a4);
      *(_QWORD *)(a2 + 880) = 0LL;
      *(_WORD *)(a2 + 874) = 0;
    }
  }
  v10 = *(char **)(a2 + 336);
  if ( v10 )
    GreDeleteFastMutex(v10, a2, a3, a4);
  v11 = *(char **)(a2 + 360);
  if ( v11 )
    GreDeleteFastMutex(v11, a2, a3, a4);
  return RIMIDEFreeInjectedInfo(a2);
}
