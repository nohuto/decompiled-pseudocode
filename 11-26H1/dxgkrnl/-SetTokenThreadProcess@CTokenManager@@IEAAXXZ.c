/*
 * XREFs of ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x14005FAA4
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14001FA50 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::SetTokenThreadProcess(CTokenManager *this)
{
  __int64 CurrentProcess; // rdi
  __int64 Win32kImportTable; // rax

  CurrentProcess = PsGetCurrentProcess();
  if ( !*((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 104LL))(this);
    Win32kImportTable = DxgkGetWin32kImportTable();
    (*(void (**)(void))(Win32kImportTable + 464))();
    *((_QWORD *)this + 3) = CurrentProcess;
  }
}
