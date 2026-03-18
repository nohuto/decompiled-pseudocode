/*
 * XREFs of UsbhGetSerialNumber @ 0x1400389E8
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     UsbhFreeID @ 0x1400081A4 (UsbhFreeID.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhGetStringFromDevice @ 0x14002D2C4 (UsbhGetStringFromDevice.c)
 *     UsbhValidateStringDescriptor @ 0x140037C88 (UsbhValidateStringDescriptor.c)
 *     UsbhValidateSerialNumberString @ 0x14005C5F8 (UsbhValidateSerialNumberString.c)
 */

__int64 __fastcall UsbhGetSerialNumber(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  __int64 Pool2; // rax
  unsigned __int8 *v9; // r14
  int v10; // esi
  unsigned int v11; // r13d
  int v12; // r8d
  unsigned __int64 v13; // rax
  _WORD *v14; // rsi
  _WORD *v15; // rdi
  unsigned __int64 i; // rcx
  int v17; // esi
  unsigned __int8 v19; // [rsp+30h] [rbp-30h]
  int v20; // [rsp+30h] [rbp-30h]
  int v21; // [rsp+40h] [rbp-20h]
  unsigned __int16 v22[2]; // [rsp+50h] [rbp-10h] BYREF
  int v23; // [rsp+54h] [rbp-Ch] BYREF
  int StringFromDevice; // [rsp+58h] [rbp-8h]
  int v25; // [rsp+A8h] [rbp+48h]
  char v27; // [rsp+B8h] [rbp+58h] BYREF

  v25 = a2;
  v4 = 0;
  v23 = 0;
  v6 = PdoExt(a2);
  v7 = v6;
  if ( (v6[358] & 0x800) == 0 && *((_BYTE *)v6 + 1416) )
  {
    Pool2 = ExAllocatePool2(64LL, 255LL, 1112885333LL);
    v27 = 0;
    v9 = (unsigned __int8 *)Pool2;
    if ( Pool2 )
    {
      v19 = *((_BYTE *)v7 + 1416);
      v22[0] = 255;
      StringFromDevice = UsbhGetStringFromDevice(a1, a2, (__int64)&v23, Pool2, v22, 0x409u, v19);
      v10 = StringFromDevice;
      if ( (StringFromDevice & 0xC0000000) == 0xC0000000 )
      {
        UsbhException(a1, *((_WORD *)v7 + 714), 89, v9, v22[0], StringFromDevice, v23, usbfile_idstring_c, 1599, 0);
      }
      else
      {
        v11 = v22[0];
        if ( UsbhValidateStringDescriptor(3221225472LL, v9, v22[0], &v23) )
        {
          if ( *v9 >> 1 != 1 )
          {
            v13 = 2LL * ((*v9 >> 1) - 1);
            v14 = v9 + 2;
            v15 = v9;
            for ( i = v13 >> 1; i; --i )
              *v15++ = *v14++;
            v17 = StringFromDevice;
            *(_WORD *)&v9[v13] = 0;
            *(_DWORD *)(a3 + 4) = v11;
            *(_QWORD *)(a3 + 8) = v9;
            if ( !(unsigned __int8)UsbhValidateSerialNumberString(a1, v25, a3, (unsigned int)&v23, (__int64)&v27) )
            {
              UsbhException(a1, *((_WORD *)v7 + 714), 37, v9, v11, v17, v23, usbfile_idstring_c, 1664, 0);
              UsbhFreeID(a3);
              if ( v27 )
              {
                v7[705] = 1073807369;
                return (unsigned int)-1073741811;
              }
            }
            return v4;
          }
          v12 = 59;
          v21 = 1685;
          v20 = v23;
        }
        else
        {
          v12 = 38;
          v21 = 1612;
          v20 = v23;
        }
        UsbhException(a1, *((_WORD *)v7 + 714), v12, v9, v11, v10, v20, usbfile_idstring_c, v21, 0);
      }
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v4;
  }
  return 0LL;
}
