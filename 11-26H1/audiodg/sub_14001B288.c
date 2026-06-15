/*
 * XREFs of sub_14001B288 @ 0x14001B288
 * Callers:
 *     sub_14001B16C @ 0x14001B16C (sub_14001B16C.c)
 * Callees:
 *     sub_14001A3A8 @ 0x14001A3A8 (sub_14001A3A8.c)
 *     sub_14001B4A8 @ 0x14001B4A8 (sub_14001B4A8.c)
 *     sub_14001B584 @ 0x14001B584 (sub_14001B584.c)
 *     sub_14001C260 @ 0x14001C260 (sub_14001C260.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14001B288(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = sub_140049338(104LL, &unk_1400C75FC);
  if ( v4 )
  {
    v5 = sub_14001B4A8(v4);
    v6 = sub_14001B584(v5, *a2);
    if ( v6 >= 0 )
      v6 = sub_14001A3A8(v5, &dword_1400C5F88, a1);
    if ( v5 )
      sub_14001C260(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
