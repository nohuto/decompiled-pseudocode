/*
 * XREFs of sub_140053DD0 @ 0x140053DD0
 * Callers:
 *     sub_140053530 @ 0x140053530 (sub_140053530.c)
 * Callees:
 *     sub_140001D28 @ 0x140001D28 (sub_140001D28.c)
 */

__int64 __fastcall sub_140053DD0(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+B8h] [rbp-80h] BYREF
  int v7; // [rsp+BCh] [rbp-7Ch] BYREF
  int v8; // [rsp+C0h] [rbp-78h] BYREF
  int v9; // [rsp+C4h] [rbp-74h] BYREF
  int v10; // [rsp+C8h] [rbp-70h] BYREF
  void *v11; // [rsp+D0h] [rbp-68h] BYREF
  void *v12; // [rsp+D8h] [rbp-60h] BYREF
  void *v13; // [rsp+E0h] [rbp-58h] BYREF
  void *v14; // [rsp+E8h] [rbp-50h] BYREF
  void *v15; // [rsp+F0h] [rbp-48h] BYREF
  void *v16; // [rsp+F8h] [rbp-40h] BYREF
  void *v17; // [rsp+100h] [rbp-38h] BYREF
  void *v18; // [rsp+108h] [rbp-30h] BYREF
  void *v19; // [rsp+110h] [rbp-28h] BYREF
  __int64 v20; // [rsp+118h] [rbp-20h] BYREF
  int v21; // [rsp+138h] [rbp+0h] BYREF
  int v22; // [rsp+148h] [rbp+10h] BYREF
  int v23; // [rsp+150h] [rbp+18h] BYREF

  v4 = *(_DWORD **)(a1 + 8);
  if ( *v4 > 2u )
  {
    v11 = (void *)*((_QWORD *)a2 + 6);
    v21 = a2[17];
    v22 = a2[4];
    v12 = (void *)*((_QWORD *)a2 + 15);
    v13 = (void *)*((_QWORD *)a2 + 14);
    v23 = a2[26];
    v14 = (void *)*((_QWORD *)a2 + 12);
    v15 = (void *)*((_QWORD *)a2 + 11);
    v6 = a2[20];
    v16 = (void *)*((_QWORD *)a2 + 9);
    v7 = a2[8];
    v17 = (void *)*((_QWORD *)a2 + 3);
    v8 = *a2;
    v18 = (void *)*((_QWORD *)a2 + 16);
    v9 = a2[16];
    v19 = (void *)*((_QWORD *)a2 + 7);
    v10 = a2[2];
    v20 = 0x1000000LL;
    return sub_140001D28(
             (int)v4,
             (int)&unk_1400D1561,
             a3,
             a4,
             (__int64)&v20,
             (__int64)&v10,
             &v19,
             (__int64)&v9,
             &v18,
             (__int64)&v8,
             &v17,
             (__int64)&v7,
             &v16,
             (__int64)&v6,
             &v15,
             &v14,
             (__int64)&v23,
             &v13,
             &v12,
             (__int64)&v22,
             (__int64)&v21,
             &v11);
  }
  return result;
}
