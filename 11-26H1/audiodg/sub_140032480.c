/*
 * XREFs of sub_140032480 @ 0x140032480
 * Callers:
 *     sub_140032444 @ 0x140032444 (sub_140032444.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000A6C4 @ 0x14000A6C4 (sub_14000A6C4.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C5E0 @ 0x14000C5E0 (sub_14000C5E0.c)
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000D9B8 @ 0x14000D9B8 (sub_14000D9B8.c)
 *     sub_1400326E0 @ 0x1400326E0 (sub_1400326E0.c)
 *     sub_14004E2C8 @ 0x14004E2C8 (sub_14004E2C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140032480(__int64 a1)
{
  int v2; // r14d
  signed __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // esi
  __int64 **v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v11; // eax
  unsigned int v12; // esi
  int *v14; // rbx
  __int128 v15; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-A8h]
  __int64 v17; // [rsp+48h] [rbp-A0h]
  __int64 v18; // [rsp+50h] [rbp-98h]
  int v19; // [rsp+58h] [rbp-90h]
  __int128 v20; // [rsp+60h] [rbp-88h] BYREF
  __int64 v21; // [rsp+70h] [rbp-78h]
  __int64 v22; // [rsp+78h] [rbp-70h]
  __int64 v23; // [rsp+80h] [rbp-68h]
  int v24; // [rsp+88h] [rbp-60h]
  __int128 v25; // [rsp+90h] [rbp-58h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-48h]
  __int64 v27; // [rsp+A8h] [rbp-40h]
  __int64 v28; // [rsp+B0h] [rbp-38h]
  int v29; // [rsp+B8h] [rbp-30h]
  ATL::CAtlException *v30; // [rsp+C0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v2 = 0;
  while ( 1 )
  {
    v3 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)(a1 + 288),
           *(_QWORD *)(a1 + 320) ^ (a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL)),
           *(_QWORD *)(a1 + 320) ^ (a1 + 144LL * *(unsigned __int16 *)(a1 + 328)));
    if ( v3 )
      break;
    v11 = sub_1400326E0(a1);
    v12 = v11;
    if ( v11 < 0 )
    {
      sub_14000C2A8((int)retaddr, 445, (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", v11);
      return v12;
    }
    ++v2;
    if ( v2 == 100 * (v2 / 100) )
      sub_14004E2C8(
        retaddr,
        449LL,
        "avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        2289827891LL,
        "Non-fatal. Will continue waiting for RT thread...");
  }
  *(_BYTE *)(a1 + 376) = 1;
  v4 = *(unsigned __int16 *)(a1 + 328);
  if ( v3 == (*(_QWORD *)(a1 + 320) ^ (a1 + 144 * v4)) )
  {
    LOWORD(v4) = v4 ^ 1;
    *(_WORD *)(a1 + 328) = v4;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 10;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 10;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 10;
    v5 = 0;
    v6 = (__int64 **)(144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL) + a1);
    try
    {
      sub_14000C5E0(v4, v6, (__int64)&v15);
      sub_14000A6C4(v7, (__int64)(v6 + 6), (__int64)&v20);
      sub_14000A6C4(v8, (__int64)(v6 + 12), (__int64)&v25);
    }
    catch ( ATL::CAtlException *v30 )
    {
      v14 = (int *)v30;
      if ( *(_DWORD *)v30 == -1073741571 )
        o__resetstkoflw();
      v5 = *v14;
    }
    if ( v5 < 0 )
      sub_140007934((int)retaddr, 476, (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", v5);
    sub_14000D9B8((__int64)&v25);
    sub_14000D9B8((__int64)&v20);
    sub_14000D938((__int64)&v15, v9);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 466, (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", -2147483636);
    return 2147483660LL;
  }
}
