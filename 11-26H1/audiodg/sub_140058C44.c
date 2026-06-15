/*
 * XREFs of sub_140058C44 @ 0x140058C44
 * Callers:
 *     sub_140027A34 @ 0x140027A34 (sub_140027A34.c)
 *     sub_140027BB4 @ 0x140027BB4 (sub_140027BB4.c)
 *     sub_140028090 @ 0x140028090 (sub_140028090.c)
 *     sub_140058B20 @ 0x140058B20 (sub_140058B20.c)
 *     sub_140058B84 @ 0x140058B84 (sub_140058B84.c)
 *     sub_140088288 @ 0x140088288 (sub_140088288.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x14004A5CA (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_140058C44(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = (unsigned int *)o__errno(a1, a2, a3, a4);
    v9 = 22;
LABEL_5:
    *v8 = v9;
    o__invalid_parameter_noinfo();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = (unsigned int *)o__errno(a1, a2, a3, a4);
    v9 = 34;
    goto LABEL_5;
  }
  return 22LL;
}
