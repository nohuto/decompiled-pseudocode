/*
 * XREFs of UsbhReadPdoRegistryKeys @ 0x140052CE0
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhGetPdoRegistryParameter @ 0x140035B00 (UsbhGetPdoRegistryParameter.c)
 *     UsbhGetD3Policy @ 0x1400523D4 (UsbhGetD3Policy.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhReadPdoRegistryKeys(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  wchar_t **v2; // rbx
  unsigned int i; // r14d
  void *Pool2; // rax
  void *v6; // rsi
  ULONG v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF
  int v10; // [rsp+80h] [rbp+40h] BYREF
  int v11; // [rsp+88h] [rbp+48h] BYREF

  v9 = a1;
  v2 = &PdoKeyValues;
  v11 = 0;
  if ( PdoKeyValues )
  {
    do
    {
      v10 = *((_DWORD *)v2 + 2);
      LODWORD(v9) = 0;
      if ( v10 == 1 )
      {
        for ( i = 8; ; i = v9 )
        {
          Pool2 = (void *)ExAllocatePool2(64LL, i, 1112885333LL);
          v6 = Pool2;
          if ( !Pool2 )
            break;
          LOBYTE(v8) = *((_BYTE *)v2 + 12);
          if ( (UsbhGetPdoRegistryParameter(a2, *v2, Pool2, i, &v10, &v9, v8) & 0xC0000000) == 0xC0000000
            || v10 != 1
            || !(_DWORD)v9 )
          {
            goto LABEL_17;
          }
          if ( (unsigned int)v9 <= i )
          {
            ((void (__fastcall *)(struct _DEVICE_OBJECT *, wchar_t *, void *, _QWORD))v2[3])(
              a2,
              *v2,
              v6,
              (unsigned int)v9);
LABEL_17:
            ExFreePoolWithTag(v6, 0);
            break;
          }
          ExFreePoolWithTag(v6, 0);
        }
      }
      else if ( v10 == 4 )
      {
        LOBYTE(v8) = *((_BYTE *)v2 + 12);
        if ( (int)UsbhGetPdoRegistryParameter(a2, *v2, &v11, 4u, &v10, &v9, v8) >= 0
          && (_DWORD)v9 == 4
          && v10 == 4
          && v11 )
        {
          ((void (__fastcall *)(struct _DEVICE_OBJECT *, wchar_t *, int *, __int64))v2[3])(a2, *v2, &v11, 4LL);
        }
      }
      v2 += 4;
    }
    while ( *v2 );
  }
  UsbhGetD3Policy(a2);
  return 0LL;
}
