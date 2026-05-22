/*
 * XREFs of ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7C2C
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C6280 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18000ED1C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801C44BC (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 */

void __fastcall MPCMouseProcessor::ProcessPoints(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  float v5; // xmm6_4
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // r9
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const char *v19; // r9
  __int64 v20; // r9
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm6_4
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  const char *v29; // r9
  __int64 v30; // r9
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  const char *v39; // r9
  __int64 v40; // r9
  float v41; // xmm0_4
  float v42; // xmm6_4
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  const char *v46; // r9
  __int64 v47; // r9
  float v48; // xmm0_4
  float v49; // xmm6_4
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  const char *v53; // r9
  __int64 v54; // r9
  float v55; // xmm0_4
  bool v56; // zf
  struct MPCHolographicInputManager *v57; // rax
  struct MPCHolographicInputManager *v58; // rax
  float *v59; // rax
  __int128 v60; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v61; // [rsp+38h] [rbp-D0h] BYREF
  float v62; // [rsp+48h] [rbp-C0h]
  float v63; // [rsp+4Ch] [rbp-BCh]
  float v64; // [rsp+50h] [rbp-B8h]
  float v65; // [rsp+58h] [rbp-B0h]
  float v66; // [rsp+5Ch] [rbp-ACh]
  float v67; // [rsp+60h] [rbp-A8h]
  _QWORD v68[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v69; // [rsp+88h] [rbp-80h]
  __int128 v70; // [rsp+98h] [rbp-70h]
  __int128 v71; // [rsp+A8h] [rbp-60h]
  _BYTE v72[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v73; // [rsp+C8h] [rbp-40h]
  __int128 v74; // [rsp+D8h] [rbp-30h]
  __int128 v75; // [rsp+E8h] [rbp-20h]
  __int128 v76; // [rsp+F8h] [rbp-10h]

  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v72, Instance, 0xCD0uLL);
  *(_OWORD *)&v68[1] = v73;
  v69 = v74;
  v70 = v75;
  v71 = v76;
  MPCMath::OrientToGravity(&v61, (float *)&v68[1], 0.89999998);
  v5 = (float)*((int *)this + 1320);
  MPCConstantManager::GetInstance(v7, v6, v8, v9);
  *(_QWORD *)&v60 = L"MouseParams_PointScaleFactorXY";
  *((_QWORD *)&v60 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"MouseParams_PointScaleFactorXY");
  v11 = MPCConstantManager::GetConstant<float>(v10, ((unsigned __int64)this + 40) & -(__int64)(this != 0LL), &v60) * v5;
  v12 = (float)(v11 * *(float *)&v61) + *((float *)this + 1329);
  v13 = (float)(v11 * *((float *)&v61 + 1)) + *((float *)this + 1330);
  v14 = (float)(v11 * *((float *)&v61 + 2)) + *((float *)this + 1331);
  *((float *)this + 1329) = v12;
  *((float *)this + 1330) = v13;
  *((float *)this + 1331) = v14;
  v15 = (float)*((int *)this + 1321);
  MPCConstantManager::GetInstance(v17, v16, v18, v19);
  *(_QWORD *)&v60 = L"MouseParams_PointScaleFactorXY";
  *((_QWORD *)&v60 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"MouseParams_PointScaleFactorXY");
  v21 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       MPCConstantManager::GetConstant<float>(
                         v20,
                         ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
                         &v60)) ^ _xmm)
      * v15;
  v22 = (float)(v21 * v62) + *((float *)this + 1329);
  v23 = (float)(v21 * v63) + *((float *)this + 1330);
  v24 = (float)(v21 * v64) + *((float *)this + 1331);
  *((float *)this + 1329) = v22;
  *((float *)this + 1330) = v23;
  *((float *)this + 1331) = v24;
  v25 = (float)*((int *)this + 1323);
  MPCConstantManager::GetInstance(v27, v26, v28, v29);
  *(_QWORD *)&v60 = L"MouseParams_PointScaleFactorWheel";
  *((_QWORD *)&v60 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"MouseParams_PointScaleFactorWheel");
  v31 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       MPCConstantManager::GetConstant<float>(
                         v30,
                         ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
                         &v60)) ^ _xmm)
      * v25;
  v32 = (float)(v31 * v65) + *((float *)this + 1329);
  v33 = (float)(v31 * v66) + *((float *)this + 1330);
  v34 = (float)(v31 * v67) + *((float *)this + 1331);
  *((float *)this + 1329) = v32;
  *((float *)this + 1330) = v33;
  *((float *)this + 1331) = v34;
  v35 = (float)*((int *)this + 1320);
  MPCConstantManager::GetInstance(v37, v36, v38, v39);
  *(_QWORD *)&v60 = L"MouseParams_PointScaleFactorXY";
  *((_QWORD *)&v60 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"MouseParams_PointScaleFactorXY");
  v41 = MPCConstantManager::GetConstant<float>(v40, ((unsigned __int64)this + 40) & -(__int64)(this != 0LL), &v60) * v35;
  v42 = (float)*((int *)this + 1321);
  *((float *)this + 1332) = v41 + *((float *)this + 1332);
  MPCConstantManager::GetInstance(v44, v43, v45, v46);
  *(_QWORD *)&v60 = L"MouseParams_PointScaleFactorXY";
  *((_QWORD *)&v60 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"MouseParams_PointScaleFactorXY");
  v48 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       MPCConstantManager::GetConstant<float>(
                         v47,
                         ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
                         &v60)) ^ _xmm)
      * v42;
  v49 = (float)*((int *)this + 1323);
  *((float *)this + 1333) = v48 + *((float *)this + 1333);
  MPCConstantManager::GetInstance(v51, v50, v52, v53);
  *(_QWORD *)&v60 = L"MouseParams_PointScaleFactorWheel";
  *((_QWORD *)&v60 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"MouseParams_PointScaleFactorWheel");
  v55 = MPCConstantManager::GetConstant<float>(v54, ((unsigned __int64)this + 40) & -(__int64)(this != 0LL), &v60);
  v56 = (*((_BYTE *)this + 5300) & 0x70) == 0;
  *((float *)this + 1334) = (float)(v55 * v49) + *((float *)this + 1334);
  if ( !v56 && !*((_QWORD *)this + 455) )
  {
    v57 = MPCHolographicInputManager::GetInstance();
    *((_QWORD *)this + 663) = *((_QWORD *)v57 + 30);
    *((_DWORD *)this + 1328) = *((_DWORD *)v57 + 62);
    v58 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v72, v58, 0xCD0uLL);
    *(_OWORD *)&v68[1] = v73;
    v69 = v74;
    v70 = v75;
    v71 = v76;
    v59 = Windows::Foundation::Numerics::transform((float *)&v60, (float *)this + 1326, (float *)&v68[1]);
    *(_QWORD *)((char *)this + 5316) = *(_QWORD *)v59;
    *((float *)this + 1331) = v59[2];
    *((_QWORD *)this + 666) = 0LL;
    *((_DWORD *)this + 1334) = 0;
  }
}
