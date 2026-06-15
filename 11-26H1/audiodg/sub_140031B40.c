/*
 * XREFs of sub_140031B40 @ 0x140031B40
 * Callers:
 *     sub_140037A44 @ 0x140037A44 (sub_140037A44.c)
 *     sub_14007CD34 @ 0x14007CD34 (sub_14007CD34.c)
 *     sub_14007D840 @ 0x14007D840 (sub_14007D840.c)
 *     sub_14007E4A0 @ 0x14007E4A0 (sub_14007E4A0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x14004A5CA (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x1400ADF04 (memmove.c)
 */

__int64 __fastcall sub_140031B40(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx

  if ( a4 )
  {
    if ( !a1 || !a3 )
    {
      v4 = (unsigned int *)o__errno(a1, a2, a3, a4);
      v5 = 22;
LABEL_5:
      *v4 = v5;
      o__invalid_parameter_noinfo();
      return v5;
    }
    if ( a2 < a4 )
    {
      v4 = (unsigned int *)o__errno(a1, a2, a3, a4);
      v5 = 34;
      goto LABEL_5;
    }
    memmove(a1, a3, a4);
  }
  return 0LL;
}
