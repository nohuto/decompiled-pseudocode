/*
 * XREFs of PiDaFastIoDispatch @ 0x140A66EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PiDaFastIoDispatch(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 < 5 && qword_1400044E0[3 * v2] )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
