/*
 * XREFs of sub_140055AB4 @ 0x140055AB4
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140055AB4(__int64 a1, unsigned int a2, const void *a3)
{
  _OWORD *v6; // rcx

  if ( *(_DWORD *)(a1 + 376) )
    return 3221225659LL;
  if ( a2 <= 0x10 )
  {
    v6 = (_OWORD *)(a1 + 380);
    *v6 = 0LL;
    memmove(v6, a3, a2);
    *(_DWORD *)(a1 + 376) = a2;
  }
  *(_BYTE *)(a1 + 248) &= 0xCFu;
  return 0LL;
}
