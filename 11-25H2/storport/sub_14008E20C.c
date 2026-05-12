/*
 * XREFs of sub_14008E20C @ 0x14008E20C
 * Callers:
 *     sub_1400614E8 @ 0x1400614E8 (sub_1400614E8.c)
 *     sub_1400A0C74 @ 0x1400A0C74 (sub_1400A0C74.c)
 * Callees:
 *     sub_14008BEA0 @ 0x14008BEA0 (sub_14008BEA0.c)
 *     sub_14008BF58 @ 0x14008BF58 (sub_14008BF58.c)
 *     sub_14008C020 @ 0x14008C020 (sub_14008C020.c)
 *     sub_14008C0D8 @ 0x14008C0D8 (sub_14008C0D8.c)
 */

__int64 __fastcall sub_14008E20C(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _BYTE *DeviceExtension; // rsi
  __int64 result; // rax
  int v6; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  DeviceExtension = a1->DeviceExtension;
  if ( *(_DWORD *)DeviceExtension != 1094997074 )
    return 3221225659LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  result = sub_14008C020(a1);
  if ( (int)result >= 0 )
  {
    if ( (DeviceExtension[5716] & 9) != 9 )
      return 3221225659LL;
    v6 = 4 * (*(_DWORD *)(a2 + 8) & 0x1FF);
    if ( (*((_DWORD *)DeviceExtension + 1429) & 2) != 0
      && (int)sub_14008BF58(a1) >= 0
      && (v6 & *((_DWORD *)DeviceExtension + 1430)) == 0 )
    {
      return 3221225659LL;
    }
    if ( (*((_DWORD *)DeviceExtension + 1429) & 4) != 0 )
    {
      v7 = 0;
      result = sub_14008BEA0(a1, &v7);
      if ( (int)result >= 0 )
      {
        if ( *(_BYTE *)(a2 + 12) )
        {
          if ( (v6 & v7) != 0 )
            return result;
        }
        else if ( (v6 & v7) == 0 )
        {
          return result;
        }
      }
    }
    return sub_14008C0D8(a1);
  }
  return result;
}
