/*
 * XREFs of CempUtilValidateAndCapturePackageInfo @ 0x180018548
 * Callers:
 *     ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x1800181B0 (-HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z.c)
 * Callees:
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180018698 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CempUtilValidateAndCapturePackageInfo(
        PCWSTR packageFullName,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  UINT32 packageFamilyNameLength[4]; // [rsp+30h] [rbp-198h] BYREF
  _OWORD v21[12]; // [rsp+40h] [rbp-188h] BYREF
  __int64 v22; // [rsp+100h] [rbp-C8h]
  int v23; // [rsp+108h] [rbp-C0h]
  WCHAR packageFamilyName[72]; // [rsp+110h] [rbp-B8h] BYREF

  memset_0(v21, 0, 0xCCuLL);
  packageFamilyNameLength[0] = 65;
  if ( PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName) )
    return 3221225507LL;
  result = CempUtilValidateAndCapturePackageInfoWithFamilyName(packageFamilyName, a2, a3, a4, v21);
  if ( (int)result >= 0 )
  {
    v10 = v21[1];
    *(_OWORD *)a5 = v21[0];
    v11 = v21[2];
    *(_OWORD *)(a5 + 16) = v10;
    v12 = v21[3];
    *(_OWORD *)(a5 + 32) = v11;
    v13 = v21[4];
    *(_OWORD *)(a5 + 48) = v12;
    v14 = v21[5];
    *(_OWORD *)(a5 + 64) = v13;
    v15 = v21[6];
    *(_OWORD *)(a5 + 80) = v14;
    *(_OWORD *)(a5 + 96) = v15;
    *(_OWORD *)(a5 + 112) = v21[7];
    v16 = v22;
    v17 = v21[9];
    *(_OWORD *)(a5 + 128) = v21[8];
    v18 = v21[10];
    *(_OWORD *)(a5 + 144) = v17;
    v19 = v21[11];
    *(_OWORD *)(a5 + 160) = v18;
    *(_OWORD *)(a5 + 176) = v19;
    *(_QWORD *)(a5 + 192) = v16;
    *(_DWORD *)(a5 + 200) = v23;
    return 0LL;
  }
  return result;
}
