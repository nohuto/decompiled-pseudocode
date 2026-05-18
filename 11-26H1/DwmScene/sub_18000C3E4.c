/*
 * XREFs of sub_18000C3E4 @ 0x18000C3E4
 * Callers:
 *     atexit @ 0x18000C424 (atexit.c)
 * Callees:
 *     _o__crt_atexit @ 0x18000CD72 (_o__crt_atexit.c)
 *     _o__register_onexit_function @ 0x18000CDEC (_o__register_onexit_function.c)
 */

__int64 __fastcall sub_18000C3E4(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx

  if ( (_QWORD)xmmword_1801C7D80 == -1LL )
    v2 = o__crt_atexit();
  else
    v2 = o__register_onexit_function(&xmmword_1801C7D80, a1);
  v3 = 0LL;
  if ( !v2 )
    return a1;
  return v3;
}
