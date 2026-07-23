/*
 * XREFs of PiDevCfgProcessDeviceCallback @ 0x1407AD0C0
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PnpDuplicateUnicodeString @ 0x1404EF504 (PnpDuplicateUnicodeString.c)
 *     PipAreDriversLoaded @ 0x140516350 (PipAreDriversLoaded.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14094DB08 (PiDevCfgSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     PnpSetTargetDeviceRemove @ 0x1409B6C04 (PnpSetTargetDeviceRemove.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AE836C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1, __int64 a2)
{
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // ecx
  __int64 Pool2; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  void *v16; // rcx
  int v18; // [rsp+40h] [rbp-79h]
  int v19; // [rsp+48h] [rbp-71h]
  HANDLE Handle[2]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v21[144]; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v22; // [rsp+120h] [rbp+67h] BYREF
  int v23; // [rsp+128h] [rbp+6Fh] BYREF
  int v24; // [rsp+130h] [rbp+77h] BYREF
  unsigned int v25; // [rsp+138h] [rbp+7Fh] BYREF

  memset_0(v21, 0, 0x58uLL);
  v24 = 1;
  v4 = (*(_DWORD *)(a1 + 704) & 0x1000) == 0;
  Handle[0] = 0LL;
  v22 = 0;
  v25 = 0;
  v23 = 0;
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      v6 = a1 + 40;
      if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, v5, 16, 0, 983103, 0, (__int64)Handle, 0LL) >= 0 )
      {
        v7 = *(_QWORD *)(a1 + 48);
        v23 = 4;
        if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v7, Handle[0], 11, (__int64)&v24, (__int64)&v22, (__int64)&v23, 0) >= 0
          && v24 == 4
          && v23 == 4 )
        {
          v8 = v22;
        }
        else
        {
          v8 = 0;
          v22 = 0;
        }
        if ( (v8 & 0x40000) != 0 )
        {
          if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), Handle[0], v21) < 0 )
            goto LABEL_29;
          LOBYTE(v9) = (PiDevCfgFlags & 2) != 0;
          if ( ((unsigned __int8)v9 & ((v22 & 0x400) != 0)) != 0 )
          {
            v10 = v22 & 0xFFFFFFDF;
          }
          else
          {
            v11 = PiDevCfgCheckDeviceNeedsUpdate((__int64)v21, &v25);
            v10 = v22;
            if ( v11 >= 0 )
              v10 = v25 | v22;
          }
          v22 = v10 & 0xFFFBFFFF;
          PiDevCfgSetDeviceRegProp(v9, (unsigned int)v21, 11, 4, (__int64)&v22, 4);
          LOBYTE(v8) = v22;
        }
        if ( (v8 & 2) != 0 )
        {
          if ( (unsigned int)PipAreDriversLoaded(a1) )
          {
            v22 &= ~2u;
            PiDevCfgSetDeviceRegProp(v12, (unsigned int)v21, 11, 4, (__int64)&v22, 4);
          }
          else
          {
            Pool2 = ExAllocatePool2(0x100uLL);
            v14 = (_QWORD *)Pool2;
            if ( Pool2 )
            {
              if ( PnpDuplicateUnicodeString(Pool2 + 16, v6) )
              {
                v15 = *(_QWORD **)(a2 + 8);
                if ( *v15 != a2 )
                  __fastfail(3u);
                *v14 = a2;
                v14[1] = v15;
                *v15 = v14;
                *(_QWORD *)(a2 + 8) = v14;
              }
              else
              {
                ExFreePoolWithTag(v14, 0);
              }
            }
          }
        }
        else if ( (v8 & 0x20) != 0 )
        {
          v16 = *(void **)(a1 + 32);
          if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
          {
            PnpRequestDeviceAction(v16, 1u, 1, 0LL, 0LL, 0LL, 0LL);
            PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 0x10u, 1, 0LL, 0LL, 0LL, 0LL);
          }
          else
          {
            PnpSetTargetDeviceRemove(v16, 0, 18, -1073740651, 0LL, v18, v19, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
  }
LABEL_29:
  PiDevCfgFreeDeviceContext(v21);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
