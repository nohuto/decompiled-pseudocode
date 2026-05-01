/*
 * XREFs of ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x180228688
 * Callers:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1800588F8 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x1802FB218 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_0758695e4094b81417177289bdc77534___.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManagerUtility::NotifyWindow(HWND a1, unsigned int a2, __int64 a3, __int64 a4, BOOL a5)
{
  BOOL v9; // esi
  unsigned int v10; // edi
  int Ptr; // ebx

  if ( dword_1808DDED8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1808DDED8);
    if ( dword_1808DDED8 == -1 )
    {
      qword_1808DA4F8[0] = (__int64)PostMessageW;
      qword_1808DA500 = (__int64)SendNotifyMessageW;
      Init_thread_footer(&dword_1808DDED8);
    }
  }
  v9 = a5;
  v10 = 0;
  if ( a5 )
  {
    Ptr = (int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
    v9 = GetWindowThreadProcessId(a1, 0LL) != Ptr;
  }
  if ( !((unsigned int (__fastcall *)(HWND, _QWORD, __int64, __int64))qword_1808DA4F8[v9])(a1, a2, a3, a4) )
    return (unsigned int)ResultFromKnownLastError();
  return v10;
}
