/*
 * XREFs of UsbhGetHubConfigurationDescriptor @ 0x14003C858
 * Callers:
 *     UsbhConfigureUsbHub @ 0x14003AC70 (UsbhConfigureUsbHub.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhGetDescriptor @ 0x14003BF94 (UsbhGetDescriptor.c)
 */

__int64 __fastcall UsbhGetHubConfigurationDescriptor(__int64 a1, unsigned __int16 **a2)
{
  int v2; // ebp
  unsigned __int16 v5; // bx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v7; // rdi
  __int64 Descriptor; // rbx
  __int64 v9; // r9
  unsigned int v10; // r10d
  __int64 v11; // r9
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+40h] [rbp-28h]
  unsigned __int16 v15; // [rsp+78h] [rbp+10h] BYREF

  v2 = -1;
  FdoExt(a1);
  v5 = 255;
  *a2 = 0LL;
  v15 = 255;
  while ( 1 )
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, v5, 1112885333LL);
    v7 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    Descriptor = (int)UsbhGetDescriptor(a1, &v15, Pool2, 2, v13, 0);
    Log(a1, 8, 1734894385, v15, Descriptor);
    if ( (Descriptor & 0xC0000000) == 0xC0000000 )
      goto LABEL_12;
    if ( v10 < 9 )
    {
      v14 = 3945;
      goto LABEL_11;
    }
    Log(a1, 8, 1734894386, v9, v7[1]);
    if ( v7[1] <= (unsigned __int16)v10 )
    {
      Log(a1, 8, 1734894387, (__int64)v7, Descriptor);
      *a2 = v7;
      return (unsigned int)Descriptor;
    }
    if ( !v2 )
    {
      v14 = 3963;
LABEL_11:
      LODWORD(Descriptor) = -1073741823;
      UsbhException(a1, 0, 13, v7, v10, -1073741823, -1, usbfile_hub_c, v14, 0);
LABEL_12:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)Descriptor;
    }
    ++v2;
    Log(a1, 8, 1734894418, v11, Descriptor);
    v5 = v7[1];
    v15 = v5;
    ExFreePoolWithTag(v7, 0);
  }
}
