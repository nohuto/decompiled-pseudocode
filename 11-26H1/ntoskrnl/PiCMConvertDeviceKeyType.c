/*
 * XREFs of PiCMConvertDeviceKeyType @ 0x140AA3810
 * Callers:
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiCMConvertDeviceKeyType(__int16 a1, int *a2)
{
  unsigned int v2; // r9d
  int v4; // eax
  int v5; // ecx
  int v6; // r10d

  v2 = 0;
  *a2 = 0;
  if ( !(_BYTE)a1 )
    return (unsigned int)-1073741811;
  switch ( (unsigned __int8)a1 )
  {
    case 0x11u:
      *a2 = 17;
      v4 = 273;
      v5 = 529;
      break;
    case 0x12u:
      *a2 = 18;
      v4 = 274;
      v5 = 530;
      break;
    case 0x13u:
      *a2 = 19;
      v4 = 275;
      v5 = 531;
      break;
    case 0x14u:
      *a2 = 20;
      v4 = 276;
      v5 = 532;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  v6 = a1 & 0xFF00;
  if ( v6 )
  {
    if ( v6 == 256 )
    {
      *a2 = v4;
      return v2;
    }
    if ( v6 == 512 )
    {
      *a2 = v5;
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
