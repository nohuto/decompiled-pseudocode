/*
 * XREFs of sub_1401AE748 @ 0x1401AE748
 * Callers:
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 *     sub_1401B43C0 @ 0x1401B43C0 (sub_1401B43C0.c)
 * Callees:
 *     sub_1401A8D44 @ 0x1401A8D44 (sub_1401A8D44.c)
 *     sub_1401AE8EC @ 0x1401AE8EC (sub_1401AE8EC.c)
 */

int __fastcall sub_1401AE748(__int64 a1, unsigned int a2, PVOID *a3)
{
  void *v6; // rax
  void *v7; // rbx
  void *v8; // rax
  void *v9; // rbx

  v6 = (void *)sub_1401AE8EC(a1, 0xFFFFFFFFLL);
  v7 = v6;
  if ( v6 )
  {
    sub_1401A8D44(v6, a3);
    ZwClose(v7);
  }
  v8 = (void *)sub_1401AE8EC(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    sub_1401A8D44(v8, a3);
    LODWORD(v8) = ZwClose(v9);
  }
  return (int)v8;
}
