/*
 * XREFs of UsbhValidateMsOs20FunctionSubset @ 0x14005BC80
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x140043520 (UsbhGetNextMsOs20Descriptor.c)
 *     UsbhValidateMsOs20CommonDescriptor @ 0x1400439F0 (UsbhValidateMsOs20CommonDescriptor.c)
 *     UsbhValidateMsOs20DescriptorSetHeader @ 0x14005BC20 (UsbhValidateMsOs20DescriptorSetHeader.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 *     memset @ 0x140061900 (memset.c)
 */

char __fastcall UsbhValidateMsOs20FunctionSubset(__int64 a1, _DWORD *a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // r8d
  char *v11; // rbp
  char v12; // si
  __int64 v13; // r8
  unsigned __int16 *v14; // r10
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 (__fastcall *v17)(); // r11
  _BYTE v19[64]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 *v20; // [rsp+A0h] [rbp+18h] BYREF

  memset(v19, 0, sizeof(v19));
  v8 = *a3;
  if ( (_DWORD)v8 != 8 )
  {
    v9 = *a3;
    v10 = 1447449392;
LABEL_20:
    Log(a1, 256, v10, v9, 0LL);
    return 0;
  }
  v9 = a3[3];
  if ( (unsigned int)v9 < 0xC )
  {
    v10 = 1447449393;
    goto LABEL_20;
  }
  v11 = (char *)a3 + v9;
  if ( (unsigned __int64)a3 + v9 > a4 )
  {
    v10 = 1447449394;
    goto LABEL_20;
  }
  v20 = (unsigned __int16 *)((char *)a3 + v8);
  v12 = 1;
  if ( !UsbhValidateMsOs20CommonDescriptor((unsigned __int64)a3 + v9, (unsigned __int16 *)((char *)a3 + v8)) )
  {
    v10 = 1447449397;
LABEL_19:
    v9 = 0LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v15 = v14[1];
    if ( (unsigned int)v15 < 9 )
    {
      v16 = 2 * v15;
      v17 = MsOs20DispatchTable[v16];
      if ( !BYTE1(MsOs20DispatchTable[v16 + 1]) )
      {
        Log(a1, 256, 1447449395, v14[1], 0LL);
        v12 = 0;
      }
      if ( !((unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, char *))v17)(a1, v19, v14, v11) )
        return 0;
    }
    if ( !UsbhGetNextMsOs20Descriptor(v11, &v20, v13) )
    {
      v10 = 1447449396;
      goto LABEL_19;
    }
    v14 = v20;
    if ( !v20 )
    {
      if ( v12 == 1 )
        *a2 |= 0x10u;
      return v12;
    }
  }
}
