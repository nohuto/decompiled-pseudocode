/*
 * XREFs of UsbhValidateMsOs20ConfigurationSubset @ 0x14005BED0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x140043050 (UsbhGetNextMsOs20Descriptor.c)
 *     UsbhValidateMsOs20CommonDescriptor @ 0x140043514 (UsbhValidateMsOs20CommonDescriptor.c)
 *     UsbhValidateMsOs20DescriptorSetHeader @ 0x14005C200 (UsbhValidateMsOs20DescriptorSetHeader.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

char __fastcall UsbhValidateMsOs20ConfigurationSubset(
        __int64 a1,
        _DWORD *a2,
        unsigned __int16 *a3,
        unsigned __int64 a4)
{
  __int64 v8; // r9
  int v9; // r8d
  char *v10; // rbp
  char v11; // si
  __int64 v12; // r8
  unsigned __int16 *v13; // r10
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 (__fastcall *v16)(__int64, _BYTE *, unsigned __int16 *, char *); // r11
  _BYTE v18[64]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 *v19; // [rsp+A0h] [rbp+18h] BYREF

  memset(v18, 0, sizeof(v18));
  if ( *a3 != 8 )
  {
    v8 = *a3;
    v9 = 1447252784;
LABEL_20:
    Log(a1, 256, v9, v8, 0LL);
    return 0;
  }
  v8 = a3[3];
  if ( (unsigned int)v8 < 0xC )
  {
    v9 = 1447252785;
    goto LABEL_20;
  }
  v10 = (char *)a3 + v8;
  if ( (unsigned __int64)a3 + v8 > a4 )
  {
    v9 = 1447252786;
    goto LABEL_20;
  }
  v19 = a3 + 4;
  v11 = 1;
  if ( !UsbhValidateMsOs20CommonDescriptor((unsigned __int64)a3 + v8, a3 + 4) )
  {
    v9 = 1447252789;
LABEL_19:
    v8 = 0LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v14 = v13[1];
    if ( (unsigned int)v14 < 9 )
    {
      v15 = 2 * v14;
      v16 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, char *))*(&MsOs20DispatchTable + v15);
      if ( !*((_BYTE *)&MsOs20DispatchTable + 8 * v15 + 8) )
      {
        Log(a1, 256, 1447252787, v13[1], 0LL);
        v11 = 0;
      }
      if ( !v16(a1, v18, v13, v10) )
        return 0;
    }
    if ( !UsbhGetNextMsOs20Descriptor(v10, &v19, v12) )
    {
      v9 = 1447252788;
      goto LABEL_19;
    }
    v13 = v19;
    if ( !v19 )
    {
      if ( v11 == 1 )
        *a2 |= 8u;
      return v11;
    }
  }
}
