/*
 * XREFs of sub_18000CA8C @ 0x18000CA8C
 * Callers:
 *     sub_18000BD70 @ 0x18000BD70 (sub_18000BD70.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void sub_18000CA8C()
{
  void (**i)(void); // rbx

  for ( i = qword_1801A1FB0; i < qword_1801A1FB0; ++i )
  {
    if ( *i )
      (*i)();
  }
}
