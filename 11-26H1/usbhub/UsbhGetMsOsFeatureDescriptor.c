/*
 * XREFs of UsbhGetMsOsFeatureDescriptor @ 0x140042F68
 * Callers:
 *     UsbhGetMsOsContainerID @ 0x1400429A0 (UsbhGetMsOsContainerID.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x140042CA4 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1400431A4 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x14002DA80 (UsbhSyncSendCommandToDevice.c)
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
  unsigned __int16 v12; // r8
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // [rsp+28h] [rbp-30h]
  char v17[2]; // [rsp+40h] [rbp-18h] BYREF
  __int16 v18; // [rsp+42h] [rbp-16h]
  __int16 v19; // [rsp+44h] [rbp-14h]
  unsigned __int16 v20; // [rsp+46h] [rbp-12h]
  unsigned __int16 v21; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v21) = a3;
  v10 = PdoExt(a1);
  v11 = a5;
  if ( !a5 )
    return 3221225485LL;
  v12 = a6;
  if ( !a6 )
    return 3221225485LL;
  v13 = a7;
  if ( a7 )
    *a7 = 0;
  v14 = *((_QWORD *)v10 + 148);
  v17[1] = *((_BYTE *)v10 + 1432);
  v20 = v12;
  v21 = v12;
  v17[0] = a2 & 3 | 0xC0;
  v18 = 0;
  v19 = a4;
  result = UsbhSyncSendCommandToDevice(v14, a1, v17, v11, &v21, v16, &a5);
  if ( (int)result >= 0 )
  {
    if ( v13 )
      *v13 = v21;
  }
  return result;
}
