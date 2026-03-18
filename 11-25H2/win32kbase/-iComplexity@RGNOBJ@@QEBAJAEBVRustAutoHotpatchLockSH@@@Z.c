/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C62D4
 * Callers:
 *     ?vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C63A0 (-vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVR.c)
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this, const struct RustAutoHotpatchLockSH *a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 0;
  v3 = *(_QWORD *)this;
  if ( qword_1402A10B0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1402A10B0 + 72LL))((v3 + 24) & -(__int64)(v3 != 0));
  result = 1LL;
  if ( *(_DWORD *)(v3 + 48) != 1 )
  {
    LOBYTE(v2) = (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v3 + 24)) > 0x38;
    return (unsigned int)(v2 + 2);
  }
  return result;
}
