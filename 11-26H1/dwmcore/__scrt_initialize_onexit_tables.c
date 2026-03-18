/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x1802204A4
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180220340 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180220A40 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x1802211B8 (__scrt_is_ucrt_dll_in_use.c)
 *     __scrt_fastfail @ 0x1802211E0 (__scrt_fastfail.c)
 *     _initialize_onexit_table_0 @ 0x18022153A (_initialize_onexit_table_0.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1803DD550 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x18022052ELL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1803DD538._first = *(_OWORD *)&Table._first;
      stru_1803DD538._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table_0(&Table) || initialize_onexit_table_0(&stru_1803DD538) )
    {
      return 0;
    }
    byte_1803DD550 = 1;
  }
  return 1;
}
