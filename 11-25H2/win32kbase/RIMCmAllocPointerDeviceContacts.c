/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x1401F5464
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1401EA4A4 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14019D0D0 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  unsigned int i; // ecx
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  _QWORD *v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 *v22; // rdx

  v3 = *(_DWORD *)(a1 + 776);
  v4 = 0;
  if ( *(_DWORD *)(a1 + 24) == 7 && !v3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 79);
  v6 = *(_DWORD *)(a1 + 776);
  v7 = v6 - 1;
  if ( *(_DWORD *)(a1 + 24) != 7 )
    v7 = *(_DWORD *)(a1 + 776);
  if ( v6 > v7 + 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 80);
  if ( !*(_DWORD *)(a1 + 776) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 81);
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
    v16 = *(_DWORD *)(a1 + 24);
    v17 = (_QWORD *)(a1 + 984);
    v18 = *(_DWORD *)(a1 + 776);
    *(_QWORD *)(a1 + 992) = a1 + 984;
    *(_QWORD *)(a1 + 984) = a1 + 984;
    v19 = v16 == 7;
    if ( v19 < v18 )
    {
      v20 = 0LL;
      v21 = a1 + 984;
      if ( v16 == 7 )
        v20 = 2864LL;
      do
      {
        v22 = (__int64 *)(v20 + *(_QWORD *)(a1 + 976) + 16LL);
        if ( *v17 != v21 )
          __fastfail(3u);
        v22[1] = (__int64)v17;
        ++v19;
        *v22 = v21;
        v20 += 2864LL;
        *v17 = v22;
        v17 = v22;
        *(_QWORD *)(a1 + 992) = v22;
      }
      while ( v19 < v18 );
    }
  }
  else
  {
    v4 = -1073741670;
    RIMCmFreePointerDeviceContacts(a1);
  }
  return v4;
}
