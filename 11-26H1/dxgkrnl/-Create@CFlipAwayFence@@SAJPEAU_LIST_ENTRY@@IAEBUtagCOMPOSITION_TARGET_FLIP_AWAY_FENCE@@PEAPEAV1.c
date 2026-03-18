/*
 * XREFs of ?Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1@@Z @ 0x1400A293C
 * Callers:
 *     ?IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x1400A2288 (-IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GCFlipAwayFence@@QEAAPEAXI@Z @ 0x1400A1AF0 (--_GCFlipAwayFence@@QEAAPEAXI@Z.c)
 *     ?Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1400A2A20 (-Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipAwayFence::Create(
        struct _LIST_ENTRY *a1,
        int a2,
        const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a3,
        struct CFlipAwayFence **a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 Win32kImportTable; // rax
  int v12; // edi

  v8 = operator new(0x38uLL, 0x61664D54u, 256LL);
  v9 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 16) = a2;
    *(_QWORD *)(v8 + 20) = *(_QWORD *)a3;
    *(_QWORD *)(v8 + 32) = *((_QWORD *)a3 + 2);
    *(_DWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = 0LL;
    Flink = a1->Flink;
    if ( a1->Flink->Blink != a1 )
      __fastfail(3u);
    *(_QWORD *)v9 = Flink;
    *(_QWORD *)(v9 + 8) = a1;
    Flink->Blink = (struct _LIST_ENTRY *)v9;
    a1->Flink = (struct _LIST_ENTRY *)v9;
    Win32kImportTable = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(_QWORD, _QWORD))(Win32kImportTable + 400))(*(_QWORD *)(v9 + 32), *(_QWORD *)(v9 + 20));
    v12 = CFlipAwayFence::Initialize((CFlipAwayFence *)v9, a3);
    if ( v12 < 0 )
      CFlipAwayFence::`scalar deleting destructor'((CFlipAwayFence *)v9);
    else
      *a4 = (struct CFlipAwayFence *)v9;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
