/*
 * XREFs of PiDevCfgInitDeviceCallback @ 0x1407AC820
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14094DB08 (PiDevCfgSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AE836C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 */

__int64 __fastcall PiDevCfgInitDeviceCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // ecx
  int v10; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-15h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v13[96]; // [rsp+50h] [rbp-9h] BYREF
  int v14; // [rsp+C0h] [rbp+67h] BYREF
  int v15; // [rsp+D8h] [rbp+7Fh] BYREF

  memset_0(v13, 0, 0x58uLL);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_QWORD *)(a1 + 16);
  Handle = 0LL;
  v14 = 0;
  v11 = 0;
  v10 = 1;
  v15 = 0;
  if ( (int)PnpOpenObjectRegKey(PiPnpRtlCtx, v6, v5, 983103, 0, (__int64)&Handle) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v15 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v7, (_DWORD)Handle, 11, (__int64)&v10, (__int64)&v14, (__int64)&v15, 0) < 0
      || v10 != 4
      || v15 != 4 )
    {
      v14 = 0;
    }
    if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 16), Handle, v13) >= 0 )
    {
      if ( (int)PiDevCfgCheckDeviceNeedsUpdate((__int64)v13, &v11) >= 0 && v11 )
      {
        v14 |= v11;
        PiDevCfgSetDeviceRegProp(v8, (unsigned int)v13, 11, 4, (__int64)&v14, 4);
      }
      *a3 = 0;
    }
  }
  PiDevCfgFreeDeviceContext(v13);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
