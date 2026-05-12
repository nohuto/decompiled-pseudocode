/*
 * XREFs of sub_14012F9F4 @ 0x14012F9F4
 * Callers:
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 *     sub_14006B3C4 @ 0x14006B3C4 (sub_14006B3C4.c)
 *     sub_140072E88 @ 0x140072E88 (sub_140072E88.c)
 *     sub_14007985C @ 0x14007985C (sub_14007985C.c)
 */

__int64 __fastcall sub_14012F9F4(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, int a6, __int64 a7)
{
  _DWORD *v7; // rbp
  _DWORD *v8; // r15
  __int64 result; // rax
  __int64 v12; // rbx
  int v13; // ecx
  void *v14; // r12
  unsigned int v15; // ecx
  _DWORD *v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r10
  _QWORD *v22; // r11
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // esi
  __int64 v28; // rax
  _QWORD *v29; // r11
  unsigned int v30; // esi

  v7 = 0LL;
  v8 = 0LL;
  if ( byte_1401687E9 )
    return 0LL;
  if ( !a4 )
    return 3221225485LL;
  v12 = (unsigned int)*a4;
  if ( !(_DWORD)v12 || !a5 || !sub_14007985C(a5, v12) )
    return 3221225485LL;
  v13 = **(_DWORD **)(a1 + 64);
  if ( v13 == 1314275652 )
  {
    v14 = sub_140127EF0;
    v8 = sub_14006B3A4(a1);
    goto LABEL_11;
  }
  if ( v13 != 1314278989 )
    return 3221225485LL;
  v14 = StorPortFreeDeviceBase;
  v7 = sub_14006B3C4(a1);
LABEL_11:
  v15 = 48 * v12 + 56;
  v16 = (_DWORD *)(a5 + 24);
  v17 = v12;
  do
  {
    if ( !*(v16 - 1) )
      v15 += 16 * *v16;
    v16 += 10;
    --v17;
  }
  while ( v17 );
  v18 = (_DWORD *)sub_1400143E0(64LL, v15, 1330667858LL, a1);
  v19 = v18;
  if ( !v18 )
    return 3221225626LL;
  v20 = (unsigned int)*a4;
  v21 = 0LL;
  *v18 = v20;
  v22 = &v18[12 * v20 + 14];
  if ( (_DWORD)v20 )
  {
    do
    {
      v23 = a5 + 40 * v21;
      v24 = 6 * v21;
      v19[v24 + 3] = *(_QWORD *)(v23 + 8);
      HIDWORD(v19[v24 + 4]) = *(_DWORD *)(v23 + 20);
      v25 = 0;
      if ( *(_DWORD *)(v23 + 16) != 3 )
        v25 = *(_DWORD *)(v23 + 16);
      LODWORD(v19[6 * v21 + 4]) = v25;
      v26 = *(_DWORD *)(v23 + 20);
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          v19[6 * v21 + 5] = *(_QWORD *)(v23 + 24);
          v19[6 * v21 + 6] = *(_QWORD *)(v23 + 32);
        }
      }
      else
      {
        v19[6 * v21 + 6] = v22;
        v27 = 0;
        for ( LODWORD(v19[6 * v21 + 5]) = *(_DWORD *)(v23 + 24); v27 < *(_DWORD *)(v23 + 24); v22 = v29 + 2 )
        {
          v28 = sub_140072E88((_DWORD *)v23, v27++);
          v29[1] = *(_QWORD *)(v28 + 16);
          *v29 = *(_QWORD *)(v28 + 8);
        }
      }
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 < *a4 );
  }
  v30 = PoFxRegisterComponentPerfStates(a7, 0LL, 1LL, v14, v19, 0LL);
  ExFreePoolWithTag(v19, 0x4F506152u);
  result = v30;
  if ( (v30 & 0x80000000) == 0 )
  {
    if ( v7 )
    {
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v7 + 16) + 8LL) + 40LL) = *(_BYTE *)a4;
      return v30;
    }
    if ( v8 )
    {
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v8 + 20) + 8LL) + 80LL) = *(_BYTE *)a4;
      return v30;
    }
  }
  return result;
}
