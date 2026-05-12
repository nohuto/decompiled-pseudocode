/*
 * XREFs of sub_1400750D4 @ 0x1400750D4
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_14000A3E4 @ 0x14000A3E4 (sub_14000A3E4.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14002D010 @ 0x14002D010 (sub_14002D010.c)
 *     sub_140039148 @ 0x140039148 (sub_140039148.c)
 *     sub_140056BCC @ 0x140056BCC (sub_140056BCC.c)
 *     sub_140072E00 @ 0x140072E00 (sub_140072E00.c)
 *     sub_140072EC4 @ 0x140072EC4 (sub_140072EC4.c)
 *     sub_1400731F4 @ 0x1400731F4 (sub_1400731F4.c)
 *     sub_14007842C @ 0x14007842C (sub_14007842C.c)
 *     sub_140078CD8 @ 0x140078CD8 (sub_140078CD8.c)
 *     sub_1400BC3A4 @ 0x1400BC3A4 (sub_1400BC3A4.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400750D4(__int64 a1, int *a2, _BYTE *a3)
{
  _BYTE *v5; // rcx
  __int64 v7; // rax
  bool *v8; // r8
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rdx
  int *v12; // rcx
  int *v13; // rax
  int *v14; // rbp
  __int64 v15; // rcx
  unsigned int v16; // eax
  size_t v17; // rsi
  _QWORD *v18; // r15
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  char v22; // cl
  _DWORD *v23; // rsi
  int v24; // eax
  char v25; // al
  char v26; // cl
  char v27; // al
  __int64 v28; // r8
  unsigned int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned int v32; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF

  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = *(_BYTE **)(a1 - 16);
  if ( (v5[248] & 1) != 0 )
    return 3238002690LL;
  v7 = sub_140039148(v5);
  v9 = v7;
  if ( !v7 )
    return 3238002694LL;
  if ( byte_1401687E9 )
  {
    *(_BYTE *)(v7 + 110) |= 4u;
    return 0LL;
  }
  v10 = *(_BYTE *)(v7 + 107);
  if ( (v10 & 0x20) != 0 )
    return 3221225473LL;
  if ( *(_QWORD *)(v9 + 4960) )
  {
    if ( a3 )
      *v8 = (v10 & 0x10) != 0;
    return 0LL;
  }
  if ( !sub_1400731F4(a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v11 + 8) != 1 )
    return 3238002694LL;
  v13 = sub_14002D010(v12, 0);
  v14 = v13;
  if ( !v13 || !sub_140072E00((__int64)v13) )
    return 3238002694LL;
  v15 = *(_QWORD *)(v9 + 8);
  v33 = 0LL;
  if ( (int)sub_14007842C(v15, a2, v9, &v33) < 0 )
    return 3238002689LL;
  v16 = sub_140072EC4(a2);
  v17 = v16;
  v18 = (_QWORD *)sub_1400143E0(64LL, v16 + 144, 1330667858LL, *(_QWORD *)(v9 + 8));
  if ( v18 )
  {
    v19 = v33;
    *((_DWORD *)v18 + 4) = 0;
    *v18 = v19;
    v20 = *((_DWORD *)v18 + 5) | 3;
    *((_DWORD *)v18 + 5) = v20;
    if ( v14[2] == 1 )
      *((_DWORD *)v18 + 5) = v20 | 0x100;
    v18[1] = v18 + 18;
    memmove(v18 + 18, a2, v17);
    v22 = *(_BYTE *)(v9 + 107);
    v23 = a2 + 3;
    if ( (v22 & 8) != 0
      && (*v23 & 4) != 0
      && (LOBYTE(v21) = 1, v24 = sub_140078CD8(*(_QWORD *)(v9 + 8), v21), v22 = *(_BYTE *)(v9 + 107), v24 >= 0) )
    {
      *(_BYTE *)(v9 + 107) = v22 | 0x10;
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      *(_BYTE *)(v9 + 107) = v22 & 0xEF;
    }
    if ( (*v23 & 8) != 0 )
      *(_BYTE *)(v9 + 107) |= 0x40u;
    if ( (*v23 & 0x200) != 0 )
    {
      *(_BYTE *)(v9 + 108) |= 0x80u;
      v23 = a2 + 3;
    }
    if ( (*(_BYTE *)(v9 + 112) & 0x40) != 0 && (*(_BYTE *)(v9 + 107) & 0x10) != 0 && (*(_BYTE *)v23 & 0x40) != 0 )
      v25 = *(_BYTE *)(v9 + 110) | 0x40;
    else
      v25 = *(_BYTE *)(v9 + 110) & 0xBF;
    *(_BYTE *)(v9 + 110) = v25;
    v26 = v25;
    if ( (v25 & 0x40) != 0 )
    {
      LOBYTE(v21) = *(_BYTE *)v23 & 0x40;
      sub_1400BC3A4(*(_QWORD *)(v9 + 32), v21);
      v26 = *(_BYTE *)(v9 + 110);
    }
    if ( (*v23 & 0x40) != 0 )
      *(_BYTE *)(v9 + 108) |= 8u;
    if ( (v26 & 0x40) != 0 )
    {
      v27 = *(_BYTE *)(v9 + 108);
      if ( (v27 & 8) != 0 )
        *(_BYTE *)(v9 + 108) = v27 & 0xF7;
    }
    if ( (a2[3] & 0x400) != 0 )
      *(_BYTE *)(v9 + 109) |= 1u;
    PoFxSetComponentLatency(*v18, 0LL, -1LL);
    PoFxSetComponentResidency(*v18, 0LL, -1LL);
    if ( *(char *)(v9 + 107) >= 0 && (unsigned int)*a2 >= 2 && (a2[3] & 0x10) != 0 )
      *(_DWORD *)(v9 + 4976) = a2[4];
    v29 = *(_DWORD *)(v9 + 4976);
    *(_QWORD *)(v9 + 4960) = v18;
    sub_14000A3E4(v9, v29, v28, 0);
    if ( byte_140168DAA )
    {
      v31 = *(unsigned int *)(v9 + 56);
      if ( (_DWORD)v31 != -1 && (byte_1401694F2 & 0x10) != 0 )
      {
        v32 = (*(unsigned __int8 *)(v9 + 107) >> 4) & 1;
        sub_140056BCC(
          v32,
          v31,
          v30,
          **(_QWORD **)(v9 + 4960),
          v31,
          v32,
          *(_DWORD *)(v9 + 4976),
          v14[2],
          (*(unsigned __int8 *)(v9 + 110) >> 6) & 1);
      }
    }
    PoFxStartDevicePowerManagement(**(_QWORD **)(v9 + 4960));
    return 0LL;
  }
  PoFxUnregisterDevice(v33);
  return 3238002691LL;
}
