/*
 * XREFs of sub_1400444A0 @ 0x1400444A0
 * Callers:
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 * Callees:
 *     sub_1401A8F0C @ 0x1401A8F0C (sub_1401A8F0C.c)
 *     sub_1401AE8EC @ 0x1401AE8EC (sub_1401AE8EC.c)
 */

int __fastcall sub_1400444A0(__int64 a1, unsigned int a2)
{
  void *v4; // rax
  void *v5; // rbx
  void *v6; // rax
  void *v7; // rbx

  v4 = (void *)sub_1401AE8EC(a1, 0xFFFFFFFFLL);
  v5 = v4;
  if ( v4 )
  {
    sub_1401A8F0C(v4);
    ZwClose(v5);
  }
  v6 = (void *)sub_1401AE8EC(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    sub_1401A8F0C(v6);
    LODWORD(v6) = ZwClose(v7);
  }
  return (int)v6;
}
