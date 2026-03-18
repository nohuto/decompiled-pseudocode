/*
 * XREFs of UsbhGetBosDescriptor @ 0x14005C518
 * Callers:
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x140047328 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x140019B80 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

__int64 __fastcall UsbhGetBosDescriptor(__int64 a1, __int64 a2, _WORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  unsigned __int16 *Pool2; // rsi
  int v9; // ebx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+90h] [rbp+18h] BYREF
  __int16 v16; // [rsp+98h] [rbp+20h] BYREF
  int v17; // [rsp+9Ah] [rbp+22h]
  unsigned __int16 v18; // [rsp+9Eh] [rbp+26h]

  v6 = PdoExt(a2);
  v16 = 1664;
  v17 = 3840;
  v7 = v6;
  v18 = 5;
  *(_DWORD *)a3 = 5;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 5LL, 1112885333LL);
  if ( !Pool2 )
  {
    v9 = -1073741670;
LABEL_9:
    v11 = (void *)*((_QWORD *)v7 + 300);
    v7[705] = 1073807371;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)v7 + 300) = 0LL;
    }
    goto LABEL_11;
  }
  v9 = UsbhSyncSendCommandToDevice(a1, a2, (char *)&v16, (__int64)Pool2, a3, v13, &v15);
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    v7[705] = 1073807371;
  }
  else
  {
    v10 = ExAllocatePool2(64LL, Pool2[1], 1112885333LL);
    *((_QWORD *)v7 + 300) = v10;
    if ( v10 )
    {
      v18 = Pool2[1];
      *(_DWORD *)a3 = v18;
      v9 = UsbhSyncSendCommandToDevice(a1, a2, (char *)&v16, v10, a3, v14, &v15);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( (v9 & 0xC0000000) == 0xC0000000 )
    goto LABEL_9;
LABEL_11:
  Log(a1, 256, 1195528019, v9, 0LL);
  return (unsigned int)v9;
}
