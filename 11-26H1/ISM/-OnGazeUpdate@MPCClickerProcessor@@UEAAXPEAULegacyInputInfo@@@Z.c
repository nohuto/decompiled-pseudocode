/*
 * XREFs of ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C90F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180024128 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180024414 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1F30 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B2008 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5BFC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCClickerProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _OWORD *v6; // rdi
  char *v7; // r14
  struct MPCGestureHandlerManager *Instance; // rbx
  __int64 *v9; // rax
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct MPCGestureHandlerManager *v22; // rax
  unsigned __int64 v23; // rdx
  struct MPCGestureHandlerManager *v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct MPCGestureHandlerManager *v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct MPCGestureHandlerManager *v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  MPCGestureHandlerManager *v36; // rbx
  __int64 *v37; // rax
  const char *v38; // r9
  struct MPCGestureHandlerManager *v39; // rbx
  _QWORD *v40; // rax
  _QWORD v41[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v42[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+48h] [rbp-B8h]
  _BYTE v44[616]; // [rsp+120h] [rbp+20h] BYREF
  int v45; // [rsp+388h] [rbp+288h]
  int WorkspaceId; // [rsp+3B0h] [rbp+2B0h]

  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v6 = (_OWORD *)((char *)a2 + 240);
    if ( *(_BYTE *)v6 )
    {
      v7 = (char *)(this - 24);
      Instance = MPCGestureHandlerManager::GetInstance(v5, v4);
      v9 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             v41,
             this & -(__int64)(this != 24));
      if ( !MPCGestureHandlerManager::IsInjecting((__int64)Instance, v9) )
      {
        memset_0(v42, 0, 0xBC0uLL);
        v10 = 3LL;
        v43 = 3008;
        v11 = v44;
        do
        {
          v12 = v6[1];
          *v11 = *v6;
          v13 = v6[2];
          v11[1] = v12;
          v14 = v6[3];
          v11[2] = v13;
          v15 = v6[4];
          v11[3] = v14;
          v16 = v6[5];
          v11[4] = v15;
          v17 = v6[6];
          v11[5] = v16;
          v18 = v6[7];
          v6 += 8;
          v11[6] = v17;
          v11 += 8;
          *(v11 - 1) = v18;
          --v10;
        }
        while ( v10 );
        v19 = v6[1];
        *v11 = *v6;
        v11[1] = v19;
        MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, (__int64)v42, 4);
        v22 = MPCGestureHandlerManager::GetInstance(v21, v20);
        v23 = this & -(__int64)(this != 24);
        goto LABEL_12;
      }
    }
  }
  if ( *(_QWORD *)(this + 3600) )
  {
    v7 = (char *)(this - 24);
  }
  else
  {
    v7 = (char *)(this - 24);
    v24 = MPCGestureHandlerManager::GetInstance(v5, v4);
    v25 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            v41,
            this & -(__int64)(this != 24));
    if ( MPCGestureHandlerManager::IsInjecting((__int64)v24, v25)
      || (v28 = MPCGestureHandlerManager::GetInstance(v27, v26),
          v29 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v41,
                  this & -(__int64)(this != 24)),
          MPCGestureHandlerManager::IsHovering((__int64)v28, v29)) )
    {
      memset_0(v42, 0, 0xBC0uLL);
      v43 = 3008;
      v45 = 2;
      v32 = MPCGestureHandlerManager::GetInstance(v31, v30);
      v33 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v41,
              this & -(__int64)(this != 24));
      WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)v32, v33);
      v44[0] = 1;
      v44[408] = 1;
      v22 = MPCGestureHandlerManager::GetInstance(v35, v34);
      v23 = this & -(__int64)(this != 24);
LABEL_12:
      v36 = v22;
      v37 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v41,
              v23);
      MPCGestureHandlerManager::DownLevelTo2D(v36, (struct LegacyInputInfo *)v42, v37, v38);
    }
  }
  v39 = MPCGestureHandlerManager::GetInstance(v5, v4);
  v40 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          v41,
          this & -(__int64)(v7 != 0LL));
  MPCGestureHandlerManager::OnGazeUpdate((__int64)v39, v40);
}
