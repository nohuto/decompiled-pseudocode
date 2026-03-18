/*
 * XREFs of UsbhGetMSOS_Descriptor @ 0x1400425A4
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhGetStringFromDevice @ 0x14002D2C4 (UsbhGetStringFromDevice.c)
 *     UsbhRegCreateUsbflagsKey @ 0x140052E80 (UsbhRegCreateUsbflagsKey.c)
 */

__int64 __fastcall UsbhGetMSOS_Descriptor(__int64 a1, __int64 a2)
{
  int v3; // esi
  _DWORD *v5; // rdi
  _BYTE *Pool2; // r14
  int v8; // ebx
  int v9; // eax
  int StringFromDevice; // eax
  int v11; // r12d
  const WCHAR *v12; // rdx
  char v13; // al
  char v14; // dl
  unsigned int v15; // ecx
  const WCHAR *v16; // rdx
  _DWORD ValueData[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v18; // [rsp+A0h] [rbp+40h] BYREF
  int v19; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  ValueData[0] = 0;
  v5 = PdoExt(a2);
  if ( HIDWORD(qword_1400705DC) == 2 )
    return 3221225659LL;
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
  {
    HIDWORD(qword_1400705DC) = 2;
    return 3221225659LL;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 18LL, 1112885333LL);
  if ( Pool2 )
  {
    if ( HIDWORD(qword_1400705DC) == 1 )
      v5[358] = v5[358] & 0xFFFFF9FF | 0x200;
    v9 = v5[358];
    if ( (v9 & 0x200) != 0 )
    {
      if ( (v9 & 0x400) != 0 )
      {
        v8 = 0;
      }
      else
      {
        LOWORD(v19) = 18;
        StringFromDevice = UsbhGetStringFromDevice(
                             a1,
                             a2,
                             (__int64)ValueData,
                             (int)Pool2,
                             (unsigned __int16 *)&v19,
                             0,
                             0xEEu);
        v11 = ValueData[0];
        v8 = StringFromDevice;
        if ( ValueData[0] == -1073717248 )
        {
          v12 = (const WCHAR *)*((_QWORD *)v5 + 142);
          ValueData[0] = 1;
          RtlWriteRegistryValue(2u, v12, L"MSOSDescriptorHang", 4u, ValueData, 4u);
        }
        v5[358] &= ~0x200u;
        if ( v8 >= 0 && (_WORD)v19 == 18 && RtlCompareMemory(Pool2 + 2, L"MSFT100", 0xEuLL) == 14 )
        {
          v13 = Pool2[16];
          *((_BYTE *)v5 + 1432) = v13;
          HIBYTE(v18) = v13;
          LOBYTE(v18) = 1;
          v5[358] |= 0x400u;
        }
        else
        {
          v5[358] &= ~0x400u;
          v8 = -1073741637;
          v18 = 0;
          UsbhException(
            a1,
            *((_WORD *)v5 + 714),
            102,
            Pool2,
            (unsigned __int16)v19,
            -1073741637,
            v11,
            usbfile_msos_c,
            193,
            0);
        }
        if ( *((_QWORD *)v5 + 142) )
        {
          RtlWriteRegistryValue(0, *((PCWSTR *)v5 + 143), L"osvc", 3u, &v18, 2u);
          v14 = Pool2[17];
          v15 = v5[358] & 0xFFFF7FFF;
          if ( (v14 & 2) == 0 )
            v15 = v5[358] | 0x8000;
          LOBYTE(v3) = (v14 & 2) == 0;
          v5[358] = v15;
          v16 = (const WCHAR *)*((_QWORD *)v5 + 143);
          v19 = v3;
          RtlWriteRegistryValue(0, v16, L"SkipContainerIdQuery", 3u, &v19, 4u);
        }
      }
    }
    else
    {
      v8 = -1073741637;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
