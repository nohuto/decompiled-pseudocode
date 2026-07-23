/*
 * XREFs of WriteRegisterWithIndex8 @ 0x140727430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WriteRegisterWithIndex8(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax

  v3 = (unsigned __int8)a2;
  LOBYTE(a2) = a3;
  return guard_dispatch_icall_no_overrides(*(_QWORD *)a1 + v3 * (unsigned int)*(unsigned __int8 *)(a1 + 14), a2);
}
