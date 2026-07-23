/*
 * XREFs of HalpPciReadSecondaryBusNumber @ 0x14058EBFC
 * Callers:
 *     HalpPciConvertDevicePathToRid @ 0x14058EB48 (HalpPciConvertDevicePathToRid.c)
 * Callees:
 *     HalpGetPCIData @ 0x14042C720 (HalpGetPCIData.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpPciReadSecondaryBusNumber(unsigned __int16 a1, char a2, char a3, char a4, unsigned __int8 *a5)
{
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  char v13[25]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int8 v14; // [rsp+49h] [rbp-5Fh]
  unsigned __int8 v15; // [rsp+4Ah] [rbp-5Eh]

  memset_0(v13, 0, 0x40uLL);
  v9 = 32 * (a4 & 7);
  v10 = 0;
  LOBYTE(v11) = a2;
  if ( (unsigned int)HalpGetPCIData(a1, v11, a3 & 0x1F | (unsigned int)v9, v13, 0, 0x40u) == 64 )
  {
    if ( (v13[14] & 0x7F) == 1 && v14 > (unsigned int)v13[24] && v15 >= v14 )
      *a5 = v14;
    else
      return (unsigned int)-1073741810;
  }
  else
  {
    return (unsigned int)-1073740669;
  }
  return v10;
}
