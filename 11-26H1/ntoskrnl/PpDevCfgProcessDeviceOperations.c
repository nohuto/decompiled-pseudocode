/*
 * XREFs of PpDevCfgProcessDeviceOperations @ 0x140AD10DC
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140988AF0 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14098D0A8 (PiDevCfgSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     _PnpCtxRegDeleteTree @ 0x140A2D8F8 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AD11C4 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140AD1214 (PiDevCfgInitDeviceContext.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceOperations(__int64 a1, void *a2)
{
  bool v4; // zf
  NTSTATUS v5; // eax
  int inited; // ebx
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // [rsp+40h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-61h] BYREF
  __int128 v14; // [rsp+50h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v16[112]; // [rsp+90h] [rbp-19h] BYREF
  int v17; // [rsp+110h] [rbp+67h] BYREF
  int v18; // [rsp+120h] [rbp+77h] BYREF
  int v19; // [rsp+128h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v14 = 0LL;
  memset_0(v16, 0, 0x48uLL);
  v4 = *(_QWORD *)(a1 + 48) == 0LL;
  v17 = 0;
  v19 = 0;
  v12 = 0;
  v18 = 0;
  if ( v4 )
  {
    inited = -1073741808;
  }
  else
  {
    LODWORD(v14) = 2752552;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *((_QWORD *)&v14 + 1) = L"PendingConfiguration";
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    inited = v5;
    if ( v5 == -1073741772 )
    {
      inited = 0;
    }
    else if ( v5 >= 0 )
    {
      inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v16);
      if ( inited >= 0 )
      {
        inited = PiDevCfgConfigureDeviceKeys(a1, (__int64)v16, KeyHandle, -1, &v19, 0LL);
        if ( inited >= 0 )
        {
          PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)a2, (__int64)L"PendingConfiguration");
          v8 = v19;
          if ( v19 )
          {
            v9 = *(_QWORD *)(a1 + 48);
            v18 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v9,
                        (__int64)a2,
                        0xBu,
                        (__int64)&v12,
                        (__int64)&v17,
                        (__int64)&v18,
                        0) >= 0
              && v12 == 4
              && v18 == 4 )
            {
              v11 = v17;
            }
            else
            {
              v11 = 0;
            }
            v17 = v8 | v11;
            PiDevCfgSetDeviceRegProp(v10, (__int64)v16, 0xBu, 4, (__int64)&v17, 4);
          }
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  PiDevCfgFreeDeviceContext(v16);
  return (unsigned int)inited;
}
