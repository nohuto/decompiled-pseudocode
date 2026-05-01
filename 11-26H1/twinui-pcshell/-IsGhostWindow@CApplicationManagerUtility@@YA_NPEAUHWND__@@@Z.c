/*
 * XREFs of ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18017391C
 * Callers:
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801F024C (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 */

bool __fastcall CApplicationManagerUtility::IsGhostWindow(HWND hWnd, HWND a2)
{
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
  return (unsigned __int16)GetClassLongW(hWnd, -32) == (unsigned __int16)word_1808DDE8C;
}
