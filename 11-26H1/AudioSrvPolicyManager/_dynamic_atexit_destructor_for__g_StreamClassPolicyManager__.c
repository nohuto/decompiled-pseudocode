/*
 * XREFs of _dynamic_atexit_destructor_for__g_StreamClassPolicyManager__ @ 0x18004E7B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 dynamic_atexit_destructor_for__g_StreamClassPolicyManager__()
{
  __int64 result; // rax

  if ( g_StreamClassPolicyManager )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_StreamClassPolicyManager + 16LL))(g_StreamClassPolicyManager);
  return result;
}
