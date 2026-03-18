/*
 * XREFs of rimFindLastDeviceFrame @ 0x140131724
 * Callers:
 *     RIMCmDeactivateContact @ 0x1401310A4 (RIMCmDeactivateContact.c)
 *     RIMRemoveFromActiveDevices @ 0x140131468 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindLastDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = 0LL;
  if ( !*(_QWORD *)(a2 + 176) )
    return *(_QWORD *)(*(_QWORD *)(a2 + 456) + 1072LL);
  v4 = *(_QWORD *)(((*(_DWORD *)(a2 + 168) & 0x2000 | 0x4000uLL) >> 10) + a2);
  v5 = a1 + 744;
  v6 = *(_QWORD *)(a1 + 752);
  while ( v6 != v5 )
  {
    v7 = v6 - 8;
    v6 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v7 + 32) == v4 )
      return v7;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131080LL, 697LL);
  return v2;
}
