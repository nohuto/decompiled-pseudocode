/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802016C8
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18009AAF0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Run@CKstBase@@AEAAKXZ @ 0x180150618 (-Run@CKstBase@@AEAAKXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180150EAC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801D47E0 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180223BB0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x1802016E4 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  wil::details::ReportFailure_GetLastError<3>((_DWORD)this, (_DWORD)a2, a3, (_DWORD)a4);
}
