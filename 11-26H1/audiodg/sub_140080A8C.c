/*
 * XREFs of sub_140080A8C @ 0x140080A8C
 * Callers:
 *     sub_1400B3678 @ 0x1400B3678 (sub_1400B3678.c)
 * Callees:
 *     sub_14000C3C4 @ 0x14000C3C4 (sub_14000C3C4.c)
 *     sub_14002C694 @ 0x14002C694 (sub_14002C694.c)
 */

void __fastcall sub_140080A8C(__int64 a1)
{
  __int64 *v1; // rax
  __int64 **v2; // r10

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = (__int64 *)sub_14002C694(**(__int64 *****)a1, *(_QWORD ***)(a1 + 8));
    sub_14000C3C4(v2, v1);
  }
}
