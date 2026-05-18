/*
 * XREFs of sub_1800391E4 @ 0x1800391E4
 * Callers:
 *     sub_18003A374 @ 0x18003A374 (sub_18003A374.c)
 *     sub_180060724 @ 0x180060724 (sub_180060724.c)
 *     sub_18008D758 @ 0x18008D758 (sub_18008D758.c)
 *     sub_18008D824 @ 0x18008D824 (sub_18008D824.c)
 * Callees:
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 *     sub_18001C574 @ 0x18001C574 (sub_18001C574.c)
 */

_QWORD *__fastcall sub_1800391E4(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  void *v4; // rcx

  v2 = a2;
  if ( a2 > 0x100 )
  {
    if ( a2 == 0x7FFFFFFFFFFFFFFFLL )
      v2 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (unsigned __int64)v2 <= 0xFFFFFFFFFFFFFFFLL )
    {
      while ( v2 > 0 )
      {
        v4 = sub_18001C540(16 * v2);
        if ( v4 )
        {
          if ( (unsigned __int64)v2 <= 0x100 )
            goto LABEL_12;
          goto LABEL_13;
        }
        v2 /= 2LL;
      }
    }
    v4 = 0LL;
LABEL_12:
    sub_18001C574(v4);
    v4 = a1 + 2;
    v2 = 256LL;
  }
  else
  {
    v4 = a1 + 2;
  }
LABEL_13:
  *a1 = v4;
  a1[1] = v2;
  return a1;
}
