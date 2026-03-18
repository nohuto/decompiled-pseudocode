/*
 * XREFs of ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1400DD660
 * Callers:
 *     GetAdjustedPointerLocations @ 0x1400DD520 (GetAdjustedPointerLocations.c)
 * Callees:
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x140215B20 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 */

__int64 __fastcall GetAdjustedHimetric(
        struct tagPOINT a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        struct tagHID_POINTER_DEVICE_INFO *a5)
{
  unsigned int v5; // ebx
  LONG x; // r10d
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // edx
  __int64 v11; // rbp
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  __int64 v15; // rbp
  __int64 v17; // r14
  __int64 v18; // rax
  LONG v19; // r10d
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r14
  __int64 v23; // rax
  int v24; // r11d
  __int64 v25; // rax
  __int64 v26; // r9
  LONG v27; // [rsp+64h] [rbp+Ch]
  LONG v28; // [rsp+6Ch] [rbp+14h]
  LONG y; // [rsp+74h] [rbp+1Ch]

  y = a3.y;
  v28 = a2.y;
  v27 = a1.y;
  v5 = 0;
  x = a2.x;
  if ( a5 )
  {
    v7 = *((_DWORD *)a5 + 46);
    v8 = *((_DWORD *)a5 + 44);
    v9 = -1;
    v10 = *((_DWORD *)a5 + 42);
    v11 = *((int *)a5 + 40);
    a4->x = x;
    if ( a3.x )
    {
      v17 = v7 - v8;
      v18 = v17 * a3.x / (v10 - (int)v11);
      if ( (unsigned __int64)(v18 + 0x80000000LL) > 0xFFFFFFFF )
        return v5;
      v19 = v18 + x;
      a4->x = v19;
      v20 = v11 + (v10 - (int)v11) * (__int64)(v19 - v8) / v17;
      if ( (unsigned __int64)(v20 + 0x80000000LL) > 0xFFFFFFFF )
        return v5;
      if ( (_DWORD)v20 != a1.x + a3.x )
      {
        v21 = -1;
        if ( a3.x > 0 )
          v21 = 1;
        a4->x = v19 + v21;
      }
    }
    v12 = *((_DWORD *)a5 + 47);
    v13 = *((_DWORD *)a5 + 45);
    v14 = *((_DWORD *)a5 + 43);
    v15 = *((int *)a5 + 41);
    a4->y = a2.y;
    if ( a3.y )
    {
      v22 = v12 - v13;
      v23 = v22 * a3.y / (v14 - (int)v15);
      if ( (unsigned __int64)(v23 + 0x80000000LL) > 0xFFFFFFFF )
        return v5;
      v24 = v23 + a2.y;
      a4->y = v23 + a2.y;
      v25 = v15 + (v14 - (int)v15) * (__int64)((int)v23 + a2.y - v13) / v22;
      if ( (unsigned __int64)(v25 + 0x80000000LL) > 0xFFFFFFFF )
        return v5;
      if ( (_DWORD)v25 != a3.y + a1.y )
      {
        if ( a3.y > 0 )
          v9 = 1;
        a4->y = v24 + v9;
      }
    }
    return 1;
  }
  if ( GetAdjustedHimetricLong(a1.x, a2.x, a3.x, (int *)a4) )
  {
    LOBYTE(v5) = GetAdjustedHimetricLong(v27, v28, y, (int *)(v26 + 4)) != 0;
    return v5;
  }
  return 0LL;
}
