/*
 * XREFs of sub_140084120 @ 0x140084120
 * Callers:
 *     sub_140080A60 @ 0x140080A60 (sub_140080A60.c)
 *     sub_1400833D0 @ 0x1400833D0 (sub_1400833D0.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_1400561A0 @ 0x1400561A0 (sub_1400561A0.c)
 *     sub_140080C8C @ 0x140080C8C (sub_140080C8C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140084120(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  int *v4; // rbx
  ATL::CAtlException *v5; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6[2]; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  __int64 v12; // [rsp+68h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    v1 = a1;
    *(_BYTE *)(a1 + 216) = 1;
    LODWORD(v6[0]) = 0;
    v6[1] = 0LL;
    v7 = 0;
    v8 = 0LL;
    v9 = 0;
    v10 = 0LL;
    v11 = 0;
    v12 = 0LL;
    v3 = 0;
    sub_140080C8C(a1 + ((*(unsigned __int16 *)(a1 + 168) ^ 1LL) << 6), (unsigned int *)v6);
  }
  catch ( ATL::CAtlException *v5 )
  {
    v4 = (int *)v5;
    if ( *(_DWORD *)v5 == -1073741571 )
      o__resetstkoflw();
    v1 = a1;
    v3 = *v4;
  }
  if ( v3 < 0 )
    sub_140007934((int)retaddr, 399, (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", v3);
  sub_1400561A0(v6);
  LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 176));
}
