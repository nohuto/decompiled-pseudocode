/*
 * XREFs of IopConnectLinkTrackingPort @ 0x1407945D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x140724350 (ZwAlpcConnectPort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

LONG __fastcall IopConnectLinkTrackingPort(__int64 a1)
{
  int v1; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-49h] BYREF
  __int64 v5; // [rsp+70h] [rbp-39h]
  __int64 v6; // [rsp+78h] [rbp-31h]
  __int64 v7; // [rsp+80h] [rbp-29h]
  __int64 v8; // [rsp+88h] [rbp-21h]
  __int128 v9; // [rsp+90h] [rbp-19h]
  _BYTE v10[4]; // [rsp+A0h] [rbp-9h] BYREF
  int v11; // [rsp+A4h] [rbp-5h]
  int v12; // [rsp+A8h] [rbp-1h]
  __int16 v13; // [rsp+ACh] [rbp+3h]
  __int64 v14; // [rsp+B0h] [rbp+7h]

  v1 = 0;
  if ( !PspSiloMonitorLock.Queue )
  {
    if ( *(_DWORD *)(PspSiloMonitorLock.ExtendedFeatureDisableMask + 4) )
    {
      v5 = 48LL;
      v8 = 512LL;
      DestinationString = 0LL;
      memset_0(v10, 0, 0x48uLL);
      v14 = 256LL;
      v11 = 12;
      v12 = 2;
      v9 = 0LL;
      v13 = 257;
      v6 = 0LL;
      v7 = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_PORT");
      v1 = ZwAlpcConnectPort((__int64)&PspSiloMonitorLock.Queue, (__int64)&DestinationString);
    }
    else
    {
      v1 = -1073741772;
    }
  }
  *(_DWORD *)(a1 + 56) = v1;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
