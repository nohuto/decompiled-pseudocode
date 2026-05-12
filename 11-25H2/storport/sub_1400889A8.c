/*
 * XREFs of sub_1400889A8 @ 0x1400889A8
 * Callers:
 *     sub_1400879CC @ 0x1400879CC (sub_1400879CC.c)
 * Callees:
 *     sub_140088168 @ 0x140088168 (sub_140088168.c)
 *     sub_14008BEA0 @ 0x14008BEA0 (sub_14008BEA0.c)
 */

__int64 __fastcall sub_1400889A8(struct _DEVICE_OBJECT *a1, int *a2)
{
  int v4; // r8d
  _QWORD *DeviceExtension; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v4 = sub_140088168(a1);
  if ( v4 >= 0 )
  {
    DeviceExtension = a1->DeviceExtension;
    if ( !DeviceExtension )
      return 3221225473LL;
    if ( (*(_BYTE *)(DeviceExtension[72] + 152LL) & 5) == 5 )
    {
      v4 = sub_14008BEA0(a1, &v7);
      if ( v4 >= 0 )
        *a2 = (v7 >> 2) & 0x1FF;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v4;
}
