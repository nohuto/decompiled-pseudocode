/*
 * XREFs of sub_18008C030 @ 0x18008C030
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 */

__int64 __fastcall sub_18008C030(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]

  sub_1800116C8(*(_QWORD *)(a2 + 3984), &v13);
  sub_180011F5C((_QWORD *)(a1 + 200), &v13);
  if ( v14 )
    sub_180010EC8(v14);
  v10 = *(_QWORD *)(a1 + 200);
  v11 = sub_180011CC4(&v13, "ImageProcessingEffectPlanarReflection");
  sub_1800292C4(v10, (__int64)v11);
  return sub_180027EC8(*(_QWORD *)(a1 + 200), a3, a4, a5, a6, a2);
}
