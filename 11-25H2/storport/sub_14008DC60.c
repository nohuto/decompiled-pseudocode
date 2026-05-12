/*
 * XREFs of sub_14008DC60 @ 0x14008DC60
 * Callers:
 *     sub_14008DBB4 @ 0x14008DBB4 (sub_14008DBB4.c)
 * Callees:
 *     sub_14008BEA0 @ 0x14008BEA0 (sub_14008BEA0.c)
 *     sub_14008C020 @ 0x14008C020 (sub_14008C020.c)
 */

__int64 __fastcall sub_14008DC60(struct _DEVICE_OBJECT *a1, int *a2)
{
  _BYTE *DeviceExtension; // rbx
  int v6; // ecx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  DeviceExtension = a1->DeviceExtension;
  v7 = 0;
  if ( *(_DWORD *)DeviceExtension != 1094997074 )
    return 3221225659LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  v6 = sub_14008C020(a1);
  if ( v6 >= 0 )
  {
    if ( (DeviceExtension[5716] & 5) == 5 )
    {
      v6 = sub_14008BEA0(a1, &v7);
      if ( v6 >= 0 )
        *a2 = (v7 >> 2) & 0x1FF;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v6;
}
