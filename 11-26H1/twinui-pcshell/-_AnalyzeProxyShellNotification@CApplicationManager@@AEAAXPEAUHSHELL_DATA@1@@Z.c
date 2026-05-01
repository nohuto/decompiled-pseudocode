/*
 * XREFs of ?_AnalyzeProxyShellNotification@CApplicationManager@@AEAAXPEAUHSHELL_DATA@1@@Z @ 0x180163A38
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800437F8 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 */

void __fastcall CApplicationManager::_AnalyzeProxyShellNotification(
        CApplicationManager *this,
        struct CApplicationManager::HSHELL_DATA *a2)
{
  HWND v3; // rdi
  unsigned __int64 v4; // rcx
  _DWORD v5[6]; // [rsp+20h] [rbp-18h]

  v3 = (HWND)*((_QWORD *)a2 + 1);
  if ( dword_1808DDE88 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1808DDE88);
    if ( dword_1808DDE88 == -1 )
    {
      word_1808DDE8C = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_1808DDE88);
    }
  }
  if ( (unsigned __int16)GetClassLongW(v3, -32) == word_1808DDE8C )
  {
    if ( *(_QWORD *)a2 == 17LL || *(_QWORD *)a2 == 21LL )
    {
      *((_QWORD *)a2 + 1) = 0LL;
    }
    else
    {
      *((_QWORD *)a2 + 5) = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 1) = HungWindowFromGhostWindow();
    }
  }
  if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
  {
    v5[0] = 20;
    v4 = 0LL;
    v5[1] = 19;
    v5[2] = 23;
    v5[3] = 32;
    while ( v4 < 4 )
    {
      if ( *(_QWORD *)a2 == v5[v4] )
        return;
      ++v4;
    }
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
