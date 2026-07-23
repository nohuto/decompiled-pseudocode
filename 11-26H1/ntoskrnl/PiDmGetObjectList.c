/*
 * XREFs of PiDmGetObjectList @ 0x140AAEBFC
 * Callers:
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140963508 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140AAE7D8 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x140AAEBA4 (PiDmGetCmObjectListFromCache.c)
 * Callees:
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 */

__int64 __fastcall PiDmGetObjectList(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v7; // edx
  int v8; // eax
  unsigned int v9; // eax
  _QWORD v11[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]

  v11[0] = a2;
  v11[1] = a3;
  v11[2] = a4;
  *a6 = 0;
  v12 = a5;
  if ( a5 )
    *a4 = 0;
  v7 = PiDmEnumObjectsWithCallback(a1, (__int64)PiDmGetObjectListCallback, (__int64)v11);
  if ( v7 >= 0 )
  {
    v8 = HIDWORD(v12);
    *a6 = HIDWORD(v12);
    if ( v8 )
    {
      v9 = v8 + 1;
      *a6 = v9;
      if ( a4 && a5 >= v9 )
        a4[v9 - 1] = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v7;
}
