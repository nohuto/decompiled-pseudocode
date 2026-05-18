/*
 * XREFs of sub_180054820 @ 0x180054820
 * Callers:
 *     <none>
 * Callees:
 *     sub_180054CA4 @ 0x180054CA4 (sub_180054CA4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180054820(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  Cnd_do_broadcast_at_thread_exit();
  sub_180054CA4(&v2);
  return 0LL;
}
