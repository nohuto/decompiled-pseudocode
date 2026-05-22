/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C52A0
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C3AD0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5BFC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801C361C (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  int v2; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // r15d
  int v8; // esi
  bool v9; // cl
  char *v10; // rbx
  bool v11; // al
  char *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const char *v30; // r9
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  __int64 *v35; // rax
  const char *v36; // r9
  __int128 v37; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v39[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h]
  char v41; // [rsp+130h] [rbp+30h] BYREF
  float v42; // [rsp+39Ch] [rbp+29Ch]
  float v43; // [rsp+3A0h] [rbp+2A0h]

  v2 = *((_DWORD *)this + 927);
  v5 = v2 & 0x80;
  v6 = v2 & 0x100;
  if ( (v2 & 0x40) != 0 )
    v7 = v5 == 0;
  else
    v7 = -(v5 != 0);
  if ( (v2 & 0x200) != 0 )
    v8 = (v6 != 0) - 1;
  else
    v8 = v6 != 0;
  v9 = v7 || v8;
  v10 = (char *)a2 + 240;
  v11 = *v10 && v10[2] || *((_DWORD *)this + 1046) == 1;
  if ( v9 && v11 )
  {
    *((_DWORD *)this + 1046) = 1;
    memset_0(v39, 0, 0xBC0uLL);
    v12 = &v41;
    v40 = 3008;
    v13 = 3LL;
    do
    {
      v14 = *((_OWORD *)v10 + 1);
      *(_OWORD *)v12 = *(_OWORD *)v10;
      v15 = *((_OWORD *)v10 + 2);
      *((_OWORD *)v12 + 1) = v14;
      v16 = *((_OWORD *)v10 + 3);
      *((_OWORD *)v12 + 2) = v15;
      v17 = *((_OWORD *)v10 + 4);
      *((_OWORD *)v12 + 3) = v16;
      v18 = *((_OWORD *)v10 + 5);
      *((_OWORD *)v12 + 4) = v17;
      v19 = *((_OWORD *)v10 + 6);
      *((_OWORD *)v12 + 5) = v18;
      v20 = *((_OWORD *)v10 + 7);
      v10 += 128;
      *((_OWORD *)v12 + 6) = v19;
      v12 += 128;
      *((_OWORD *)v12 - 1) = v20;
      --v13;
    }
    while ( v13 );
    v21 = *((_OWORD *)v10 + 1);
    *(_OWORD *)v12 = *(_OWORD *)v10;
    *((_OWORD *)v12 + 1) = v21;
    MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, (__int64)v39, 5);
    MPCConstantManager::GetInstance(v23, v22, v24, v25);
    *(_QWORD *)&v37 = L"ScrollingScale";
    *((_QWORD *)&v37 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ScrollingScale");
    v42 = MPCConstantManager::GetConstant<float>(v26, ((unsigned __int64)this + 32) & -(__int64)(this != 0LL), &v37)
        * (float)v8;
    MPCConstantManager::GetInstance(v28, v27, v29, v30);
    *(_QWORD *)&v37 = L"ScrollingScale";
    *((_QWORD *)&v37 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ScrollingScale");
    v43 = MPCConstantManager::GetConstant<float>(v31, (__int64)this + 32, &v37) * (float)v7;
    Instance = MPCGestureHandlerManager::GetInstance(v33, v32);
    v35 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v38,
            (__int64)this + 32);
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (struct LegacyInputInfo *)v39, v35, v36);
  }
  else if ( *((_DWORD *)this + 1046) == 1 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
}
