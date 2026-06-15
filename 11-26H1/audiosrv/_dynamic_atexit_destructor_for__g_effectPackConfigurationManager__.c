/*
 * XREFs of _dynamic_atexit_destructor_for__g_effectPackConfigurationManager__ @ 0x18016CC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 dynamic_atexit_destructor_for__g_effectPackConfigurationManager__()
{
  __int64 result; // rax

  if ( g_effectPackConfigurationManager )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_effectPackConfigurationManager + 16LL))(g_effectPackConfigurationManager);
  return result;
}
