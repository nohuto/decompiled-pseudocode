/*
 * XREFs of sub_140015070 @ 0x140015070
 * Callers:
 *     <none>
 * Callees:
 *     sub_140012F60 @ 0x140012F60 (sub_140012F60.c)
 *     sub_140013158 @ 0x140013158 (sub_140013158.c)
 *     sub_140013CA0 @ 0x140013CA0 (sub_140013CA0.c)
 *     sub_140013D10 @ 0x140013D10 (sub_140013D10.c)
 *     sub_140013D70 @ 0x140013D70 (sub_140013D70.c)
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     sub_140014ED0 @ 0x140014ED0 (sub_140014ED0.c)
 *     sub_1400156A0 @ 0x1400156A0 (sub_1400156A0.c)
 *     sub_140015BA8 @ 0x140015BA8 (sub_140015BA8.c)
 *     sub_140015C58 @ 0x140015C58 (sub_140015C58.c)
 *     sub_140015C88 @ 0x140015C88 (sub_140015C88.c)
 *     sub_140015D9C @ 0x140015D9C (sub_140015D9C.c)
 *     sub_14003D1EC @ 0x14003D1EC (sub_14003D1EC.c)
 *     sub_1400465F0 @ 0x1400465F0 (sub_1400465F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140015070(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rsi
  bool v4; // r15
  __int64 v5; // rcx
  int v6; // ecx
  bool v7; // si
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  unsigned __int64 v11; // rcx
  double v12; // xmm0_8
  double v13; // xmm0_8
  int v14; // ecx
  double v15; // xmm1_8
  double v16; // xmm0_8
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d
  int v22; // ecx
  bool v24; // cl
  __int64 v25; // [rsp+38h] [rbp-91h] BYREF
  __int64 v26; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v27[2]; // [rsp+48h] [rbp-81h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-71h] BYREF
  __int64 v29; // [rsp+60h] [rbp-69h] BYREF
  __int128 v30; // [rsp+68h] [rbp-61h]
  __int128 v31; // [rsp+78h] [rbp-51h]
  __int64 v32; // [rsp+88h] [rbp-41h]
  __int128 v33; // [rsp+90h] [rbp-39h]
  __int128 v34; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v35[16]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v36; // [rsp+C0h] [rbp-9h]
  __int64 v37; // [rsp+C8h] [rbp-1h]
  __int64 *v38; // [rsp+D0h] [rbp+7h]
  __int64 v39; // [rsp+D8h] [rbp+Fh]
  __int64 *v40; // [rsp+E0h] [rbp+17h]
  __int64 v41; // [rsp+E8h] [rbp+1Fh]

  v33 = *(_OWORD *)(a1 + 4704);
  v34 = v33;
  EtwEventActivityIdControl(4LL, &v34);
  v27[1] = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013CA0(v2, (int)&unk_1400C5690, a1, 0);
  sub_140015C88(a1);
  v3 = *(_QWORD *)(a1 + 4688);
  if ( v3 )
  {
    GetCurrentThread();
    sub_1400B6010(v3);
  }
  sub_140015C58(*(_QWORD *)(a1 + 264));
  v4 = (int)sub_140015D9C() >= 0;
  v5 = *(_QWORD *)(a1 + 4672);
  v27[0] = v5;
  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013D10(v5, (int)&unk_1400C5650, a1);
  sub_140013D70(a1, (__int64)v27);
  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013CA0(v6, (int)&unk_1400C5690, a1, 1);
  while ( !*(_BYTE *)(a1 + 76) )
  {
    v7 = *(_BYTE *)(a1 + 4680) == 0;
    sub_1400156A0(a1);
    sub_1400B6010(*(_QWORD *)(a1 + 80));
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 0) )
    {
      sub_1400B6010(*(_QWORD *)(a1 + 208));
      if ( (byte_1400E8401 & 4) != 0 )
        sub_140012F60(v9, v8, a1, 0LL);
    }
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v11 = PerformanceCount.QuadPart - v27[0];
    if ( PerformanceCount.QuadPart - v27[0] < 0 )
      v12 = (double)(int)(v11 & 1 | (v11 >> 1)) + (double)(int)(v11 & 1 | (v11 >> 1));
    else
      v12 = (double)(int)v11;
    v13 = v12 * 10000000.0;
    v14 = qword_1400B7000;
    if ( qword_1400B7000 < 0 )
    {
      v14 = qword_1400B7000 & 1;
      v15 = (double)(int)(v14 | ((unsigned __int64)qword_1400B7000 >> 1))
          + (double)(int)(v14 | ((unsigned __int64)qword_1400B7000 >> 1));
    }
    else
    {
      v15 = (double)(int)qword_1400B7000;
    }
    v16 = v13 / v15;
    v17 = (unsigned int)(int)v16;
    *(_QWORD *)(a1 + 360) = v17;
    *(_QWORD *)(a1 + 392) += v17;
    ++*(_DWORD *)(a1 + 400);
    if ( (byte_1400E8401 & 8) != 0 )
    {
      v26 = *(_QWORD *)(a1 + 352);
      v29 = (unsigned int)(int)v16;
      v25 = a1;
      v36 = &v25;
      v37 = 8LL;
      v38 = &v29;
      v39 = 8LL;
      v40 = &v26;
      v41 = 8LL;
      sub_140014E60(v14, (unsigned int)&unk_1400C5630, v10, 4, (__int64)v35);
    }
    if ( v17 > *(_QWORD *)(a1 + 352) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 0) )
      *(_QWORD *)(a1 + 384) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 384));
    else
      _InterlockedExchange64((volatile __int64 *)(a1 + 384), 0LL);
    if ( *(_BYTE *)(a1 + 4680) )
    {
      if ( *(_BYTE *)(a1 + 4760) )
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 4756), 2);
        WakeByAddressAll((PVOID)(a1 + 4756));
        *(_BYTE *)(a1 + 4760) = 0;
      }
      v24 = 0;
      if ( *(_DWORD *)(a1 + 4756) == 1 )
        v24 = v7;
      *(_BYTE *)(a1 + 4681) = v24;
    }
    sub_1400B6010(*(_QWORD *)(a1 + 80));
    if ( (byte_1400E8401 & 8) != 0 )
    {
      v26 = a1;
      v36 = &v26;
      v37 = 8LL;
      sub_140014E60(v18, (unsigned int)&unk_1400C5650, v19, 2, (__int64)v35);
    }
    sub_140013D70(a1, (__int64)v27);
    v27[0] = *(_QWORD *)(a1 + 4672);
    if ( (byte_1400E8401 & 8) != 0 )
    {
      LODWORD(v25) = 2;
      v26 = a1;
      v36 = &v26;
      v37 = 8LL;
      v38 = &v25;
      v39 = 4LL;
      sub_140014E60(v20, (unsigned int)&unk_1400C5690, v21, 3, (__int64)v35);
    }
  }
  sub_140015BA8(a1);
  sub_1400465F0(a1 + 232, *(unsigned int *)(a1 + 244));
  *(_DWORD *)(a1 + 244) = 0;
  if ( v4 )
    sub_14003D1EC();
  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013D10(v22, (int)&unk_1400C5650, a1);
  EtwEventActivityIdControl(4LL, &v34);
  return 0LL;
}
