/*
 * XREFs of sub_140088168 @ 0x140088168
 * Callers:
 *     sub_140087A3C @ 0x140087A3C (sub_140087A3C.c)
 *     sub_1400889A8 @ 0x1400889A8 (sub_1400889A8.c)
 * Callees:
 *     sub_14008C28C @ 0x14008C28C (sub_14008C28C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140088168(struct _DEVICE_OBJECT *a1)
{
  _DWORD *DeviceExtension; // rbx
  int v3; // edx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-20h]

  DeviceExtension = a1->DeviceExtension;
  v6 = 0LL;
  v5 = 0LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  if ( (DeviceExtension[36] & 0x10000) != 0 )
    return 0LL;
  LODWORD(v4) = 24;
  v3 = sub_14008C28C(a1, (__int64)&v4);
  if ( v3 >= 0 )
  {
    if ( (unsigned int)v4 >= 0x14 && (_DWORD)v5 == 1114596673 && DWORD2(v5) && WORD6(v5) == 2 )
    {
      *(_DWORD *)(*((_QWORD *)DeviceExtension + 72) + 152LL) = v6 & 0xF;
      *((_QWORD *)DeviceExtension + 18) |= 0x10000uLL;
    }
    else
    {
      return (unsigned int)-1072431089;
    }
  }
  return (unsigned int)v3;
}
