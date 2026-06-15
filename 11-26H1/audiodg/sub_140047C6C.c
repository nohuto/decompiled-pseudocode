/*
 * XREFs of sub_140047C6C @ 0x140047C6C
 * Callers:
 *     sub_1400409B0 @ 0x1400409B0 (sub_1400409B0.c)
 *     sub_140078090 @ 0x140078090 (sub_140078090.c)
 * Callees:
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 */

void __fastcall sub_140047C6C(struct _RTL_CRITICAL_SECTION *a1)
{
  HANDLE LockSemaphore; // rcx

  LockSemaphore = a1[1].LockSemaphore;
  a1[1].LockSemaphore = 0LL;
  if ( LockSemaphore )
    sub_14004DB08();
  DeleteCriticalSection(a1);
}
