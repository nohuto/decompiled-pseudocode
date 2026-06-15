/*
 * XREFs of sub_140038A9C @ 0x140038A9C
 * Callers:
 *     sub_14006425C @ 0x14006425C (sub_14006425C.c)
 *     sub_14006455C @ 0x14006455C (sub_14006455C.c)
 *     sub_1400645F8 @ 0x1400645F8 (sub_1400645F8.c)
 *     sub_14007C794 @ 0x14007C794 (sub_14007C794.c)
 *     sub_14007F090 @ 0x14007F090 (sub_14007F090.c)
 *     sub_14007F278 @ 0x14007F278 (sub_14007F278.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x14004A5CA (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_140038A9C(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v7; // rax
  unsigned int v8; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
  {
LABEL_3:
    v7 = (unsigned int *)o__errno(a1, a2, a3, a4);
    v8 = 22;
LABEL_4:
    *v7 = v8;
    o__invalid_parameter_noinfo();
    return v8;
  }
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
    goto LABEL_3;
  if ( a2 < a4 )
  {
    v7 = (unsigned int *)o__errno(a1, a2, a3, a4);
    v8 = 34;
    goto LABEL_4;
  }
  return 22LL;
}
