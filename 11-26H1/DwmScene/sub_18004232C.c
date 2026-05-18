/*
 * XREFs of sub_18004232C @ 0x18004232C
 * Callers:
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 *     sub_18005ABFC @ 0x18005ABFC (sub_18005ABFC.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_18007C390 @ 0x18007C390 (sub_18007C390.c)
 *     sub_18008022C @ 0x18008022C (sub_18008022C.c)
 *     sub_1800823B4 @ 0x1800823B4 (sub_1800823B4.c)
 *     sub_18008A5FC @ 0x18008A5FC (sub_18008A5FC.c)
 *     sub_18008B370 @ 0x18008B370 (sub_18008B370.c)
 *     sub_18008F8D0 @ 0x18008F8D0 (sub_18008F8D0.c)
 *     sub_1800926D0 @ 0x1800926D0 (sub_1800926D0.c)
 * Callees:
 *     sub_1800128EC @ 0x1800128EC (sub_1800128EC.c)
 *     sub_1800129A0 @ 0x1800129A0 (sub_1800129A0.c)
 */

_QWORD *__fastcall sub_18004232C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !v2 || !sub_1800128EC(v2) )
    sub_1800129A0();
  *v3 = *v4;
  v3[1] = v4[1];
  return v3;
}
