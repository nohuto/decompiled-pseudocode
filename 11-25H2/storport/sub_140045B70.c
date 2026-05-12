/*
 * XREFs of sub_140045B70 @ 0x140045B70
 * Callers:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140045B70(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // ecx
  char *v3; // rdx

  if ( (*(_BYTE *)(a1 + 4660) & 1) == 0 )
    return 0;
  if ( *a2 >= (unsigned int)dword_140168668 )
    return 0;
  v2 = *((unsigned __int8 *)a2 + 2);
  if ( v2 >= *((_DWORD *)qword_140168520 + *a2) )
    return 0;
  v3 = (char *)P + 128 * (unsigned __int64)(v2 + (*a2 << 6));
  if ( *((_DWORD *)v3 + 24) )
    return 0;
  _InterlockedExchange((volatile __int32 *)v3 + 24, 2);
  return 1;
}
