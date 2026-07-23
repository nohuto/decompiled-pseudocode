/*
 * XREFs of PiDevCfgInitDriverDatabaseCallback @ 0x1407AC988
 * Callers:
 *     PiDrvDbEnumNodes @ 0x1407B85CC (PiDrvDbEnumNodes.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxCloseMachine @ 0x14089BFF8 (_PnpCtxCloseMachine.c)
 *     _CmDeleteDevice @ 0x14089CD0C (_CmDeleteDevice.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140A46258 (PiDevCfgCopyObjectProperties.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140AA2310 (_CmGetMatchingFilteredDeviceList.c)
 *     _PnpCtxOpenMachine @ 0x140AE5860 (_PnpCtxOpenMachine.c)
 *     _CmCreateDevice @ 0x140AF540C (_CmCreateDevice.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall PiDevCfgInitDriverDatabaseCallback(int a1)
{
  _WORD *Pool2; // rdi
  unsigned int v2; // esi
  int v3; // ecx
  int v4; // r8d
  unsigned int v5; // eax
  _WORD *v6; // rbx
  int MatchingFilteredDeviceList; // eax
  int Device; // esi
  HANDLE v9; // r15
  __int64 v10; // rax
  int v12; // [rsp+28h] [rbp-29h]
  int v13; // [rsp+68h] [rbp+17h] BYREF
  PVOID P; // [rsp+70h] [rbp+1Fh]
  HANDLE v15; // [rsp+78h] [rbp+27h] BYREF
  HANDLE v16; // [rsp+80h] [rbp+2Fh] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+37h] BYREF
  char v18; // [rsp+D0h] [rbp+7Fh] BYREF

  v16 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v2 = 0;
  v13 = 0;
  v15 = 0LL;
  Handle = 0LL;
  v18 = 0;
  if ( (int)PnpCtxRegOpenKey(PiPnpRtlCtx, -2147483646, a1, 0, 0x2000000, (__int64)&v16) >= 0 )
  {
    if ( (int)PnpCtxOpenMachine(v3, (_DWORD)v16, v4, 0) >= 0 )
    {
      v5 = 2048;
      v13 = 2048;
      while ( v5 > v2 )
      {
        v2 = v5;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
        v6 = Pool2;
        if ( !Pool2 )
          goto LABEL_25;
        MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                       (_DWORD)P,
                                       (unsigned int)L"Root",
                                       1,
                                       0,
                                       0LL,
                                       (__int64)Pool2,
                                       v2,
                                       (__int64)&v13);
        if ( MatchingFilteredDeviceList != -1073741789 )
        {
          if ( MatchingFilteredDeviceList < 0 || !v2 || !*Pool2 )
            goto LABEL_24;
          do
          {
            if ( (int)CmOpenDeviceRegKey((_DWORD)P, (_DWORD)v6, 16, 0, 0x2000000, 0, (__int64)&v15, 0LL) >= 0 )
            {
              Device = CmCreateDevice(PiPnpRtlCtx, (_DWORD)v6, 131103, (unsigned int)&Handle, (__int64)&v18, 0);
              if ( Device >= 0 )
              {
                v9 = Handle;
                if ( v18 )
                  Device = PiDevCfgCopyObjectProperties(
                             (_DWORD)P,
                             (_DWORD)v6,
                             1,
                             (_DWORD)v15,
                             v12,
                             (__int64)v6,
                             1,
                             (__int64)Handle,
                             0LL,
                             0LL,
                             0x20000);
                ZwClose(v9);
                if ( Device < 0 )
                  CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, v6, 0LL);
              }
              ZwClose(v15);
            }
            v10 = -1LL;
            do
              ++v10;
            while ( v6[v10] );
            v6 += v10 + 1;
          }
          while ( *v6 );
          break;
        }
        v5 = v13;
      }
      if ( !Pool2 )
        goto LABEL_25;
LABEL_24:
      ExFreePoolWithTag(Pool2, 0);
    }
LABEL_25:
    if ( P )
      PnpCtxCloseMachine(P);
  }
  if ( v16 )
    ZwClose(v16);
  return 1;
}
