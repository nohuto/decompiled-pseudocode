/*
 * XREFs of sub_14004963C @ 0x14004963C
 * Callers:
 *     sub_14004967C @ 0x14004967C (sub_14004967C.c)
 * Callees:
 *     _o__crt_atexit @ 0x14004A58E (_o__crt_atexit.c)
 *     _o__register_onexit_function @ 0x14004A5EC (_o__register_onexit_function.c)
 */

__int64 __fastcall sub_14004963C(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx

  if ( (_QWORD)xmmword_1400E7CA0 == -1LL )
    v2 = o__crt_atexit();
  else
    v2 = o__register_onexit_function(&xmmword_1400E7CA0, a1);
  v3 = 0LL;
  if ( !v2 )
    return a1;
  return v3;
}
