/*
 * XREFs of sub_140085590 @ 0x140085590
 * Callers:
 *     sub_1400833D0 @ 0x1400833D0 (sub_1400833D0.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14004E2C8 @ 0x14004E2C8 (sub_14004E2C8.c)
 *     sub_1400561A0 @ 0x1400561A0 (sub_1400561A0.c)
 *     sub_140080C8C @ 0x140080C8C (sub_140080C8C.c)
 *     sub_14008336C @ 0x14008336C (sub_14008336C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140085590(__int64 a1)
{
  int v2; // r14d
  signed __int64 i; // rax
  int v4; // eax
  unsigned int v5; // esi
  int v8; // esi
  int *v9; // rbx
  ATL::CAtlException *v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11[2]; // [rsp+40h] [rbp-58h] BYREF
  int v12; // [rsp+50h] [rbp-48h]
  __int64 v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+70h] [rbp-28h]
  __int64 v17; // [rsp+78h] [rbp-20h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0;
  for ( i = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 128),
              *(_QWORD *)(a1 + 160) ^ (a1 + ((*(unsigned __int16 *)(a1 + 168) ^ 1LL) << 6)),
              *(_QWORD *)(a1 + 160) ^ (a1 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 168) << 6)));
        !i;
        i = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 128),
              *(_QWORD *)(a1 + 160) ^ (a1 + ((*(unsigned __int16 *)(a1 + 168) ^ 1LL) << 6)),
              *(_QWORD *)(a1 + 160) ^ (a1 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 168) << 6))) )
  {
    v4 = sub_14008336C(a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      sub_14000C2A8(retaddr, 445, (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", v4);
      return v5;
    }
    ++v2;
    if ( v2 == 100 * (v2 / 100) )
      sub_14004E2C8(retaddr, 449LL, (__int64)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", 2289827891LL);
  }
  *(_BYTE *)(a1 + 216) = 1;
  if ( i == (*(_QWORD *)(a1 + 160) ^ (a1 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 168) << 6))) )
  {
    try
    {
      *(_WORD *)(a1 + 168) ^= 1u;
      LODWORD(v11[0]) = 0;
      v11[1] = 0LL;
      v12 = 0;
      v13 = 0LL;
      v14 = 0;
      v15 = 0LL;
      v16 = 0;
      v17 = 0LL;
      v8 = 0;
      sub_140080C8C(a1 + ((*(unsigned __int16 *)(a1 + 168) ^ 1LL) << 6), (unsigned int *)v11);
    }
    catch ( ATL::CAtlException *v10 )
    {
      v9 = (int *)v10;
      if ( *(_DWORD *)v10 == -1073741571 )
        o__resetstkoflw();
      v8 = *v9;
    }
    if ( v8 < 0 )
      sub_140007934(retaddr, 476, (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", v8);
    sub_1400561A0(v11);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(retaddr, 466, (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", -2147483636);
    return 2147483660LL;
  }
}
