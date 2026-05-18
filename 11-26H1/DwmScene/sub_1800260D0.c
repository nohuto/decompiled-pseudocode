/*
 * XREFs of sub_1800260D0 @ 0x1800260D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180024D18 @ 0x180024D18 (sub_180024D18.c)
 */

void __fastcall sub_1800260D0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*(_DWORD *)(a1 + 3884) == 1 )
  {
    sub_180012B20(&v4);
    v2 = v4;
    *(_QWORD *)(a1 + 448) = v4;
    v3 = v2 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 480) = v3;
    sub_180024D18(v3);
    sub_18001DCFC(&qword_1801BD228, 3);
  }
}
