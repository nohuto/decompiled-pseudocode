/*
 * XREFs of sub_140040634 @ 0x140040634
 * Callers:
 *     sub_140053530 @ 0x140053530 (sub_140053530.c)
 * Callees:
 *     sub_1400250F4 @ 0x1400250F4 (sub_1400250F4.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 */

void __fastcall sub_140040634(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+A0h] [rbp-9h] BYREF
  int v6; // [rsp+A4h] [rbp-5h] BYREF
  int v7; // [rsp+A8h] [rbp-1h] BYREF
  void *v8; // [rsp+B0h] [rbp+7h] BYREF
  void *v9; // [rsp+B8h] [rbp+Fh] BYREF
  void *v10; // [rsp+C0h] [rbp+17h] BYREF
  void *v11; // [rsp+C8h] [rbp+1Fh] BYREF
  void *v12; // [rsp+D0h] [rbp+27h] BYREF
  void *v13; // [rsp+D8h] [rbp+2Fh] BYREF
  void *v14; // [rsp+E0h] [rbp+37h] BYREF
  void *v15; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v16; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v17; // [rsp+F8h] [rbp+4Fh] BYREF
  int v18; // [rsp+110h] [rbp+67h] BYREF
  int v19; // [rsp+120h] [rbp+77h] BYREF
  int v20; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = *(_DWORD **)(a1 + 8);
  if ( *v1 > 2u )
  {
    if ( sub_14002813C((__int64)v1, 0x200000000000LL) )
    {
      v8 = *(void **)(v4 + 120);
      v9 = *(void **)(v4 + 112);
      v18 = *(_DWORD *)(v4 + 104);
      v10 = *(void **)(v4 + 96);
      v11 = *(void **)(v4 + 88);
      v19 = *(_DWORD *)(v4 + 80);
      v12 = *(void **)(v4 + 72);
      v20 = *(_DWORD *)(v4 + 32);
      v13 = *(void **)(v4 + 24);
      v5 = *(_DWORD *)v4;
      v14 = *(void **)(v4 + 128);
      v6 = *(_DWORD *)(v4 + 64);
      v15 = *(void **)(v4 + 56);
      v7 = *(_DWORD *)(v4 + 8);
      v16 = 0x1000000LL;
      v17 = 0x1000000LL;
      sub_1400250F4(
        v2,
        byte_1400D1706,
        v3,
        v4,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v7,
        &v15,
        (__int64)&v6,
        &v14,
        (__int64)&v5,
        &v13,
        (__int64)&v20,
        &v12,
        (__int64)&v19,
        &v11,
        &v10,
        (__int64)&v18,
        &v9,
        &v8);
    }
  }
}
