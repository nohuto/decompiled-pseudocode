/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x14012E834
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x14020958C (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14012EBA0 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmAllocPointerDeviceContacts(__int64 a1, unsigned int a2)
{
  int v3; // ecx
  unsigned int v4; // edi
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int i; // edx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  unsigned int v17; // ebp
  unsigned int v18; // r9d
  __int64 v19; // r11
  __int64 v20; // r10
  _QWORD *v21; // r8

  v3 = *(_DWORD *)(a1 + 776);
  v4 = 0;
  if ( *(_DWORD *)(a1 + 24) == 7 && !v3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 79LL);
  v6 = *(_DWORD *)(a1 + 776);
  v7 = v6 - 1;
  if ( *(_DWORD *)(a1 + 24) != 7 )
    v7 = *(_DWORD *)(a1 + 776);
  if ( v6 > v7 + 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 80LL);
  if ( !*(_DWORD *)(a1 + 776) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 81LL);
  v8 = *(unsigned int *)(a1 + 776);
  v9 = 10;
  if ( (unsigned int)v8 <= 0xA )
    v9 = *(_DWORD *)(a1 + 776);
  *(_DWORD *)(a1 + 1008) = v9;
  *(_QWORD *)(a1 + 1000) = 0LL;
  v10 = Win32AllocPoolZInitImpl(256LL, 2864 * v8, a2);
  *(_QWORD *)(a1 + 976) = v10;
  if ( v10
    && (v11 = Win32AllocPoolZInitImpl(256LL, 16LL * *(unsigned int *)(a1 + 1008), a2),
        (*(_QWORD *)(a1 + 1000) = v11) != 0LL) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 1008); *v15 = v15 )
    {
      v14 = i++;
      v15 = (_QWORD *)(*(_QWORD *)(a1 + 1000) + 16 * v14);
      v15[1] = v15;
    }
    v16 = (_QWORD *)(a1 + 984);
    *(_QWORD *)(a1 + 984) = a1 + 984;
    *(_QWORD *)(a1 + 992) = a1 + 984;
    v17 = *(_DWORD *)(a1 + 776);
    v18 = *(_DWORD *)(a1 + 24) == 7;
    if ( v18 < v17 )
    {
      v19 = a1 + 984;
      v20 = a1 + 984;
      while ( 1 )
      {
        v21 = (_QWORD *)(2864LL * v18 + *(_QWORD *)(a1 + 976) + 16LL);
        if ( v20 != v19 )
          __fastfail(3u);
        *v21 = v19;
        ++v18;
        v21[1] = v16;
        *v16 = v21;
        *(_QWORD *)(a1 + 992) = v21;
        if ( v18 >= v17 )
          break;
        v20 = *v21;
        v16 = v21;
      }
    }
  }
  else
  {
    v4 = -1073741670;
    RIMCmFreePointerDeviceContacts(a1);
  }
  return v4;
}
