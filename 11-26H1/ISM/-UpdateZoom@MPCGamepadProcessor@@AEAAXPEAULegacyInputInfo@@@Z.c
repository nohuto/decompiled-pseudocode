/*
 * XREFs of ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C54F4
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

void __fastcall MPCGamepadProcessor::UpdateZoom(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  char *v2; // r14
  float v4; // xmm9_4
  float v5; // xmm7_4
  __int64 v6; // rdx
  _OWORD *v7; // rax
  char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  const char *v25; // r9
  char v26; // bl
  bool v27; // si
  float v28; // xmm7_4
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  const char *v33; // r9
  float v34; // xmm0_4
  int v35; // eax
  __int64 v36; // r9
  float v37; // xmm0_4
  __int64 v38; // rdx
  __int64 v39; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  __int64 *v41; // rax
  const char *v42; // r9
  __int128 v43; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v45[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v46; // [rsp+60h] [rbp-A8h]
  char v47; // [rsp+138h] [rbp+30h] BYREF
  int v48; // [rsp+3A0h] [rbp+298h]
  float v49; // [rsp+3ACh] [rbp+2A4h]

  v2 = (char *)a2 + 240;
  v4 = *((float *)this + 929) - *((float *)this + 928);
  v5 = *((float *)this + 936) - *((float *)this + 935);
  memset_0(v45, 0, 0xBC0uLL);
  v6 = 3LL;
  v46 = 3008;
  v7 = v2;
  v8 = &v47;
  do
  {
    v9 = v7[1];
    *(_OWORD *)v8 = *v7;
    v10 = v7[2];
    *((_OWORD *)v8 + 1) = v9;
    v11 = v7[3];
    *((_OWORD *)v8 + 2) = v10;
    v12 = v7[4];
    *((_OWORD *)v8 + 3) = v11;
    v13 = v7[5];
    *((_OWORD *)v8 + 4) = v12;
    v14 = v7[6];
    *((_OWORD *)v8 + 5) = v13;
    v15 = v7[7];
    v7 += 8;
    *((_OWORD *)v8 + 6) = v14;
    v8 += 128;
    *((_OWORD *)v8 - 1) = v15;
    --v6;
  }
  while ( v6 );
  v16 = v7[1];
  *(_OWORD *)v8 = *v7;
  *((_OWORD *)v8 + 1) = v16;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v8, (__int64)v45, 0);
  MPCConstantManager::GetInstance(v18, v17, v19, v20);
  *(_QWORD *)&v43 = L"ThumbstickDeadzone";
  *((_QWORD *)&v43 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
  v26 = 1;
  v27 = COERCE_FLOAT(LODWORD(v4) & _xmm) > MPCConstantManager::GetConstant<float>(
                                             v21,
                                             ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                                             &v43)
     && *v2;
  LODWORD(v28) = LODWORD(v5) & _xmm;
  MPCConstantManager::GetInstance(v23, v22, v24, v25);
  v29 = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
  *(_QWORD *)&v43 = L"ThumbstickDeadzone";
  *((_QWORD *)&v43 + 1) = v29;
  v34 = MPCConstantManager::GetConstant<float>(v30, ((unsigned __int64)this + 32) & -(__int64)(this != 0LL), &v43);
  LOBYTE(v32) = *v2 && v2[2] || *((_DWORD *)this + 1046) == 2;
  LOBYTE(v31) = v27 && v28 <= v34 && !*((_DWORD *)this + 1046);
  v35 = *((_DWORD *)this + 1046);
  if ( v35 != 2 )
  {
LABEL_20:
    v26 = 0;
    goto LABEL_21;
  }
  if ( v27 )
  {
    if ( !(_BYTE)v32 )
      goto LABEL_24;
    goto LABEL_20;
  }
LABEL_21:
  if ( (_BYTE)v32 && (_BYTE)v31 )
  {
    *((_DWORD *)this + 1046) = 2;
    v35 = 2;
  }
LABEL_24:
  if ( v26 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( v35 == 2 )
  {
    MPCConstantManager::GetInstance(v32, v31, 2LL, v33);
    *(_QWORD *)&v43 = L"ZoomingScale";
    *((_QWORD *)&v43 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ZoomingScale");
    v37 = MPCConstantManager::GetConstant<float>(v36, (__int64)this + 32, &v43);
    v48 = 6;
    v49 = (float)((float)(v37 * v4) * *((float *)this + 1066)) + 1.0;
    Instance = MPCGestureHandlerManager::GetInstance(v39, v38);
    v41 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v44,
            (__int64)this + 32);
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (struct LegacyInputInfo *)v45, v41, v42);
  }
}
