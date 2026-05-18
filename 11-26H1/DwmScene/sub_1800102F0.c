/*
 * XREFs of sub_1800102F0 @ 0x1800102F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011370 @ 0x180011370 (sub_180011370.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char sub_1800102F0()
{
  __int64 (*v0)(void); // rax
  char v1; // bl

  v0 = (__int64 (*)(void))qword_1801C84F0;
  v1 = 0;
  if ( qword_1801C84F0 )
    return v0();
  v0 = (__int64 (*)(void))sub_180011370("RtlDllShutdownInProgress");
  qword_1801C84F0 = (__int64)v0;
  if ( v0 )
    return v0();
  return v1;
}
