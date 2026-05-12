/*
 * XREFs of sub_1401B43C0 @ 0x1401B43C0
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140043D18 @ 0x140043D18 (sub_140043D18.c)
 *     sub_140044B70 @ 0x140044B70 (sub_140044B70.c)
 *     sub_140127920 @ 0x140127920 (sub_140127920.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140178008 @ 0x140178008 (sub_140178008.c)
 *     sub_140178048 @ 0x140178048 (sub_140178048.c)
 *     sub_1401926C4 @ 0x1401926C4 (sub_1401926C4.c)
 *     sub_1401AE748 @ 0x1401AE748 (sub_1401AE748.c)
 *     sub_1401B2250 @ 0x1401B2250 (sub_1401B2250.c)
 */

__int64 __fastcall sub_1401B43C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rsi
  __int128 v11; // xmm0
  int v12; // eax
  _QWORD *v13; // rdi
  int v14; // edx
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 result; // rax
  _BYTE *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-38h] BYREF

  v8 = a1 + 168;
  v24 = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  *(_QWORD *)(a1 + 24) = a4;
  v11 = *a6;
  *(_DWORD *)(a1 + 80) = a7;
  *(_WORD *)(a1 + 984) = 0;
  *(_OWORD *)(a1 + 40) = v11;
  *(_QWORD *)(a1 + 168) = a1;
  v12 = sub_140044B70(DeviceObject);
  v13 = (_QWORD *)(a1 + 144);
  v14 = 0;
  if ( v12 != -1 )
    v14 = v12;
  if ( v14 )
  {
    v15 = v8;
  }
  else
  {
    *v13 |= 0x10uLL;
    v15 = a1 + 168;
  }
  v16 = sub_140178008(*(_QWORD *)(a1 + 16), v14);
  *(_QWORD *)(a1 + 400) = v16;
  if ( !v16 )
    return 3221225486LL;
  v18 = (_BYTE *)(a1 + 144);
  if ( (v16[23] & 1) == 0 )
  {
    v19 = sub_1400143E0(64LL, 144LL, 1447977298LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 584) = v19;
    if ( !v19 )
      return 3221225495LL;
    *(_BYTE *)(v19 + 16) = 0;
    memset_0((void *)(v19 + 24), 0, 0x40uLL);
    v20 = *(_QWORD *)(a1 + 584);
    v18 = (_BYTE *)(a1 + 144);
    *(_QWORD *)(v20 + 88) = 0LL;
    *(_QWORD *)(v20 + 96) = 0LL;
    v8 = v15;
  }
  v21 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 4LL);
  *v13 |= 0x100uLL;
  *(_DWORD *)(a1 + 184) = v21;
  result = sub_140178048(v8);
  if ( (int)result >= 0 )
  {
    sub_1401AE748(*(_QWORD *)(a1 + 16) + 40LL, a7, (PVOID *)(a1 + 896));
    sub_1400403EC(a3, (__int64)&v24);
    *(_QWORD *)(a1 + 1016) = *((_QWORD *)&v24 + 1);
    sub_140043D18(DeviceObject, v22, (_QWORD *)(a1 + 1024));
    sub_1401926C4(a1);
    if ( a8 == 20 )
      *v13 |= 1uLL;
    v23 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 1092) = 0;
    sub_1401B2250((struct _UNICODE_STRING *)(v23 + 40), (_DWORD *)(a1 + 1092));
    if ( !*(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = (*v18 & 1) != 0 ? 300 : 10;
    KeInitializeDpc((PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL), (PKDEFERRED_ROUTINE)sub_1400CD4A0, *(PVOID *)(a1 + 8));
    sub_140127920((_QWORD *)a1);
    return 0LL;
  }
  return result;
}
