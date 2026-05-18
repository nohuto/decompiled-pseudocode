/*
 * XREFs of sub_1800C1880 @ 0x1800C1880
 * Callers:
 *     sub_1800C0664 @ 0x1800C0664 (sub_1800C0664.c)
 * Callees:
 *     sub_1800425BC @ 0x1800425BC (sub_1800425BC.c)
 */

_BOOL8 __fastcall sub_1800C1880(__int64 *a1, _DWORD *a2)
{
  _QWORD *v2; // rax
  _DWORD *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_1800425BC(a1, v7, a2);
  v4 = 0LL;
  v5 = v2[2];
  if ( !*(_BYTE *)(v5 + 25) )
    return *v3 >= *(_DWORD *)(v5 + 32);
  return v4;
}
