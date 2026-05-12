/*
 * XREFs of sub_1401B0E68 @ 0x1401B0E68
 * Callers:
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_1400C9020 @ 0x1400C9020 (sub_1400C9020.c)
 * Callees:
 *     sub_140040648 @ 0x140040648 (sub_140040648.c)
 */

void __fastcall sub_1401B0E68(__int64 a1, char a2)
{
  void *v3; // rcx
  void *v4; // rcx

  if ( a2 )
    sub_140040648(a1);
  v3 = *(void **)(a1 + 64);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x43506152u);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  if ( *(_QWORD *)(a1 + 232) )
    *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)a1 = 0LL;
  v4 = *(void **)(a1 + 240);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x454D6152u);
    *(_QWORD *)(a1 + 240) = 0LL;
  }
}
