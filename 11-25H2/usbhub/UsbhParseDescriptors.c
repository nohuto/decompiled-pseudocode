/*
 * XREFs of UsbhParseDescriptors @ 0x140041EC0
 * Callers:
 *     UsbhParseConfigurationDescriptorEx @ 0x140041D7C (UsbhParseConfigurationDescriptorEx.c)
 *     FindMidiInterfaceDescriptor @ 0x140045EF4 (FindMidiInterfaceDescriptor.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 */

unsigned __int8 *__fastcall UsbhParseDescriptors(__int64 a1, char *a2, unsigned int a3, unsigned __int8 *a4, int a5)
{
  __int64 v5; // rbx
  unsigned __int8 *v6; // r10
  __int64 v7; // rax

  v5 = 0LL;
  v6 = (unsigned __int8 *)&a2[a3];
  while ( a4 < v6 && (unsigned __int64)(v6 - a4) >= 2 )
  {
    if ( a4[1] == a5 )
      return a4;
    v7 = *a4;
    if ( !(_BYTE)v7 )
    {
      UsbhException(a1, 0, 83, a2, a3, -1, -1, usbfile_usbd_c, 105, 0);
      return (unsigned __int8 *)v5;
    }
    if ( &a4[v7] < a4 )
      return (unsigned __int8 *)v5;
    a4 += v7;
  }
  return (unsigned __int8 *)v5;
}
