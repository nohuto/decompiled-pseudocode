/*
 * XREFs of GreGetBounds @ 0x14008B330
 * Callers:
 *     CreateCacheDC @ 0x140089BB0 (CreateCacheDC.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14008B5C0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBounds(HDC a1, __m128i *a2, char a3)
{
  __int64 v5; // r9
  unsigned int v6; // ebx
  int v7; // r8d
  char v8; // dl
  int v9; // edx
  __int64 v10; // rax
  __m128i v11; // xmm2
  int v12; // esi
  __int64 v13; // r11
  __int64 v14; // r10
  int v15; // edi
  __int64 v16; // rcx
  int v17; // eax
  __int32 v18; // esi
  int v19; // eax
  bool v21; // zf
  __m128i v22; // [rsp+20h] [rbp-60h]
  _QWORD v23[10]; // [rsp+30h] [rbp-50h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v23, a1);
  v5 = v23[0];
  v6 = 0;
  v7 = 1;
  if ( !v23[0] )
    goto LABEL_16;
  v8 = a3;
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 4) != 0 )
    {
      *(_DWORD *)(v23[0] + 36LL) |= 0x40u;
LABEL_23:
      v5 = v23[0];
      v9 = v8 & 4;
      goto LABEL_5;
    }
    *(_DWORD *)(v23[0] + 36LL) |= 0x20u;
LABEL_25:
    v5 = v23[0];
    v9 = v8 & 4;
    goto LABEL_26;
  }
  v9 = a3 & 4;
  if ( (a3 & 2) != 0 )
  {
    v21 = v9 == 0;
    v8 = a3;
    if ( !v21 )
    {
      *(_DWORD *)(v23[0] + 36LL) &= ~0x40u;
      goto LABEL_23;
    }
    *(_DWORD *)(v23[0] + 36LL) &= ~0x20u;
    goto LABEL_25;
  }
  if ( (a3 & 4) == 0 )
  {
LABEL_26:
    v11 = *(__m128i *)(v5 + 1064);
    v12 = *(_DWORD *)(v5 + 1072);
    v13 = *(_QWORD *)(v5 + 1072);
    goto LABEL_7;
  }
LABEL_5:
  v10 = *(_QWORD *)(v5 + 1184);
  if ( !v10
    || (a3 & 3) != 0
    || (v12 = *(_DWORD *)(v10 + 60),
        v15 = _mm_cvtsi128_si32(*(__m128i *)(v10 + 52)),
        v22 = *(__m128i *)(v10 + 52),
        v15 == v12)
    || (v13 = *(_QWORD *)(v10 + 60), v14 = *(_QWORD *)(v10 + 52), v22.m128i_i32[1] == v22.m128i_i32[3]) )
  {
    v11 = *(__m128i *)(v5 + 1080);
    v12 = *(_DWORD *)(v5 + 1088);
    v13 = *(_QWORD *)(v5 + 1088);
LABEL_7:
    HIDWORD(v14) = v11.m128i_i32[1];
    v15 = _mm_cvtsi128_si32(v11);
    v22 = v11;
  }
  if ( v15 != v12 && HIDWORD(v14) != HIDWORD(v13) && v15 < v12 && SHIDWORD(v14) < SHIDWORD(v13) )
  {
    if ( a2 )
    {
      v16 = *(_DWORD *)(v5 + 40) & 1LL;
      v17 = *(_DWORD *)(v5 + 8 * v16 + 1016);
      v18 = v17 + v12;
      v22.m128i_i32[0] = v17 + v15;
      v19 = *(_DWORD *)(v5 + 8 * v16 + 1020);
      v22.m128i_i32[1] += v19;
      v22.m128i_i32[3] += v19;
      v22.m128i_i32[2] = v18;
      *a2 = v22;
    }
    v7 = 0;
    if ( v9 )
    {
      *(_DWORD *)(v5 + 1080) = 0x7FFFFFFF;
      *(_DWORD *)(v23[0] + 1084LL) = 0x7FFFFFFF;
      *(_DWORD *)(v23[0] + 1088LL) = 0x80000000;
      *(_DWORD *)(v23[0] + 1092LL) = 0x80000000;
    }
    else
    {
      *(_DWORD *)(v5 + 1064) = 0x7FFFFFFF;
      *(_DWORD *)(v23[0] + 1068LL) = 0x7FFFFFFF;
      *(_DWORD *)(v23[0] + 1072LL) = 0x80000000;
      *(_DWORD *)(v23[0] + 1076LL) = 0x80000000;
    }
  }
LABEL_16:
  LOBYTE(v6) = v7 == 0;
  DCOBJA::~DCOBJA((DCOBJA *)v23);
  return v6;
}
