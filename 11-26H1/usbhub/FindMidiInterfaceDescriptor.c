/*
 * XREFs of FindMidiInterfaceDescriptor @ 0x140045A34
 * Callers:
 *     UsbhGetDeviceInformation @ 0x14003947C (UsbhGetDeviceInformation.c)
 * Callees:
 *     UsbhParseConfigurationDescriptorEx @ 0x1400418B8 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhParseDescriptors @ 0x1400419FC (UsbhParseDescriptors.c)
 */

unsigned __int8 *__fastcall FindMidiInterfaceDescriptor(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  unsigned __int8 *v6; // rdi
  unsigned __int8 *v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned __int8 *v9; // rax
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+20h] [rbp-38h]

  v5 = 0LL;
  v6 = (unsigned __int8 *)UsbhParseConfigurationDescriptorEx(a1, a2, a3, -1, v11, 1, 3, -1);
  if ( v6 )
  {
    do
    {
      v7 = &v6[*v6];
      if ( v7 < v6 )
        break;
      v8 = UsbhParseConfigurationDescriptorEx(a1, a2, (int)v7, -1, v12, 1, 3, -1);
      v9 = UsbhParseDescriptors(a1, (char *)a2, *(unsigned __int16 *)(a2 + 2), v7, 36);
      if ( !v9 || v8 && (unsigned __int64)v9 > v8 )
        break;
      if ( *v9 < 7u || v9[2] != 1 )
        break;
      if ( v9[4] == 2 )
        return v6;
      v6 = (unsigned __int8 *)v8;
    }
    while ( v8 );
  }
  return (unsigned __int8 *)v5;
}
