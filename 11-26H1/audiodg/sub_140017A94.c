/*
 * XREFs of sub_140017A94 @ 0x140017A94
 * Callers:
 *     sub_1400179E0 @ 0x1400179E0 (sub_1400179E0.c)
 *     sub_140017AF0 @ 0x140017AF0 (sub_140017AF0.c)
 *     sub_140019060 @ 0x140019060 (sub_140019060.c)
 *     sub_140050370 @ 0x140050370 (sub_140050370.c)
 *     sub_1400601B0 @ 0x1400601B0 (sub_1400601B0.c)
 *     sub_140065B20 @ 0x140065B20 (sub_140065B20.c)
 *     sub_14007AE70 @ 0x14007AE70 (sub_14007AE70.c)
 *     sub_14007AF20 @ 0x14007AF20 (sub_14007AF20.c)
 *     sub_14007AFC0 @ 0x14007AFC0 (sub_14007AFC0.c)
 *     sub_14007B060 @ 0x14007B060 (sub_14007B060.c)
 *     sub_140088620 @ 0x140088620 (sub_140088620.c)
 *     sub_140089C20 @ 0x140089C20 (sub_140089C20.c)
 * Callees:
 *     sub_140017CE0 @ 0x140017CE0 (sub_140017CE0.c)
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_140017A94(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = a1;
  v1 = (__int64 *)sub_140017CE0(&v6, &v5);
  v2 = *v1;
  *v1 = 0LL;
  v3 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    sub_14001DBF0(v3);
  }
  return v2;
}
