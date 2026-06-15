/*
 * XREFs of sub_14000D7A4 @ 0x14000D7A4
 * Callers:
 *     sub_14000D020 @ 0x14000D020 (sub_14000D020.c)
 *     sub_14000D4D0 @ 0x14000D4D0 (sub_14000D4D0.c)
 *     sub_14000D640 @ 0x14000D640 (sub_14000D640.c)
 *     sub_140025C58 @ 0x140025C58 (sub_140025C58.c)
 *     sub_140025D60 @ 0x140025D60 (sub_140025D60.c)
 *     sub_1400278DC @ 0x1400278DC (sub_1400278DC.c)
 *     sub_140075080 @ 0x140075080 (sub_140075080.c)
 *     sub_1400AF6EB @ 0x1400AF6EB (sub_1400AF6EB.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x14004A5CA (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x1400ADF04 (memmove.c)
 */

__int64 __fastcall sub_14000D7A4(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int v4; // ebx
  unsigned int *v5; // rax

  v4 = 0;
  if ( a4 )
  {
    if ( a1 && a3 )
    {
      if ( a2 >= a4 )
      {
        memmove(a1, a3, a4);
        return sub_14000DC30(v4, a2, a3, a4);
      }
      v5 = (unsigned int *)o__errno(a1, a2, a3, a4);
      v4 = 34;
    }
    else
    {
      v5 = (unsigned int *)o__errno(a1, a2, a3, a4);
      v4 = 22;
    }
    *v5 = v4;
    o__invalid_parameter_noinfo();
  }
  return sub_14000DC30(v4, a2, a3, a4);
}
