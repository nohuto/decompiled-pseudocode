/*
 * XREFs of sub_18000CA48 @ 0x18000CA48
 * Callers:
 *     sub_18000BC58 @ 0x18000BC58 (sub_18000BC58.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void sub_18000CA48()
{
  void (**i)(void); // rbx

  for ( i = qword_1801A1FA0; i < qword_1801A1FA0; ++i )
  {
    if ( *i )
      (*i)();
  }
}
