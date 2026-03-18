/*
 * XREFs of UsbhBuildUnknownIds @ 0x14005A430
 * Callers:
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhFreeID @ 0x1400081A4 (UsbhFreeID.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhMakeId @ 0x14000E1C0 (UsbhMakeId.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

void __fastcall UsbhBuildUnknownIds(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _DWORD *v3; // rbx
  wchar_t *v4; // rdi
  unsigned __int16 v5; // si
  char *Id; // rbp
  char *v7; // rdi
  char *v8; // rcx
  char *v9; // rax
  char *v10; // rsi
  _DWORD v11[4]; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  Log(a1, 4096, 1970161988, a2, 0LL);
  v3 = PdoExt(v2);
  switch ( v3[705] )
  {
    case 0x40010000:
      v4 = L"USB\\DEVICE_DESCRIPTOR_FAILURE";
      v5 = 2;
      break;
    case 0x40010001:
      v4 = L"USB\\SET_ADDRESS_FAILURE";
      v5 = 4;
      break;
    case 0x40010002:
      v4 = L"USB\\RESET_FAILURE";
      v5 = 1;
      break;
    case 0x40010004:
      v4 = L"USB\\CONFIGURATION_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = 6;
      break;
    case 0x40010005:
      v4 = L"USB\\DEVICE_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = 5;
      break;
    case 0x40010007:
      v4 = L"USB\\CONFIG_DESCRIPTOR_FAILURE";
      v5 = 3;
      break;
    default:
      return;
  }
  v12 = 0;
  v11[0] = 0;
  v13 = 0;
  Id = UsbhMakeId(0, v4, 0LL, v11, 2u, 0, 0, 0LL);
  if ( Id )
  {
    v7 = UsbhMakeId(0, v4, 0LL, &v13, 2u, 0, 0, 0LL);
    if ( v7 )
    {
      v9 = UsbhMakeId(0, L"USB\\VID_nnnn", 0LL, &v12, 0, 4, 0, 0LL);
      if ( v9 )
      {
        v10 = UsbhMakeId(0, L"&PID_nnnn", v9, &v12, 2u, 4, v5, 0LL);
        if ( v10 )
        {
          UsbhFreeID((__int64)(v3 + 528));
          v3[529] = v13;
          *((_QWORD *)v3 + 265) = v7;
          UsbhFreeID((__int64)(v3 + 524));
          v3[525] = v11[0];
          *((_QWORD *)v3 + 263) = Id;
          UsbhFreeID((__int64)(v3 + 520));
          v3[521] = v12;
          *((_QWORD *)v3 + 261) = v10;
          return;
        }
      }
      ExFreePoolWithTag(Id, 0);
      v8 = v7;
    }
    else
    {
      v8 = Id;
    }
    ExFreePoolWithTag(v8, 0);
  }
}
