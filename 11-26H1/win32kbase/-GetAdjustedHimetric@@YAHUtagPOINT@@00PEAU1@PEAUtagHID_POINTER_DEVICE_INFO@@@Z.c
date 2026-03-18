/*
 * XREFs of ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140121660
 * Callers:
 *     GetAdjustedPointerLocations @ 0x140121500 (GetAdjustedPointerLocations.c)
 * Callees:
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x14021B008 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
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
  int v8; // ebp
  int v9; // edi
  int v10; // edx
  __int64 v11; // r14
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  __int64 v15; // rbp
  __int64 v17; // r12
  __int64 v18; // rax
  int v19; // esi
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  LONG v27; // [rsp+64h] [rbp+Ch]
  int v28; // [rsp+6Ch] [rbp+14h]
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
      v19 = v18;
      if ( v18 < (__int64)0xFFFFFFFF80000000uLL )
        return v5;
      if ( v18 > 0x7FFFFFFF )
        return v5;
      a4->x = v18 + x;
      v20 = (v10 - (int)v11) * (__int64)(x + (int)v18 - v8) / v17 + v11;
      if ( v20 < (__int64)0xFFFFFFFF80000000uLL || v20 > 0x7FFFFFFF )
        return v5;
      if ( (_DWORD)v20 != a1.x + a3.x )
      {
        v21 = -1;
        if ( a3.x > 0 )
          v21 = 1;
        a4->x = x + v19 + v21;
      }
    }
    v12 = *((_DWORD *)a5 + 47);
    v13 = *((_DWORD *)a5 + 45);
    v14 = *((_DWORD *)a5 + 43);
    v15 = *((int *)a5 + 41);
    a4->y = v28;
    if ( a3.y )
    {
      v22 = v12 - v13;
      v23 = v14 - (int)v15;
      v24 = v22 * a3.y / v23;
      if ( v24 < (__int64)0xFFFFFFFF80000000uLL )
        return v5;
      if ( v24 > 0x7FFFFFFF )
        return v5;
      a4->y = v24 + v28;
      v25 = v23 * (v28 + (int)v24 - v13) / v22 + v15;
      if ( v25 < (__int64)0xFFFFFFFF80000000uLL || v25 > 0x7FFFFFFF )
        return v5;
      if ( (_DWORD)v25 != a3.y + a1.y )
      {
        if ( a3.y > 0 )
          v9 = 1;
        a4->y = v28 + v9 + v22 * a3.y / v23;
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
