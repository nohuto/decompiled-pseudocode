/*
 * XREFs of ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x14006E014
 * Callers:
 *     NtFlipObjectPresentCancel @ 0x1400A4050 (NtFlipObjectPresentCancel.c)
 * Callees:
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x14001C6A8 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::PresentCancel(CFlipManager *this, __int64 a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  CFlipManager *v9; // rcx
  CFlipManager **v10; // rdx
  void (__fastcall *v11)(_QWORD, __int64); // rbx
  unsigned int TracingId; // eax
  CFlipManager::PresentHistory *v13; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(257LL, 40LL, 1668301638LL);
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v7 = *((_QWORD *)this + 29);
    v8 = (_QWORD *)(Pool2 + 8);
    v6[2] = v8;
    *v8 = v8;
    *v6 = &CFlipPresentCancel::`vftable';
    v6[3] = v7;
    v9 = (CFlipManager *)(v6 + 1);
    v6[4] = a2;
    v10 = (CFlipManager **)*((_QWORD *)this + 25);
    if ( *v10 != (CFlipManager *)((char *)this + 192) )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)this + 192;
    v6[2] = v10;
    *v10 = v9;
    *((_QWORD *)this + 25) = v9;
    v11 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 312);
    TracingId = CFlipManager::GetTracingId(this);
    v11(TracingId, a2);
    v13 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
    if ( v13 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v13);
      *((_DWORD *)NextEntry + 10) = 11;
      *((_QWORD *)NextEntry + 2) = v6[3];
      *((_QWORD *)NextEntry + 4) = v6[4];
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
