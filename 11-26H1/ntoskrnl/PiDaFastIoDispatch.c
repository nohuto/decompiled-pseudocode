/*
 * XREFs of PiDaFastIoDispatch @ 0x140A73E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PiDaFastIoDispatch(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 < 5 && qword_140004500[3 * v2] )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
