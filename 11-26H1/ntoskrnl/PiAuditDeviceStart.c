/*
 * XREFs of PiAuditDeviceStart @ 0x1409AD34C
 * Callers:
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PiAuditDeviceOperation @ 0x140B15BF8 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiAuditDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v4; // r8
  char v5; // [rsp+70h] [rbp+8h] BYREF
  int v6; // [rsp+78h] [rbp+10h] BYREF
  int v7; // [rsp+80h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v5 = 0;
  v7 = 1;
  result = PnpGetObjectProperty(
             *(__int64 *)&PiPnpRtlCtx,
             v1,
             1,
             0LL,
             0LL,
             (__int64)&DEVPKEY_Device_InLocalMachineContainer,
             &v6,
             (__int64)&v5,
             1u,
             (__int64)&v7,
             0);
  if ( (int)result >= 0 && v6 == 17 && v7 == 1 && v5 != -1 )
  {
    LOBYTE(v4) = 1;
    return PiAuditDeviceOperation(a1, 0LL, v4);
  }
  return result;
}
