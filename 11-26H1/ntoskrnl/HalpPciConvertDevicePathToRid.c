/*
 * XREFs of HalpPciConvertDevicePathToRid @ 0x14058EB48
 * Callers:
 *     HalpIommuDetermineReservedPciRid @ 0x14058FDF4 (HalpIommuDetermineReservedPciRid.c)
 * Callees:
 *     HalpPciReadSecondaryBusNumber @ 0x14058EBFC (HalpPciReadSecondaryBusNumber.c)
 */

__int64 __fastcall HalpPciConvertDevicePathToRid(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rsi
  unsigned int v4; // edi
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  __int64 v8; // rax
  unsigned __int8 v9; // [rsp+40h] [rbp+8h] BYREF

  a1[2] = 0;
  if ( !a1[3] )
    return 3221225485LL;
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = 1;
  v5 = *((_BYTE *)a1 + 3);
  v9 = v5;
  v6 = *v3;
  v7 = v3[1];
  while ( v4 < a1[3] )
  {
    result = HalpPciReadSecondaryBusNumber(*a1, v5, v6, v7, (__int64)&v9);
    if ( (int)result < 0 )
      return result;
    v5 = v9;
    v8 = v4++;
    v6 = v3[2 * v8];
    v7 = v3[2 * v8 + 1];
  }
  result = 0LL;
  a1[2] = v7 | (unsigned __int16)(8 * (v6 | (unsigned __int16)(32 * v5)));
  return result;
}
