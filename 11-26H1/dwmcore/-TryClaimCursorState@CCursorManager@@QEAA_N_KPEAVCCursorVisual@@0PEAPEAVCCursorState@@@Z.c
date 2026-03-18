/*
 * XREFs of ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x18028F5E4
 * Callers:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18021F828 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x18028F4BC (-EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z.c)
 */

bool __fastcall CCursorManager::TryClaimCursorState(
        CCursorManager *this,
        unsigned __int64 a2,
        struct CCursorVisual *a3,
        __int64 a4,
        struct CCursorState **a5)
{
  CCursorManager *v7; // rcx
  struct CCursorState *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF
  struct CCursorState *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = &g_CursorManager;
  EnterCriticalSection(&g_CursorManager);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v11);
  if ( (int)CCursorManager::EnsureCursorState(v7, a2, &v11) >= 0 )
  {
    EnterCriticalSection(&g_CursorManager);
    v8 = v11;
    if ( !*((_QWORD *)v11 + 9) )
    {
      *((_QWORD *)v11 + 9) = a3;
      *((_QWORD *)v8 + 8) = *((_QWORD *)a3 + 3);
      LeaveCriticalSection(&g_CursorManager);
      goto LABEL_5;
    }
    LeaveCriticalSection(&g_CursorManager);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v11);
  }
  v8 = v11;
LABEL_5:
  v11 = 0LL;
  *a5 = v8;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v8 != 0LL;
}
