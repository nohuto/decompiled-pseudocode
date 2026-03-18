/*
 * XREFs of ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x14011AAE0
 * Callers:
 *     pprFlattenRec @ 0x14011A500 (pprFlattenRec.c)
 * Callees:
 *     ?lError@HFDBASIS32@@QEBAJXZ @ 0x14011AC84 (-lError@HFDBASIS32@@QEBAJXZ.c)
 *     ?lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ @ 0x14011AE14 (-lParentErrorDividedBy4@HFDBASIS32@@QEBAJXZ.c)
 */

__int64 __fastcall BEZIER32::bNext(BEZIER32 *this, struct _POINTFIX *a2)
{
  HFDBASIS32 *v3; // r14
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r11d
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  __int64 result; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r11d
  int v22; // edx
  int v23; // edx
  int v24; // eax

  v3 = (BEZIER32 *)((char *)this + 4);
  a2->x = *((_DWORD *)this + 9) + ((*((_DWORD *)this + 1) + 4096) >> 13);
  a2->y = *((_DWORD *)this + 10) + ((*((_DWORD *)this + 5) + 4096) >> 13);
  v4 = *(_DWORD *)this;
  if ( !*(_DWORD *)this )
    return 0LL;
  HFDBASIS32::lError((BEZIER32 *)((char *)this + 20));
  v5 = HFDBASIS32::lError(v3);
  v6 = 4LL;
  if ( v5 <= v7 )
    v6 = 20LL;
  if ( (int)HFDBASIS32::lError((BEZIER32 *)((char *)this + v6)) > 523776 )
  {
    v8 = *((_DWORD *)this + 4);
    v9 = *((_DWORD *)this + 2);
    v10 = (v8 + *((_DWORD *)this + 3)) >> 3;
    *((_DWORD *)this + 3) = v10;
    *((_DWORD *)this + 2) = (v9 - v10) >> 1;
    *((_DWORD *)this + 4) = v8 >> 2;
    v11 = *((_DWORD *)this + 8);
    v12 = (v11 + *((_DWORD *)this + 7)) >> 3;
    v13 = (*((_DWORD *)this + 6) - v12) >> 1;
    v4 *= 2;
    *((_DWORD *)this + 7) = v12;
    *((_DWORD *)this + 6) = v13;
    *((_DWORD *)this + 8) = v11 >> 2;
    *(_DWORD *)this = v4;
  }
  v14 = v4;
  if ( (v4 & 1) == 0 )
  {
    v21 = v4;
    do
    {
      v4 = v21;
      if ( (int)HFDBASIS32::lParentErrorDividedBy4(v3) > 130944 )
        break;
      if ( (int)HFDBASIS32::lParentErrorDividedBy4((BEZIER32 *)((char *)this + 20)) > 130944 )
        break;
      *((_DWORD *)this + 4) *= 4;
      v22 = *((_DWORD *)this + 3);
      v4 = v14 >> 1;
      v21 = v4;
      v14 >>= 1;
      *((_DWORD *)this + 2) = v22 + 2 * *((_DWORD *)this + 2);
      *((_DWORD *)this + 3) = 8 * v22 - *((_DWORD *)this + 4);
      v23 = *((_DWORD *)this + 7);
      v24 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 8) *= 4;
      *((_DWORD *)this + 6) = v23 + 2 * v24;
      *((_DWORD *)this + 7) = 8 * v23 - *((_DWORD *)this + 8);
      *(_DWORD *)this = v4;
    }
    while ( (v4 & 1) == 0 );
  }
  *(_DWORD *)this = v4 - 1;
  v15 = *((_DWORD *)this + 3);
  v16 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 1) += v16;
  *((_DWORD *)this + 2) = v15 + v16;
  v17 = 2 * v15 - *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = v15;
  *((_DWORD *)this + 3) = v17;
  result = 1LL;
  v19 = *((_DWORD *)this + 7);
  v20 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 5) += v20;
  *((_DWORD *)this + 6) = v19 + v20;
  *((_DWORD *)this + 7) = 2 * v19 - *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v19;
  return result;
}
