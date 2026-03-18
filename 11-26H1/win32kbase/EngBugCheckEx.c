/*
 * XREFs of EngBugCheckEx @ 0x1401C0710
 * Callers:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003366C (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400B6D54 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1400FC590 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x140102E20 (-GreEncodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     GreSuspendDirectDraw @ 0x140190090 (GreSuspendDirectDraw.c)
 *     ?Create@GdiHandleManager@Cxx@@SAPEAV12@IPEAU_ENTRY@@IE@Z @ 0x140191628 (-Create@GdiHandleManager@Cxx@@SAPEAV12@IPEAU_ENTRY@@IE@Z.c)
 *     GreLockPointer @ 0x1401927A0 (GreLockPointer.c)
 *     GreUnlockPointer @ 0x140199DD0 (GreUnlockPointer.c)
 *     GreUpdateSharedDevCaps @ 0x1401C06BC (GreUpdateSharedDevCaps.c)
 *     ??0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z @ 0x1401F3C48 (--0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall __noreturn EngBugCheckEx(ULONG BugCheckCode, ULONG_PTR P1, ULONG_PTR P2, ULONG_PTR P3, ULONG_PTR P4)
{
  KeBugCheckEx(BugCheckCode, P1, P2, P3, P4);
}
