/*
 * XREFs of UsbhGetMsOsFeatureDescriptor @ 0x14004343C
 * Callers:
 *     UsbhGetMsOsContainerID @ 0x140042E74 (UsbhGetMsOsContainerID.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x140043178 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x140043680 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x140019B80 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetMsOsFeatureDescriptor(
        __int64 a1,
        char a2,
        char a3,
        __int16 a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  _DWORD *v10; // rax
  __int64 v11; // r9
  _DWORD *v12; // rcx
  unsigned __int16 v13; // r8
  _DWORD *v14; // rbx
  char v15; // al
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // [rsp+28h] [rbp-30h]
  char v19[2]; // [rsp+40h] [rbp-18h] BYREF
  __int16 v20; // [rsp+42h] [rbp-16h]
  __int16 v21; // [rsp+44h] [rbp-14h]
  unsigned __int16 v22; // [rsp+46h] [rbp-12h]
  unsigned __int16 v23; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v23) = a3;
  v10 = PdoExt(a1);
  v11 = a5;
  v12 = v10;
  if ( !a5 )
    return 3221225485LL;
  v13 = a6;
  if ( !a6 )
    return 3221225485LL;
  v14 = a7;
  if ( a7 )
    *a7 = 0;
  v15 = *((_BYTE *)v10 + 1432);
  v16 = *((_QWORD *)v12 + 148);
  v20 = 0;
  v19[1] = v15;
  v22 = v13;
  v23 = v13;
  v19[0] = a2 & 3 | 0xC0;
  v21 = a4;
  result = UsbhSyncSendCommandToDevice(v16, a1, v19, v11, &v23, v18, &a5);
  if ( (int)result >= 0 )
  {
    if ( v14 )
      *v14 = v23;
  }
  return result;
}
