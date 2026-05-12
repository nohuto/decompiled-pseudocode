/*
 * XREFs of sub_140055FD0 @ 0x140055FD0
 * Callers:
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_14000ED78 @ 0x14000ED78 (sub_14000ED78.c)
 *     sub_14002B140 @ 0x14002B140 (sub_14002B140.c)
 *     sub_140051260 @ 0x140051260 (sub_140051260.c)
 *     sub_1400530F8 @ 0x1400530F8 (sub_1400530F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140055FD0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v2 = *(_QWORD *)(v1 + 96);
  else
    v2 = *(_QWORD *)(v1 + 48);
  return v2 + 24;
}
