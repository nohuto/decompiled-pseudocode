/*
 * XREFs of ?ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z @ 0x1400543A0
 * Callers:
 *     ?FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z @ 0x140054340 (-FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z.c)
 * Callees:
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x14001C6A8 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ConsumerIFlipTokenSubmitted(
        CFlipManager::PresentHistory **this,
        struct CFlipManagerToken *a2)
{
  int v4; // r14d
  __int64 Win32kImportTable; // rax
  __int64 v6; // rbx
  void (__fastcall *v7)(_QWORD, __int64, bool); // rdi
  unsigned int TracingId; // eax
  CFlipManager::PresentHistory *v9; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  if ( !*((_BYTE *)this + 32) )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 10) + 104LL) + 52LL);
    Win32kImportTable = DxgkGetWin32kImportTable();
    v6 = *((_QWORD *)a2 + 12);
    v7 = *(void (__fastcall **)(_QWORD, __int64, bool))(Win32kImportTable + 184);
    TracingId = CFlipManager::GetTracingId((CFlipManager *)this);
    v7(TracingId, v6, v4 != 0);
    v9 = this[3];
    if ( v9 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v9);
      *((_QWORD *)NextEntry + 3) = *((_QWORD *)a2 + 14);
      *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 12);
      if ( v4 )
        *((_DWORD *)NextEntry + 10) = 4;
      else
        *((_DWORD *)NextEntry + 10) = 3;
    }
  }
}
