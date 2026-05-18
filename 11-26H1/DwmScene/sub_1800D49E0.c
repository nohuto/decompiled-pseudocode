/*
 * XREFs of sub_1800D49E0 @ 0x1800D49E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18001CD08 @ 0x18001CD08 (sub_18001CD08.c)
 *     sub_180024FEC @ 0x180024FEC (sub_180024FEC.c)
 *     sub_1800287AC @ 0x1800287AC (sub_1800287AC.c)
 */

int __fastcall sub_1800D49E0(__int64 a1, int a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  sub_180012AC4(a1 + 8);
  sub_180024FEC((__int64 *)(a1 + 96), &v7, &v9);
  if ( !*(_BYTE *)(v8 + 25) && a2 >= *(_DWORD *)(v8 + 32) && v8 != *(_QWORD *)(a1 + 96) )
  {
    v4 = sub_1800287AC((_QWORD *)(a1 + 96), v8);
    sub_18001CD08(v5, v4);
  }
  return Mtx_unlock((_Mtx_t)(a1 + 8));
}
