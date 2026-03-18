/*
 * XREFs of UsbhGetBillboardInfo @ 0x1400474B8
 * Callers:
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhGetStringFromDevice @ 0x1400193B8 (UsbhGetStringFromDevice.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhValidateStringDescriptor @ 0x140038E58 (UsbhValidateStringDescriptor.c)
 */

__int64 __fastcall UsbhGetBillboardInfo(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // r12
  void *Pool2; // rdi
  __int64 v9; // rbx
  int StringFromDevice; // eax
  __int64 v11; // rcx
  int v12; // r8d
  unsigned int v13; // r14d
  unsigned __int8 i; // r14
  int v15; // eax
  unsigned int v16; // r12d
  unsigned __int8 v17; // [rsp+30h] [rbp-30h]
  unsigned __int8 v18; // [rsp+30h] [rbp-30h]
  int v19; // [rsp+50h] [rbp-10h] BYREF
  _DWORD *v20; // [rsp+58h] [rbp-8h]
  unsigned __int16 v21; // [rsp+A8h] [rbp+48h] BYREF

  v19 = 0;
  v20 = PdoExt(a2);
  v6 = v20;
  Pool2 = (void *)ExAllocatePool2(64LL, 255LL, 1112885333LL);
  if ( !Pool2 )
  {
    Log(a1, 4, 4678193, 0LL, 0LL);
    return 3221225626LL;
  }
  LODWORD(v9) = 0;
  if ( !*(_BYTE *)(a3 + 3) )
    goto LABEL_8;
  v17 = *(_BYTE *)(a3 + 3);
  v21 = 255;
  StringFromDevice = UsbhGetStringFromDevice(a1, a2, (__int64)&v19, (int)Pool2, &v21, 0x409u, v17);
  v9 = StringFromDevice;
  v11 = StringFromDevice & 0xC0000000;
  if ( (_DWORD)v11 != -1073741824 )
  {
    v13 = v21;
    if ( !UsbhValidateStringDescriptor(v11, (unsigned __int8 *)Pool2, v21, &v19) )
    {
      UsbhException(a1, *((_WORD *)v6 + 714), 38, Pool2, v13, v9, v19, usbfile_bus_c, 7758, 0);
      v12 = 4678195;
      goto LABEL_16;
    }
LABEL_8:
    for ( i = 0; i < *(_BYTE *)(a3 + 4); ++i )
    {
      if ( *(_BYTE *)(a3 + 4LL * i + 47) )
      {
        v18 = *(_BYTE *)(a3 + 4LL * i + 47);
        v21 = 255;
        v15 = UsbhGetStringFromDevice(a1, a2, (__int64)&v19, (int)Pool2, &v21, 0x409u, v18);
        v9 = v15;
        if ( (v15 & 0xC0000000) == 0xC0000000 )
        {
          UsbhException(a1, *((_WORD *)v20 + 714), 141, Pool2, v21, v15, v19, usbfile_bus_c, 7783, 0);
          v12 = 4678196;
          goto LABEL_16;
        }
        v16 = v21;
        if ( !UsbhValidateStringDescriptor(3221225472LL, (unsigned __int8 *)Pool2, v21, &v19) )
        {
          UsbhException(a1, *((_WORD *)v20 + 714), 38, Pool2, v16, v9, v19, usbfile_bus_c, 7795, 0);
          v12 = 4678197;
          goto LABEL_16;
        }
      }
    }
    goto LABEL_17;
  }
  UsbhException(a1, *((_WORD *)v6 + 714), 140, Pool2, v21, StringFromDevice, v19, usbfile_bus_c, 7746, 0);
  v12 = 4678194;
LABEL_16:
  Log(a1, 4, v12, 0LL, v9);
LABEL_17:
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v9;
}
