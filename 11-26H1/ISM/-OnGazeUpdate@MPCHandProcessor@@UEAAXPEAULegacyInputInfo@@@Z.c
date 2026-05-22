/*
 * XREFs of ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800C04A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180024128 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180024414 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1F30 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B2008 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF1B4 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5BFC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCHandProcessor::OnGazeUpdate(__int64 this, struct LegacyInputInfo *a2, __int64 a3, const char *a4)
{
  __int64 v6; // r9
  char v7; // bl
  _OWORD *v8; // rdi
  struct MPCGestureHandlerManager *Instance; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct MPCGestureHandlerManager *v23; // rbx
  __int64 *v24; // rax
  struct MPCGestureHandlerManager *v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct MPCGestureHandlerManager *v29; // rbx
  __int64 *v30; // rax
  MPCGestureHandlerManager *v31; // rbx
  __int64 *v32; // rax
  const char *v33; // r9
  struct MPCGestureHandlerManager *v34; // rbx
  _QWORD *v35; // rax
  _QWORD v36[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v37; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v38[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+58h] [rbp-A8h]
  _BYTE v40[616]; // [rsp+130h] [rbp+30h] BYREF
  int v41; // [rsp+398h] [rbp+298h]
  int WorkspaceId; // [rsp+3C0h] [rbp+2C0h]

  if ( *(_BYTE *)(this + 3640) )
  {
    MPCConstantManager::GetInstance(this, (__int64)a2, a3, a4);
    *(_QWORD *)&v37 = L"DisableInputInjection";
    *((_QWORD *)&v37 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"DisableInputInjection");
    v7 = MPCConstantManager::GetConstant<bool>(v6, this & -(__int64)(this != 24), &v37);
    if ( MPCInputProviderBase::IsPrimary(this) )
    {
      if ( !v7 )
      {
        v8 = (_OWORD *)((char *)a2 + 240);
        if ( *((_BYTE *)a2 + 240) )
        {
          Instance = MPCGestureHandlerManager::GetInstance(this, (__int64)a2);
          v10 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v36,
                  this & -(__int64)(this != 24));
          if ( !MPCGestureHandlerManager::IsInjecting((__int64)Instance, v10) && !*((_BYTE *)a2 + 650) )
          {
            memset_0(v38, 0, 0xBC0uLL);
            v11 = 3LL;
            v39 = 3008;
            v12 = v40;
            do
            {
              v13 = v8[1];
              *v12 = *v8;
              v14 = v8[2];
              v12[1] = v13;
              v15 = v8[3];
              v12[2] = v14;
              v16 = v8[4];
              v12[3] = v15;
              v17 = v8[5];
              v12[4] = v16;
              v18 = v8[6];
              v12[5] = v17;
              v19 = v8[7];
              v8 += 8;
              v12[6] = v18;
              v12 += 8;
              *(v12 - 1) = v19;
              --v11;
            }
            while ( v11 );
            v20 = v8[1];
            *v12 = *v8;
            v12[1] = v20;
            MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, v38, 4LL);
            goto LABEL_15;
          }
        }
      }
    }
    if ( !*(_QWORD *)(this + 3600) )
    {
      v23 = MPCGestureHandlerManager::GetInstance(this, (__int64)a2);
      v24 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v36,
              this & -(__int64)(this != 24));
      if ( MPCGestureHandlerManager::IsInjecting((__int64)v23, v24)
        || (v25 = MPCGestureHandlerManager::GetInstance(this, (__int64)a2),
            v26 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v36,
                    this & -(__int64)(this != 24)),
            MPCGestureHandlerManager::IsHovering((__int64)v25, v26)) )
      {
        if ( !*((_BYTE *)a2 + 650) )
        {
          memset_0(v38, 0, 0xBC0uLL);
          v39 = 3008;
          v41 = 2;
          v29 = MPCGestureHandlerManager::GetInstance(v28, v27);
          v30 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v36,
                  this & -(__int64)(this != 24));
          WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)v29, v30);
          v40[0] = 1;
          v40[408] = 1;
LABEL_15:
          v31 = MPCGestureHandlerManager::GetInstance(v22, v21);
          v32 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v36,
                  this & -(__int64)(this != 24));
          MPCGestureHandlerManager::DownLevelTo2D(v31, (struct LegacyInputInfo *)v38, v32, v33);
        }
      }
    }
  }
  v34 = MPCGestureHandlerManager::GetInstance(this, (__int64)a2);
  v35 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          v36,
          this & -(__int64)(this != 24));
  MPCGestureHandlerManager::OnGazeUpdate((__int64)v34, v35);
}
