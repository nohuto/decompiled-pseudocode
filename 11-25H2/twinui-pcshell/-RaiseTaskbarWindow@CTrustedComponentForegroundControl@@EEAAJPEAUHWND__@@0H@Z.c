/*
 * XREFs of ?RaiseTaskbarWindow@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@0H@Z @ 0x1801C6A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::RaiseTaskbarWindow(
        CTrustedComponentForegroundControl *this,
        HWND a2,
        HWND a3,
        int a4)
{
  return (*(__int64 (__fastcall **)(PVOID, HWND, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                              + 32LL))(
           CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
           a2,
           a3,
           a4 != 0 ? 6 : 1);
}
