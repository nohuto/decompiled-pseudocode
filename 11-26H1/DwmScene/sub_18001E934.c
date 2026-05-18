/*
 * XREFs of sub_18001E934 @ 0x18001E934
 * Callers:
 *     sub_18004F2B8 @ 0x18004F2B8 (sub_18004F2B8.c)
 *     sub_1800876BC @ 0x1800876BC (sub_1800876BC.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

void **__fastcall sub_18001E934(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  void **result; // rax
  char v4; // dl
  __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 >= *(_QWORD *)(a1 + 24) )
    return sub_18001E4B0((void **)a1, a2, v2, a2);
  *(_QWORD *)(a1 + 16) = v2 + 1;
  result = (void **)sub_1800148EC(a1);
  *((_BYTE *)result + v5) = v4;
  *((_BYTE *)result + v5 + 1) = 0;
  return result;
}
