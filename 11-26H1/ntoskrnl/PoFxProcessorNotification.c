/*
 * XREFs of PoFxProcessorNotification @ 0x1404CED80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PoFxProcessorNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 && *(_QWORD *)(v2 + 104) )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), a2) == 0 ? 0xC00000BB : 0;
  else
    return 3221225474LL;
}
