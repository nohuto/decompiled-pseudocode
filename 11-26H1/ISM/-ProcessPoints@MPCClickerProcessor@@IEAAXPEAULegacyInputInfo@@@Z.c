/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1801C95D8
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C9460 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18000ED1C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

void __fastcall MPCClickerProcessor::ProcessPoints(
        MPCClickerProcessor *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int32 v13; // xmm8_4
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  const char *v18; // r9
  float v19; // xmm6_4
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  const char *v24; // r9
  float v25; // xmm8_4
  float v26; // xmm12_4
  __int64 v27; // r9
  struct MPCHolographicInputManager *Instance; // rax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  const char *v34; // r9
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  const char *v39; // r9
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  const char *v44; // r9
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  const char *v49; // r9
  float *v50; // rdi
  struct MPCHolographicInputManager *v51; // rax
  float *v52; // rax
  __int64 v53; // r9
  float v54; // xmm0_4
  float v55; // xmm1_4
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  const char *v59; // r9
  __int64 v60; // r9
  float v61; // xmm0_4
  float v62; // xmm2_4
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  const char *v66; // r9
  __int64 v67; // r9
  float v68; // xmm0_4
  float v69; // xmm2_4
  float *v70; // rax
  struct MPCHolographicInputManager *v71; // rax
  __int64 v72; // xmm0_8
  float *v73; // rax
  __int128 v74; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v75; // [rsp+38h] [rbp-D0h] BYREF
  int v76; // [rsp+40h] [rbp-C8h]
  _OWORD v77[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v78[16]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v79; // [rsp+98h] [rbp-70h]
  __int128 v80; // [rsp+A8h] [rbp-60h]
  __int128 v81; // [rsp+B8h] [rbp-50h]
  __int128 v82; // [rsp+C8h] [rbp-40h]

  v4 = *((_BYTE *)this + 3700) == 0;
  v7 = (float)(*((float *)a2 + 566) + *((float *)this + 921)) * 0.5;
  v8 = (float)(*((float *)a2 + 565) + *((float *)this + 920)) * 0.5;
  v9 = 0.0;
  v10 = 0.0;
  *((float *)this + 920) = v8;
  *((float *)this + 921) = v7;
  if ( !v4 )
  {
    v10 = v8 - *((float *)this + 922);
    v9 = v7 - *((float *)this + 923);
  }
  MPCConstantManager::GetInstance((__int64)this, (__int64)a2, a3, a4);
  *(_QWORD *)&v74 = L"DeadZoneAngle";
  v11 = (unsigned __int64)this + 24;
  v12 = std::_WChar_traits<unsigned short>::length((__int64)L"DeadZoneAngle");
  COERCE_FLOAT(v13 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  *((_QWORD *)&v74 + 1) = v12;
  if ( MPCConstantManager::GetConstant<float>(v14, ((unsigned __int64)this + 24) & -(__int64)(this != 0LL), &v74) > COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 0.0) & v13) )
    v10 = 0.0;
  LODWORD(v19) = COERCE_UNSIGNED_INT(*((float *)this + 921) - 0.0) & v13;
  MPCConstantManager::GetInstance(v16, v15, v17, v18);
  *(_QWORD *)&v74 = L"DeadZoneAngle";
  *((_QWORD *)&v74 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"DeadZoneAngle");
  if ( MPCConstantManager::GetConstant<float>(v20, v11 & -(__int64)(this != 0LL), &v74) > v19 )
    v9 = 0.0;
  v25 = 0.0;
  if ( *((_BYTE *)a2 + 2322) )
  {
    if ( (*((_BYTE *)a2 + 2280) & 0x40) != 0 )
    {
      v26 = *((float *)a2 + 575);
      MPCConstantManager::GetInstance(v22, v21, v23, v24);
      *(_QWORD *)&v74 = L"ThumbStickDeadZone";
      *((_QWORD *)&v74 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbStickDeadZone");
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - 0.0) & _xmm) > MPCConstantManager::GetConstant<float>(
                                                                   v27,
                                                                   v11 & -(__int64)(this != 0LL),
                                                                   &v74) )
      {
        v25 = (float)(v26 + *((float *)this + 924)) * 0.5;
        *((float *)this + 924) = v25;
      }
    }
  }
  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v78, Instance, 0xCD0uLL);
  v4 = *((_BYTE *)a2 + 2256) == 1;
  v77[0] = v79;
  v29 = v81;
  v77[1] = v80;
  v30 = v82;
  *((_DWORD *)this + 918) = v4;
  v77[2] = v29;
  v77[3] = v30;
  MPCConstantManager::GetInstance(v32, v31, v33, v34);
  *(_QWORD *)&v74 = L"PointScaleFactorXY";
  *((_QWORD *)&v74 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactorXY");
  *((float *)this + 932) = (float)(MPCConstantManager::GetConstant<float>(v35, (__int64)this + 24, &v74) * v10)
                         + *((float *)this + 932);
  MPCConstantManager::GetInstance(v37, v36, v38, v39);
  *(_QWORD *)&v74 = L"PointScaleFactorXY";
  *((_QWORD *)&v74 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactorXY");
  *((float *)this + 933) = (float)(MPCConstantManager::GetConstant<float>(v40, (__int64)this + 24, &v74) * v9)
                         + *((float *)this + 933);
  MPCConstantManager::GetInstance(v42, v41, v43, v44);
  *(_QWORD *)&v74 = L"PointScaleFactorStick";
  *((_QWORD *)&v74 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactorStick");
  *(float *)&v29 = MPCConstantManager::GetConstant<float>(v45, (__int64)this + 24, &v74);
  v4 = *((_DWORD *)this + 918) == 0;
  *((_DWORD *)this + 922) = *((_DWORD *)this + 920);
  *((_DWORD *)this + 923) = *((_DWORD *)this + 921);
  *((_BYTE *)this + 3700) = 1;
  *((float *)this + 934) = (float)(COERCE_FLOAT(v29 ^ _xmm) * v25) + *((float *)this + 934);
  if ( v4 )
  {
    v71 = MPCHolographicInputManager::GetInstance();
    v72 = *((_QWORD *)v71 + 30);
    LODWORD(v71) = *((_DWORD *)v71 + 62);
    v75 = v72;
    v76 = (int)v71;
    v73 = Windows::Foundation::Numerics::transform((float *)&v74, (float *)&v75, (float *)v77);
    *(_QWORD *)((char *)this + 3716) = *(_QWORD *)v73;
    *((float *)this + 931) = v73[2];
  }
  else
  {
    v50 = (float *)((char *)this + 3716);
    if ( *((_DWORD *)this + 919) )
    {
      MPCConstantManager::GetInstance(v47, v46, v48, v49);
      *(_QWORD *)&v74 = L"PointScaleFactorXY";
      *((_QWORD *)&v74 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactorXY");
      v54 = MPCConstantManager::GetConstant<float>(v53, (__int64)this + 24, &v74) * v10;
      *v50 = v54 + *v50;
      v55 = (float)(v54 * 0.0) + *((float *)this + 931);
      *((float *)this + 930) = (float)(v54 * 0.0) + *((float *)this + 930);
      *((float *)this + 931) = v55;
      MPCConstantManager::GetInstance(v57, v56, v58, v59);
      *(_QWORD *)&v74 = L"PointScaleFactorXY";
      *((_QWORD *)&v74 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactorXY");
      v61 = MPCConstantManager::GetConstant<float>(v60, (__int64)this + 24, &v74) * v9;
      *((float *)this + 930) = v61 + *((float *)this + 930);
      v62 = (float)(v61 * 0.0) + *((float *)this + 931);
      *v50 = (float)(v61 * 0.0) + *v50;
      *((float *)this + 931) = v62;
      MPCConstantManager::GetInstance(v64, v63, v65, v66);
      *(_QWORD *)&v74 = L"PointScaleFactorStick";
      *((_QWORD *)&v74 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactorStick");
      v68 = COERCE_FLOAT(COERCE_UNSIGNED_INT(MPCConstantManager::GetConstant<float>(v67, (__int64)this + 24, &v74)) ^ _xmm)
          * v25;
      *((float *)this + 931) = v68 + *((float *)this + 931);
      v69 = (float)(v68 * 0.0) + *((float *)this + 930);
      *v50 = (float)(v68 * 0.0) + *v50;
      *((float *)this + 930) = v69;
      v70 = Windows::Foundation::Numerics::transform((float *)&v75, (float *)this + 929, (float *)v77);
      *((_QWORD *)this + 463) = *(_QWORD *)v70;
      *((float *)this + 928) = v70[2];
    }
    else
    {
      v51 = MPCHolographicInputManager::GetInstance();
      *(_QWORD *)v50 = *((_QWORD *)v51 + 30);
      *((_DWORD *)this + 931) = *((_DWORD *)v51 + 62);
      v52 = Windows::Foundation::Numerics::transform((float *)&v75, (float *)this + 929, (float *)v77);
      *((_QWORD *)this + 463) = *(_QWORD *)v52;
      *((float *)this + 928) = v52[2];
      *((_QWORD *)this + 466) = 0LL;
      *((_DWORD *)this + 934) = 0;
      *((_BYTE *)this + 3700) = 0;
    }
  }
  *((_DWORD *)this + 919) = *((_DWORD *)this + 918);
}
