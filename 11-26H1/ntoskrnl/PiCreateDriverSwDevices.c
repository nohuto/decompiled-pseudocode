/*
 * XREFs of PiCreateDriverSwDevices @ 0x1409ABE44
 * Callers:
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1409AC818 (PnpDeviceObjectToDeviceInstance.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140B226B8 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall PiCreateDriverSwDevices(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v9; // [rsp+50h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+18h] BYREF

  Handle = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v9 = 0LL;
  v8 = 0LL;
  v3 = PnpDeviceObjectToDeviceInstance(v2, &Handle, 131097LL);
  if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx && (v4 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v5 = *(_QWORD *)(v4 + 8);
    else
      v5 = 0LL;
    v6 = RegRtlOpenKeyTransacted((char *)Handle, L"Devices", 0, 0x20019u, &v9, v5);
    if ( v6 >= 0 )
    {
      *(_QWORD *)&v8 = a1;
      DWORD2(v8) = 0;
      v3 = PnpCtxRegEnumKeyWithCallback(*(_QWORD *)&PiPnpRtlCtx, v9, PiCreateDriverSwDeviceCallback, &v8);
      if ( v3 >= 0 && SDWORD2(v8) < 0 )
        v3 = DWORD2(v8);
    }
    else
    {
      v3 = 0;
      if ( v6 != -1073741772 )
        v3 = v6;
    }
  }
  if ( v9 )
    ZwClose(v9);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}
