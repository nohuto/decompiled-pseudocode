/*
 * XREFs of sub_140905930 @ 0x140905930
 * Callers:
 *     sub_1409093BC @ 0x1409093BC (sub_1409093BC.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     sub_1409077D4 @ 0x1409077D4 (sub_1409077D4.c)
 *     sub_140909110 @ 0x140909110 (sub_140909110.c)
 */

__int64 __fastcall sub_140905930(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v4; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v8 = 0LL;
  v7 = -1;
  v4 = sub_140909110((int)a1 + 8, v2, 8, (unsigned int)&v8, (__int64)&v7);
  if ( v4 >= 0 )
  {
    memmove(
      (void *)(*(_QWORD *)(a1 + 24) + (unsigned int)(v7 * *(_DWORD *)(a1 + 8))),
      (const void *)(*(_QWORD *)(a1 + 24) + (unsigned int)(*(_DWORD *)(a1 + 8) * (v7 + 1))),
      (unsigned int)(*(_DWORD *)(a1 + 8) * (*(_DWORD *)(a1 + 12) - v7 - 1)));
    v5 = v8;
    --*(_DWORD *)(a1 + 12);
    sub_1409077D4(a1, v5);
  }
  return (unsigned int)v4;
}
