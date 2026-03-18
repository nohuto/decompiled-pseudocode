/*
 * XREFs of ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x14016B540
 * Callers:
 *     <none>
 * Callees:
 *     IsPublicPointerDevice @ 0x14016B628 (IsPublicPointerDevice.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x14016B654 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceClosed(CHidInput *this, struct DEVICEINFO *a2)
{
  unsigned int v4; // esi
  __int64 i; // r8
  __int64 v6; // r8
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // r10d
  int v11; // ecx
  void *v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  CTouchProcessor *v17; // rcx

  v4 = 0;
  for ( i = **((_QWORD **)this + 155); i; i = *(_QWORD *)(v6 + 56) )
  {
    IsPublicPointerDevice(i);
    if ( (struct DEVICEINFO *)v6 == a2 )
      break;
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
  {
    v4 = v9 + 1;
    if ( !v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 762LL);
    --*((_DWORD *)this + 332);
  }
  v11 = *((_DWORD *)a2 + 46);
  if ( (v11 & 0x80u) != 0 )
  {
    v13 = *(void **)a2;
    if ( *(_QWORD *)(W32GetUserSessionState(v11, v7, v8) + 3256) )
    {
      W32GetUserSessionState(v15, v14, v16);
      CTouchProcessor::OnRimDeviceClosed(v17, v13);
    }
  }
  return v4;
}
