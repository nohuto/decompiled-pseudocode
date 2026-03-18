/*
 * XREFs of UsbhGetProductIdString @ 0x140036108
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1400352F0 (UsbhPdoPnp_QueryDeviceText.c)
 * Callees:
 *     UsbhFreeID @ 0x1400081A4 (UsbhFreeID.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhGetStringFromDevice @ 0x14002D2C4 (UsbhGetStringFromDevice.c)
 *     UsbhValidateStringDescriptor @ 0x140037C88 (UsbhValidateStringDescriptor.c)
 *     UsbhLanguageSupported @ 0x14003A6D8 (UsbhLanguageSupported.c)
 */

__int64 __fastcall UsbhGetProductIdString(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // r13
  __int64 Pool2; // rax
  unsigned __int8 *v12; // rbx
  int StringFromDevice; // edi
  __int64 v14; // rcx
  int v15; // r15d
  unsigned __int64 v16; // rax
  _WORD *v17; // rsi
  _WORD *v18; // rdi
  unsigned __int64 i; // rcx
  unsigned __int8 v20; // [rsp+30h] [rbp-58h]
  int v21[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v22; // [rsp+A8h] [rbp+20h] BYREF

  v21[0] = 0;
  v9 = PdoExt(a2);
  if ( *(_QWORD *)(a4 + 8) && *(_WORD *)a4 == a3 )
    return 0LL;
  if ( !(unsigned __int8)UsbhLanguageSupported(v8, a2, a3) )
    return 3221225659LL;
  UsbhFreeID(a4);
  Pool2 = ExAllocatePool2(64LL, 255LL, 1112885333LL);
  v12 = (unsigned __int8 *)Pool2;
  if ( Pool2 )
  {
    v20 = *((_BYTE *)v9 + 1415);
    v22 = 255;
    StringFromDevice = UsbhGetStringFromDevice(a1, a2, (__int64)v21, Pool2, &v22, a3, v20);
    v14 = StringFromDevice & 0xC0000000;
    if ( (_DWORD)v14 == -1073741824 || (v15 = v22, !(unsigned __int8)UsbhValidateStringDescriptor(v14, v12, v22, v21)) )
    {
      UsbhException(a1, *((_WORD *)v9 + 714), 38, v12, v22, StringFromDevice, v21[0], usbfile_idstring_c, 1822, 0);
    }
    else if ( *v12 >> 1 != 1 )
    {
      v16 = 2LL * ((*v12 >> 1) - 1);
      v17 = v12 + 2;
      v18 = v12;
      for ( i = v16 >> 1; i; --i )
        *v18++ = *v17++;
      *(_WORD *)&v12[v16] = 0;
      *(_DWORD *)(a4 + 4) = v15;
      *(_QWORD *)(a4 + 8) = v12;
      *(_WORD *)a4 = a3;
      return 0LL;
    }
    ExFreePoolWithTag(v12, 0);
    return 3221225659LL;
  }
  return 3221225626LL;
}
