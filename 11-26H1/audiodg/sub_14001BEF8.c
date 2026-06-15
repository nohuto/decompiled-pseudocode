/*
 * XREFs of sub_14001BEF8 @ 0x14001BEF8
 * Callers:
 *     sub_14001B584 @ 0x14001B584 (sub_14001B584.c)
 * Callees:
 *     sub_14001BF9C @ 0x14001BF9C (sub_14001BF9C.c)
 *     sub_14001C0D0 @ 0x14001C0D0 (sub_14001C0D0.c)
 *     sub_14001C154 @ 0x14001C154 (sub_14001C154.c)
 *     sub_14001CE88 @ 0x14001CE88 (sub_14001CE88.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14001BEF8(_QWORD *a1, HANDLE *a2)
{
  __int64 v4; // rax
  void *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = sub_140049338(232LL, &unk_1400C75FC);
  if ( v4 )
  {
    v5 = (void *)sub_14001BF9C(v4);
    v6 = sub_14001C154(v5, *a2);
    if ( v6 >= 0 )
      v6 = sub_14001CE88(v5, &xmmword_1400C59D8, a1);
    if ( v5 )
      sub_14001C0D0(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
