/*
 * XREFs of ?value@?$optional@K@std@@QEGAAAEAKXZ @ 0x18010D92C
 * Callers:
 *     ?RotationWnfCallback@RotationWatcher@@SAJAEBV?$com_ptr_t@UIMessageSession@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18010D6AC (-RotationWnfCallback@RotationWatcher@@SAJAEBV-$com_ptr_t@UIMessageSession@@Uerr_exception_policy.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x1801A0198 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<unsigned long>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 4) )
    std::_Throw_bad_optional_access();
  return a1;
}
