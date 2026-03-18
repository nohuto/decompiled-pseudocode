/*
 * XREFs of ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18025FB5C
 * Callers:
 *     ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x1802178A4 (-ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPUL.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x18013EF70 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180226B1C (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyExperienceInput(__int64 a1)
{
  unsigned int v1; // esi
  __int128 *v2; // rdi
  int WeakReference; // eax
  __int64 v5; // r14
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rcx
  int updated; // eax
  struct IUnknownWeakRef *v17[2]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v18; // [rsp+40h] [rbp-69h] BYREF
  int v19; // [rsp+48h] [rbp-61h]
  __int128 v20; // [rsp+50h] [rbp-59h]
  __int128 v21; // [rsp+60h] [rbp-49h]
  __int128 v22; // [rsp+70h] [rbp-39h]
  __int128 v23; // [rsp+80h] [rbp-29h]
  __int128 v24; // [rsp+90h] [rbp-19h]
  __int128 v25; // [rsp+A0h] [rbp-9h]
  __int128 v26; // [rsp+B0h] [rbp+7h]
  __int128 v27; // [rsp+C0h] [rbp+17h]
  __int64 v28; // [rsp+D0h] [rbp+27h]
  void *retaddr; // [rsp+108h] [rbp+5Fh]

  v1 = 0;
  v2 = (__int128 *)(a1 + 584);
  if ( !*(_DWORD *)(a1 + 584) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( !*(_QWORD *)(a1 + 728) )
  {
    v17[0] = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v17);
    WeakReference = CResource::GetWeakReference((CResource *)a1, v17);
    if ( WeakReference < 0 )
      ModuleFailFastForHRESULT(WeakReference, retaddr);
    *(struct IUnknownWeakRef **)(a1 + 728) = v17[0];
    v17[0] = 0LL;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v17);
  }
  v5 = *(_QWORD *)(a1 + 728);
  if ( v5 )
  {
    memset_0(&v18, 0, 0x98uLL);
    v6 = *v2;
    v18 = v5;
    v7 = v2[1];
    v19 = 2;
    v20 = v6;
    v8 = v2[2];
    v21 = v7;
    v9 = v2[3];
    v22 = v8;
    v10 = v2[4];
    v23 = v9;
    v11 = v2[5];
    v24 = v10;
    v12 = v2[6];
    v25 = v11;
    v26 = v12;
    v13 = *((_QWORD *)v2 + 16);
    v27 = v2[7];
    v28 = v13;
    v14 = *(_QWORD *)(a1 + 24);
    LODWORD(v20) = *(_DWORD *)(a1 + 720);
    updated = CInputManager::UpdateEdgyInput(
                *(CInputManager **)(v14 + 632),
                (const struct EdgyCompositionConfigurationUpdateEx *)&v18);
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x415u, 0LL);
  }
  return v1;
}
