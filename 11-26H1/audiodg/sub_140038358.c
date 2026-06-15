/*
 * XREFs of sub_140038358 @ 0x140038358
 * Callers:
 *     sub_1400382A0 @ 0x1400382A0 (sub_1400382A0.c)
 *     sub_14004C6F4 @ 0x14004C6F4 (sub_14004C6F4.c)
 *     sub_14004C76C @ 0x14004C76C (sub_14004C76C.c)
 *     sub_14004DE1C @ 0x14004DE1C (sub_14004DE1C.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x14004A5CA (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_140038358(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v7; // rax
  unsigned int v8; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_5;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_5:
    v7 = (unsigned int *)o__errno(a1, a2, a3, a4);
    v8 = 22;
LABEL_6:
    *v7 = v8;
    o__invalid_parameter_noinfo();
    return v8;
  }
  if ( a2 < a4 )
  {
    v7 = (unsigned int *)o__errno(a1, a2, a3, a4);
    v8 = 34;
    goto LABEL_6;
  }
  return 22LL;
}
