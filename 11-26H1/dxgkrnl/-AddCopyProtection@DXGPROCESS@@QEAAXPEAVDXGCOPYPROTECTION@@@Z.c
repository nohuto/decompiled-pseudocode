/*
 * XREFs of ?AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x140070128
 * Callers:
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1401A23B0 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESS::AddCopyProtection(DXGPROCESS *this, struct DXGCOPYPROTECTION *a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax

  if ( !DXGFASTMUTEX::IsOwner((DXGPROCESS *)((char *)this + 360)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 842;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCopyProtectionMutexOwner()", 842LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (_QWORD *)((char *)this + 344);
  v5 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v6 = *((_QWORD *)this + 43);
  if ( *(DXGPROCESS **)(v6 + 8) != (DXGPROCESS *)((char *)this + 344) )
    __fastfail(3u);
  *v5 = v6;
  *(_QWORD *)((((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)) + 8) = v4;
  *(_QWORD *)(v6 + 8) = v5;
  *v4 = v5;
}
