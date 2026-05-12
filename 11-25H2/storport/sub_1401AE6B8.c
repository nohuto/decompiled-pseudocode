/*
 * XREFs of sub_1401AE6B8 @ 0x1401AE6B8
 * Callers:
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 * Callees:
 *     sub_1401A8C04 @ 0x1401A8C04 (sub_1401A8C04.c)
 *     sub_1401AE8EC @ 0x1401AE8EC (sub_1401AE8EC.c)
 */

int __fastcall sub_1401AE6B8(__int64 a1, unsigned int a2)
{
  void *v4; // rax
  void *v5; // rbx
  void *v6; // rax
  void *v7; // rbx

  v4 = (void *)sub_1401AE8EC(a1, 0xFFFFFFFFLL);
  v5 = v4;
  if ( v4 )
  {
    sub_1401A8C04(v4);
    ZwClose(v5);
  }
  v6 = (void *)sub_1401AE8EC(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    sub_1401A8C04(v6);
    LODWORD(v6) = ZwClose(v7);
  }
  return (int)v6;
}
