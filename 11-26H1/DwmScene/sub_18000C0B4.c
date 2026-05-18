/*
 * XREFs of sub_18000C0B4 @ 0x18000C0B4
 * Callers:
 *     sub_18000BC58 @ 0x18000BC58 (sub_18000BC58.c)
 * Callees:
 *     sub_18000C508 @ 0x18000C508 (sub_18000C508.c)
 *     sub_18000CC94 @ 0x18000CC94 (sub_18000CC94.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000CCA0 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__configure_narrow_argv @ 0x18000CD66 (_o__configure_narrow_argv.c)
 *     _o__initialize_narrow_environment @ 0x18000CDA2 (_o__initialize_narrow_environment.c)
 */

char sub_18000C0B4()
{
  int v0; // eax
  unsigned int v1; // eax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
  {
    sub_18000C508();
  }
  else
  {
    v1 = sub_18000CC94();
    if ( (unsigned int)o__configure_narrow_argv(v1) )
      return 0;
    o__initialize_narrow_environment();
  }
  return 1;
}
