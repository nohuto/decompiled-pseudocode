/*
 * XREFs of UsbhInternalValidateBillboardCapabilityDescriptor @ 0x14005B330
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x14005B5FC (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 */

char __fastcall UsbhInternalValidateBillboardCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // r10
  char v6; // si
  int v7; // r11d
  int v8; // r8d
  char v10; // r10

  v2 = *a2;
  v3 = 0LL;
  v6 = 1;
  v7 = 256;
  if ( *a2 == 40 || v2 == 44 )
  {
    Log(a1, 256, 1111704631, *a2, 0LL);
  }
  else
  {
    if ( v2 < 0x30u )
    {
      v8 = 1111704625;
LABEL_5:
      Log(a1, 256, v8, *a2, 0LL);
      return 0;
    }
    if ( *a2 != 4LL * a2[4] + 44 )
    {
      v8 = 1111704626;
      goto LABEL_5;
    }
  }
  if ( a2[4] == (_BYTE)v3 )
  {
    Log(a1, v7, 1111704627, 0LL, v3);
    v6 = v3;
  }
  if ( a2[4] > 0x80u )
  {
    Log(a1, v7, 1111704628, a2[4], v3);
    v6 = v3;
  }
  if ( a2[5] > a2[4] )
  {
    Log(a1, v7, 1111704630, a2[5], v3);
    return v10;
  }
  return v6;
}
