/*
 * XREFs of ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1801A91B4
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801A9100 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180026CB8 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800925C0 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180092E60 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180094C7C (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1)
{
  struct CInputManager *v1; // rdi
  int v2; // ebx
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, __int64, CDesktopTree **); // r9
  CDesktopTree *v7; // rcx
  int v8; // eax
  int v9; // eax
  CDesktopTree *v11; // [rsp+38h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp-10h]
  CDesktopTree *v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h]

  v1 = CInputManager::s_pInputManager;
  v2 = 0;
  if ( CInputManager::s_pInputManager )
  {
    v4 = (__int64 *)*((_QWORD *)CInputManager::s_pInputManager + 2);
    v13 = 0LL;
    HIDWORD(v14) = -2;
    v5 = *v4;
    v11 = 0LL;
    v12 = 1;
    v6 = *(__int64 (__fastcall **)(__int64 *, __int64, CDesktopTree **))(v5 + 64);
    LODWORD(v14) = *((_DWORD *)a1 + 4);
    v2 = v6(v4, v14, &v11);
    if ( v12 )
    {
      v7 = v13;
      v13 = v11;
      if ( v7 )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v7);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362D20, 2u, v2, 0x184u, 0LL);
    }
    else
    {
      v8 = CDesktopTree::CleanTreeAndLockForRead(v13);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362D20, 2u, v8, 0x187u, 0LL);
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(&v13);
        return v2 >= 0;
      }
      v9 = CHitTestContext::HitTestTreeWalk(
             (__int64)v1 + 80,
             (__int64)v13,
             (float)*((int *)a1 + 1),
             (float)*((int *)a1 + 2),
             2);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362D20, 2u, v9, 0x191u, 0LL);
      CTreeLock::ReleaseShared((RTL_SRWLOCK *)(*((_QWORD *)v13 + 3) + 5696LL));
    }
    if ( v13 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v13);
  }
  return v2 >= 0;
}
