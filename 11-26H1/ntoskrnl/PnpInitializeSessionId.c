/*
 * XREFs of PnpInitializeSessionId @ 0x140B1B3F8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     IopGetSessionIdFromPDO @ 0x140A9C068 (IopGetSessionIdFromPDO.c)
 */

_UNKNOWN **__fastcall PnpInitializeSessionId(__int64 a1, __int64 a2, char a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  int v8; // r9d
  int v9; // r11d
  int v10; // r10d
  struct _DEVICE_OBJECT *v11; // rcx
  ULONG v12; // eax
  int *v13; // rcx
  int v14; // edx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  result = &retaddr;
  v5 = *(_QWORD *)(a1 + 16);
  v16 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  if ( v5 )
  {
    v11 = *(struct _DEVICE_OBJECT **)(v5 + 32);
    result = (_UNKNOWN **)v11->DeviceObjectExtension;
    if ( ((_DWORD)result[4] & 0x400) != 0 )
    {
      result = (_UNKNOWN **)IopGetSessionIdFromPDO(v11);
      v8 = (int)result;
      v16 = (int)result;
      v9 = (int)result;
      v10 = (int)result;
    }
  }
  if ( !a3 || v8 != -1 )
  {
    if ( !a3 )
      v10 = v9;
    if ( v10 == -1 )
    {
      v12 = 0;
      v13 = 0LL;
      v14 = 0;
    }
    else
    {
      v12 = 4;
      v13 = &v16;
      v14 = 7;
    }
    return (_UNKNOWN **)PnpSetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(a1 + 48),
                          1,
                          a2,
                          0LL,
                          (__int64)&DEVPKEY_Device_SessionId,
                          v14,
                          (__int64)v13,
                          v12,
                          a3 != 0 ? 0x20000 : 0);
  }
  return result;
}
