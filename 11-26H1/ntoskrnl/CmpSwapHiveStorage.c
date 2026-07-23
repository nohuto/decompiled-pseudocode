/*
 * XREFs of CmpSwapHiveStorage @ 0x1408625F4
 * Callers:
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 * Callees:
 *     HvSwapHiveStorage @ 0x1408635BC (HvSwapHiveStorage.c)
 */

__int64 __fastcall CmpSwapHiveStorage(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // r14
  _QWORD *v16; // rdx
  _QWORD **v17; // r9
  _QWORD *v18; // r10
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // r11
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 result; // rax
  __int64 v29; // rcx
  _QWORD *v30; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v31; // [rsp+28h] [rbp-8h]

  HvSwapHiveStorage();
  v4 = (_QWORD *)(a2 + 1544);
  v5 = a1 - a2;
  v6 = 6LL;
  do
  {
    v7 = *(_QWORD *)((char *)v4 + v5);
    *(_QWORD *)((char *)v4 + v5) = *v4;
    *v4++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = *(_DWORD *)(a1 + 1800);
  v9 = 64LL;
  *(_DWORD *)(a1 + 1800) = *(_DWORD *)(a2 + 1800);
  v10 = a2 - a1;
  *(_DWORD *)(a2 + 1800) = v8;
  v11 = *(_QWORD *)(a1 + 1816);
  *(_QWORD *)(a1 + 1816) = *(_QWORD *)(a2 + 1816);
  *(_QWORD *)(a2 + 1816) = v11;
  v12 = *(_QWORD *)(a1 + 1824);
  *(_QWORD *)(a1 + 1824) = *(_QWORD *)(a2 + 1824);
  *(_QWORD *)(a2 + 1824) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 1880);
  *(_DWORD *)(a1 + 1880) = *(_DWORD *)(a2 + 1880);
  *(_DWORD *)(a2 + 1880) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 1884);
  *(_DWORD *)(a1 + 1884) = *(_DWORD *)(a2 + 1884);
  *(_DWORD *)(a2 + 1884) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 1888);
  *(_DWORD *)(a1 + 1888) = *(_DWORD *)(a2 + 1888);
  *(_DWORD *)(a2 + 1888) = v12;
  v13 = *(_QWORD *)(a1 + 1896);
  *(_QWORD *)(a1 + 1896) = *(_QWORD *)(a2 + 1896);
  *(_QWORD *)(a2 + 1896) = v13;
  v14 = (_QWORD *)(a1 + 1904);
  v15 = (_QWORD *)(a2 + 1904);
  do
  {
    v16 = (_QWORD *)*v14;
    v17 = (_QWORD **)((char *)v14 + v10 + 8);
    v18 = &v30;
    v31 = &v30;
    v19 = &v30;
    v30 = &v30;
    if ( v16 != v14 )
    {
      v31 = *(_QWORD **)((char *)v17 + v5);
      v20 = v31;
      v30 = v16;
      v16[1] = &v30;
      *v20 = &v30;
      v18 = v31;
      v19 = v30;
      *(_QWORD **)((char *)v17 + v5) = v14;
      *v14 = v14;
    }
    v21 = (_QWORD *)((char *)v14 + v10);
    v22 = *(_QWORD **)((char *)v14 + v10);
    if ( v22 != (_QWORD *)((char *)v14 + v10) )
    {
      v23 = *v17;
      *v14 = v22;
      *(_QWORD **)((char *)v17 + v5) = v23;
      v22[1] = v14;
      *v23 = v14;
      v18 = v31;
      v19 = v30;
      *v17 = v15;
      *v21 = v21;
    }
    if ( v19 != &v30 )
    {
      *v21 = v19;
      *v17 = v18;
      v19[1] = v21;
      *v18 = v21;
    }
    v14 += 2;
    v15 += 2;
    --v9;
  }
  while ( v9 );
  v24 = *(_QWORD *)(a1 + 4144);
  *(_QWORD *)(a1 + 4144) = *(_QWORD *)(a2 + 4144);
  v25 = *(_QWORD *)(a2 + 4152);
  *(_QWORD *)(a2 + 4144) = v24;
  v26 = *(_QWORD *)(a1 + 4152);
  *(_QWORD *)(a1 + 4152) = v25;
  *(_QWORD *)(a2 + 4152) = v26;
  v27 = *(_QWORD *)(a1 + 4192);
  *(_QWORD *)(a1 + 4192) = *(_QWORD *)(a2 + 4192);
  *(_QWORD *)(a2 + 4192) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4232);
  *(_DWORD *)(a1 + 4232) = *(_DWORD *)(a2 + 4232);
  *(_DWORD *)(a2 + 4232) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4236);
  *(_DWORD *)(a1 + 4236) = *(_DWORD *)(a2 + 4236);
  *(_DWORD *)(a2 + 4236) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4760);
  *(_DWORD *)(a1 + 4760) = *(_DWORD *)(a2 + 4760);
  *(_DWORD *)(a2 + 4760) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4764);
  *(_DWORD *)(a1 + 4764) = *(_DWORD *)(a2 + 4764);
  *(_DWORD *)(a2 + 4764) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4768);
  *(_DWORD *)(a1 + 4768) = *(_DWORD *)(a2 + 4768);
  *(_DWORD *)(a2 + 4768) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4772);
  *(_DWORD *)(a1 + 4772) = *(_DWORD *)(a2 + 4772);
  *(_DWORD *)(a2 + 4772) = v27;
  result = *(_QWORD *)(a2 + 4800);
  v29 = *(_QWORD *)(a1 + 4800);
  *(_QWORD *)(a1 + 4800) = result;
  *(_QWORD *)(a2 + 4800) = v29;
  return result;
}
