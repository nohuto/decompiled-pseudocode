/*
 * XREFs of sub_18007B6B8 @ 0x18007B6B8
 * Callers:
 *     sub_18004F120 @ 0x18004F120 (sub_18004F120.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18007ACB0 @ 0x18007ACB0 (sub_18007ACB0.c)
 *     sub_18007ACE8 @ 0x18007ACE8 (sub_18007ACE8.c)
 */

__int64 __fastcall sub_18007B6B8(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  volatile signed __int32 *v10; // rcx

  v2 = *(void **)(a1 + 1216);
  if ( v2 )
  {
    sub_18000E26C(v2, (*(_QWORD *)(a1 + 1232) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 1216) = 0LL;
    *(_QWORD *)(a1 + 1224) = 0LL;
    *(_QWORD *)(a1 + 1232) = 0LL;
  }
  v3 = *(void **)(a1 + 1192);
  if ( v3 )
  {
    sub_18000E26C(v3, (*(_QWORD *)(a1 + 1208) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 1192) = 0LL;
    *(_QWORD *)(a1 + 1200) = 0LL;
    *(_QWORD *)(a1 + 1208) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 1184);
  if ( v4 )
    sub_180010EC8(v4);
  v5 = *(_QWORD *)(a1 + 1160);
  if ( v5 )
    sub_180010EC8(v5);
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    sub_18007ACE8(v6, *(_QWORD *)(a1 + 112));
    sub_18000E26C(*(void **)(a1 + 104), 8 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 3));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  v7 = *(void **)(a1 + 80);
  if ( v7 )
  {
    sub_18000E26C(v7, (*(_QWORD *)(a1 + 96) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    sub_18007ACB0(v8, *(_QWORD *)(a1 + 64));
    sub_18000E26C(*(void **)(a1 + 56), 8 * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) >> 3));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  result = sub_1800129D0(a1 + 16);
  v10 = *(volatile signed __int32 **)(a1 + 8);
  if ( v10 )
    return sub_180010F00(v10);
  return result;
}
