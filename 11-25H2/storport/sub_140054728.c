/*
 * XREFs of sub_140054728 @ 0x140054728
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_14002D010 @ 0x14002D010 (sub_14002D010.c)
 *     sub_140039148 @ 0x140039148 (sub_140039148.c)
 *     sub_140072EC4 @ 0x140072EC4 (sub_140072EC4.c)
 *     sub_1400731C4 @ 0x1400731C4 (sub_1400731C4.c)
 *     sub_1400731F4 @ 0x1400731F4 (sub_1400731F4.c)
 *     sub_14007842C @ 0x14007842C (sub_14007842C.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140054728(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  _BYTE *v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  char v11; // al
  __int64 *v12; // rax
  __int64 *v13; // rbx
  int *v14; // rcx
  int *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  size_t v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v24; // rcx
  __int64 v25; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v25) = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
    return 3238002694LL;
  v6 = *(_BYTE **)(a1 - 16);
  if ( (v6[248] & 1) != 0 )
    return 3238002690LL;
  v9 = sub_140039148(v6);
  if ( !v9 )
    return 3238002694LL;
  if ( !v8 )
    return 3238002694LL;
  if ( *(_WORD *)v8 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(v8 + 4) < 4u )
    return 3238002694LL;
  v10 = *(_BYTE *)(v8 + 8);
  BYTE1(v25) = *(_BYTE *)(v8 + 9);
  v11 = *(_BYTE *)(v8 + 10);
  LOBYTE(v25) = v10;
  BYTE2(v25) = v11;
  v12 = sub_14001F350(v9, v25);
  v13 = v12;
  if ( !v12 )
    return 3238002694LL;
  if ( byte_1401687E9 )
  {
    *((_BYTE *)v12 + 507) |= 0x20u;
    return 0LL;
  }
  if ( *((char *)v12 + 505) < 0 )
    return 3238002689LL;
  if ( !(unsigned __int8)sub_1400731F4(a3) )
    return 3238002694LL;
  if ( a3[2] != 1 )
    return 3238002694LL;
  v15 = sub_14002D010(v14, 0);
  if ( !v15 || !(unsigned __int8)sub_1400731C4(v15, v15) || (unsigned int)(*(_DWORD *)(v17 + 8) - 1) > 1 )
    return 3238002694LL;
  v18 = *(_QWORD *)(v16 + 16) - 0x40880B3A585D326BLL;
  if ( *(_QWORD *)(v16 + 16) == 0x40880B3A585D326BLL )
    v18 = *(_QWORD *)(v16 + 24) + 0x41A796F04F77C677LL;
  if ( v18 )
    return 3238002694LL;
  v19 = v13[1];
  v25 = 0LL;
  if ( (int)sub_14007842C(v19, a3, v13, &v25) < 0 )
    return 3238002689LL;
  v20 = sub_140072EC4(a3);
  v21 = v20;
  v22 = sub_1400143E0(64LL, v20 + 184, 1330667858LL, v13[1]);
  if ( v22 )
  {
    v23 = v25;
    *(_DWORD *)(v22 + 16) = 0;
    *(_DWORD *)(v22 + 32) |= 0xEu;
    *(_QWORD *)v22 = v23;
    *(_QWORD *)(v22 + 88) = v22 + 80;
    *(_QWORD *)(v22 + 80) = v22 + 80;
    KeInitializeSpinLock((PKSPIN_LOCK)(v22 + 96));
    if ( (a3[3] & 8) != 0 )
      *((_BYTE *)v13 + 505) |= 0x40u;
    if ( (a3[3] & 0x200) != 0 )
      *((_BYTE *)v13 + 506) |= 4u;
    *(_QWORD *)(v22 + 8) = v22 + 184;
    memmove((void *)(v22 + 184), a3, v21);
    if ( a4 )
      *a4 = 1;
    if ( *a3 == 3 && (a3[3] & 0x20) != 0 )
      *(_DWORD *)(v22 + 32) |= 0x100u;
    v24 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v13[233];
    v13[234] = v22;
    ExReInitializeRundownProtectionCacheAware(v24);
    *((_BYTE *)v13 + 505) |= 0x80u;
    return 0LL;
  }
  PoFxUnregisterDevice(v25);
  return 3238002691LL;
}
