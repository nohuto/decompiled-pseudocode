/*
 * XREFs of GetAdjustedPointerLocations @ 0x1400DD520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1400DD660 (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall GetAdjustedPointerLocations(
        struct tagPOINT a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        struct tagPOINT a5,
        _DWORD *a6,
        struct tagPOINT *a7,
        _DWORD *a8,
        struct tagPOINT *a9,
        struct tagHID_POINTER_DEVICE_INFO *a10)
{
  LONG x; // edi
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  LONG v18; // [rsp+64h] [rbp+Ch]
  LONG y; // [rsp+74h] [rbp+1Ch]

  y = a3.y;
  v18 = a1.y;
  x = a1.x;
  if ( !(unsigned int)GetAdjustedHimetric(a1, a2, a5, a7, a10) )
    return 0LL;
  v13 = a5.x + (__int64)x;
  if ( (unsigned __int64)(v13 + 0x80000000LL) > 0xFFFFFFFF )
  {
    *a6 = -1;
    return 0LL;
  }
  *a6 = v13;
  v15 = a5.y + (__int64)v18;
  if ( (unsigned __int64)(v15 + 0x80000000LL) > 0xFFFFFFFF )
  {
    a6[1] = -1;
    return 0LL;
  }
  a6[1] = v15;
  if ( !(unsigned int)GetAdjustedHimetric(a3, a4, a5, a9, a10) )
    return 0LL;
  v16 = a5.x + (__int64)a3.x;
  if ( (unsigned __int64)(v16 + 0x80000000LL) > 0xFFFFFFFF )
  {
    *a8 = -1;
    return 0LL;
  }
  *a8 = v16;
  v17 = a5.y + (__int64)y;
  if ( (unsigned __int64)(v17 + 0x80000000LL) > 0xFFFFFFFF )
  {
    a8[1] = -1;
    return 0LL;
  }
  a8[1] = v17;
  return 1LL;
}
