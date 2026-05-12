/*
 * XREFs of sub_1400EC398 @ 0x1400EC398
 * Callers:
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 *     sub_1400FA008 @ 0x1400FA008 (sub_1400FA008.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400EC398(__int64 a1)
{
  char v1; // r10
  unsigned int v2; // r8d
  unsigned int *v3; // rax
  unsigned int v4; // ecx

  v1 = *(_BYTE *)(*(_QWORD *)(a1 + 592) + 77LL);
  if ( !v1 || (v2 = (1 << v1) * (1 << ((*(_BYTE *)(a1 + 590) & 0xF) + 12)), v2 > 0x200000) )
    v2 = 0x200000;
  v3 = *(unsigned int **)(a1 + 1048);
  if ( v3 )
  {
    if ( *v3 && v2 >= *v3 )
      v2 = *v3;
    v4 = v3[5];
    if ( v4 && v4 < v2 )
      return v3[5];
  }
  return v2;
}
