/*
 * XREFs of sub_140048584 @ 0x140048584
 * Callers:
 *     sub_140027BB4 @ 0x140027BB4 (sub_140027BB4.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x14004A5CA (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x1400ADF04 (memmove.c)
 */

__int64 __fastcall sub_140048584(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx

  if ( a4 )
  {
    if ( !a1 || !a3 )
    {
      v4 = (unsigned int *)o__errno(a1, a2, a3, a4);
      v5 = 22;
LABEL_4:
      *v4 = v5;
      o__invalid_parameter_noinfo();
      return v5;
    }
    if ( a2 < a4 )
    {
      v4 = (unsigned int *)o__errno(a1, a2, a3, a4);
      v5 = 34;
      goto LABEL_4;
    }
    memmove(a1, a3, a4);
  }
  return 0LL;
}
