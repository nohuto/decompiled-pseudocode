/*
 * XREFs of DpiGetAdapterInfo @ 0x140238980
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x140085984 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkFreeUnicodeString @ 0x140194C6C (DxgkFreeUnicodeString.c)
 *     DpiFreeAdapterInfo @ 0x140238878 (DpiFreeAdapterInfo.c)
 *     DxgkRetrieveStringFromRegistry @ 0x14023AA60 (DxgkRetrieveStringFromRegistry.c)
 *     DpiQueryFeatureDriverInterface @ 0x14024EEFC (DpiQueryFeatureDriverInterface.c)
 *     DpiOpenPnpRegistryKey @ 0x140391650 (DpiOpenPnpRegistryKey.c)
 *     DpiIsFeatureEnabled @ 0x1403EC964 (DpiIsFeatureEnabled.c)
 */

__int64 __fastcall DpiGetAdapterInfo(__int64 a1, _BYTE *a2, char *a3, _OWORD *a4)
{
  int v7; // r12d
  __int64 v8; // r14
  char v9; // r15
  __int64 v10; // rbx
  size_t v11; // r8
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  unsigned int v31; // edx
  char v32; // al
  unsigned __int16 v33; // bx
  int v34; // r8d
  int v35; // eax
  HANDLE v36; // rdx
  __int64 v37; // rcx
  _OWORD *v38; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v41; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v44; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _OWORD *v46; // [rsp+98h] [rbp-68h]
  _QWORD v47[36]; // [rsp+A0h] [rbp-60h] BYREF

  v46 = a4;
  v7 = 0;
  v41 = 0LL;
  memset(v47, 0, 280);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = 1;
  v10 = *(_QWORD *)(v8 + 40);
  if ( a3 )
  {
    memset(a3, 0, 0x5D8uLL);
    v11 = 78LL;
    *(_QWORD *)a3 = *(_QWORD *)(v8 + 48);
    v12 = 1;
    if ( *(_DWORD *)(v8 + 504) )
      v12 = *(_DWORD *)(v8 + 504);
    *((_DWORD *)a3 + 2) = v12;
    *(_OWORD *)(a3 + 12) = *(_OWORD *)(v8 + 2680);
    *(_OWORD *)(a3 + 28) = *(_OWORD *)(v8 + 4928);
    if ( *(_WORD *)(v8 + 4896) < 0x4Eu )
      v11 = *(unsigned __int16 *)(v8 + 4896);
    memmove(a3 + 44, *(const void **)(v8 + 4904), v11);
    *(_QWORD *)(a3 + 124) = *(_QWORD *)(v8 + 2696);
    *((_DWORD *)a3 + 33) = *(_DWORD *)(v8 + 1124);
    *((_DWORD *)a3 + 34) = *(_DWORD *)(v8 + 1128);
    *((_DWORD *)a3 + 35) = *(_DWORD *)(v8 + 1132);
    *((_DWORD *)a3 + 36) = *(_DWORD *)(v8 + 1136);
    *((_DWORD *)a3 + 37) = *(_DWORD *)(v8 + 1140);
    *((_DWORD *)a3 + 38) = *(_DWORD *)(v8 + 1120);
    v13 = *((_DWORD *)a3 + 39) & 0xFFFFFFFE | DpiFdoIsPostDevice(a1);
    *((_DWORD *)a3 + 39) = v13;
    v14 = v13 & 0xFFFFFFFD | (*(_BYTE *)(v8 + 1152) != 0 ? 2 : 0);
    *((_DWORD *)a3 + 39) = v14;
    v15 = v14 & 0xFFFFFFFB | (*(_BYTE *)(v8 + 480) != 0 ? 4 : 0);
    *((_DWORD *)a3 + 39) = v15;
    v16 = v15 & 0xFFFFFFF7 | (*(_BYTE *)(v8 + 2716) != 0 ? 8 : 0);
    *((_DWORD *)a3 + 39) = v16;
    v17 = v16 & 0xFFFFFFEF | (*(_BYTE *)(v8 + 2717) != 0 ? 0x10 : 0);
    *((_DWORD *)a3 + 39) = v17;
    v18 = v17 & 0xFFFFFFDF | (*(_BYTE *)(v8 + 1153) != 0 ? 0x20 : 0);
    *((_DWORD *)a3 + 39) = v18;
    v19 = v18 & 0xFFFFBFFF | (*(_BYTE *)(v8 + 481) != 0 ? 0x4000 : 0);
    *((_DWORD *)a3 + 39) = v19;
    v20 = v19 & 0xFFFFEFFF | (*(_DWORD *)(v8 + 3620) != -1 ? 0x1000 : 0);
    *((_DWORD *)a3 + 39) = v20;
    v21 = v20 & 0xFFFFFFBF | (*(_DWORD *)(v8 + 3360) != -1 ? 0x40 : 0);
    *((_DWORD *)a3 + 39) = v21;
    v22 = v21 & 0xFFFFFF7F | (*(_BYTE *)(v8 + 2844) != 0 ? 0x80 : 0);
    *((_DWORD *)a3 + 39) = v22;
    v23 = v22 & 0xFFFFFEFF | (*(_BYTE *)(v8 + 1158) != 0 ? 0x100 : 0);
    *((_DWORD *)a3 + 39) = v23;
    v24 = v23 & 0xFFFFFDFF | (*(_BYTE *)(v8 + 2719) != 0 ? 0x200 : 0);
    *((_DWORD *)a3 + 39) = v24;
    v25 = v24 & 0xFFFFDFFF | (*(_BYTE *)(v8 + 2718) != 0 ? 0x2000 : 0);
    *((_DWORD *)a3 + 39) = v25;
    v26 = v25 & 0xFFFFFBFF | (*(_BYTE *)(v8 + 2724) != 0 ? 0x400 : 0);
    *((_DWORD *)a3 + 39) = v26;
    v27 = v26 & 0xFFFFF7FF | (*(_BYTE *)(v8 + 2725) != 0 ? 0x800 : 0);
    *((_DWORD *)a3 + 39) = v27;
    v28 = v27 & 0xFFFF7FFF | (*(_BYTE *)(v8 + 2845) != 0 ? 0x8000 : 0);
    *((_DWORD *)a3 + 39) = v28;
    v29 = v28 & 0xFFFEFFFF | (*(_BYTE *)(v8 + 2846) != 0 ? 0x10000 : 0);
    *((_DWORD *)a3 + 39) = v29;
    v30 = v29 & 0xFFFDFFFF | ((*(_DWORD *)(v8 + 1324) & 0x10) << 13);
    *((_DWORD *)a3 + 39) = v30;
    v31 = v30 & 0xFFFBFFFF | (*(_BYTE *)(v8 + 1159) != 0 ? 0x40000 : 0);
    *((_DWORD *)a3 + 39) = v31;
    *((_DWORD *)a3 + 39) = v31 & 0xFFF7FFFF | (*(_BYTE *)(v8 + 2722) != 0 ? 0x80000 : 0);
    if ( !*(_QWORD *)(v10 + 184) || (v32 = 1, !*(_QWORD *)(v10 + 192)) )
      v32 = 0;
    a3[160] = v32;
    *((_QWORD *)a3 + 21) = *(_QWORD *)(v10 + 272);
    *((_QWORD *)a3 + 22) = *(_QWORD *)(v10 + 280);
    *((_QWORD *)a3 + 23) = *(_QWORD *)(v10 + 288);
    *((_QWORD *)a3 + 24) = *(_QWORD *)(v10 + 296);
    *((_QWORD *)a3 + 25) = *(_QWORD *)(v10 + 304);
    *((_QWORD *)a3 + 26) = *(_QWORD *)(v10 + 312);
    *((_QWORD *)a3 + 27) = *(_QWORD *)(v10 + 320);
    *((_QWORD *)a3 + 28) = *(_QWORD *)(v10 + 328);
    *((_QWORD *)a3 + 29) = *(_QWORD *)(v10 + 336);
    *((_QWORD *)a3 + 30) = *(_QWORD *)(v10 + 344);
    *((_QWORD *)a3 + 31) = *(_QWORD *)(v10 + 352);
    *((_QWORD *)a3 + 32) = *(_QWORD *)(v10 + 360);
    *((_QWORD *)a3 + 33) = *(_QWORD *)(v10 + 368);
    *((_QWORD *)a3 + 34) = *(_QWORD *)(v10 + 376);
    *((_QWORD *)a3 + 35) = *(_QWORD *)(v10 + 384);
    *((_QWORD *)a3 + 36) = *(_QWORD *)(v10 + 392);
    *((_QWORD *)a3 + 37) = *(_QWORD *)(v10 + 400);
    *((_QWORD *)a3 + 38) = *(_QWORD *)(v10 + 408);
    *((_QWORD *)a3 + 39) = *(_QWORD *)(v10 + 416);
    *((_QWORD *)a3 + 40) = *(_QWORD *)(v10 + 424);
    *((_QWORD *)a3 + 41) = *(_QWORD *)(v10 + 432);
    *((_QWORD *)a3 + 42) = *(_QWORD *)(v10 + 440);
    *((_QWORD *)a3 + 43) = *(_QWORD *)(v10 + 448);
    *((_QWORD *)a3 + 44) = *(_QWORD *)(v10 + 456);
    *((_QWORD *)a3 + 45) = *(_QWORD *)(v10 + 464);
    *((_QWORD *)a3 + 46) = *(_QWORD *)(v10 + 472);
    *((_QWORD *)a3 + 47) = *(_QWORD *)(v10 + 480);
    *((_QWORD *)a3 + 48) = *(_QWORD *)(v10 + 488);
    *((_QWORD *)a3 + 49) = *(_QWORD *)(v10 + 504);
    *((_QWORD *)a3 + 50) = *(_QWORD *)(v10 + 512);
    *((_QWORD *)a3 + 51) = *(_QWORD *)(v10 + 520);
    *((_QWORD *)a3 + 52) = *(_QWORD *)(v10 + 528);
    *((_QWORD *)a3 + 53) = *(_QWORD *)(v10 + 536);
    *((_QWORD *)a3 + 54) = *(_QWORD *)(v10 + 544);
    *((_QWORD *)a3 + 55) = *(_QWORD *)(v10 + 552);
    *((_QWORD *)a3 + 56) = *(_QWORD *)(v10 + 560);
    *((_QWORD *)a3 + 57) = *(_QWORD *)(v10 + 568);
    *((_QWORD *)a3 + 58) = *(_QWORD *)(v10 + 576);
    *((_QWORD *)a3 + 59) = *(_QWORD *)(v10 + 584);
    *((_QWORD *)a3 + 60) = *(_QWORD *)(v10 + 592);
    *((_QWORD *)a3 + 61) = *(_QWORD *)(v10 + 600);
    *((_QWORD *)a3 + 62) = *(_QWORD *)(v10 + 608);
    *((_QWORD *)a3 + 63) = *(_QWORD *)(v10 + 624);
    if ( *(_DWORD *)(v10 + 28) >= 0x2002u )
      *((_QWORD *)a3 + 64) = *(_QWORD *)(v10 + 680);
    if ( *(_DWORD *)(v10 + 28) >= 0x3001u )
    {
      *((_QWORD *)a3 + 65) = *(_QWORD *)(v10 + 712);
      *((_QWORD *)a3 + 66) = *(_QWORD *)(v10 + 720);
      *((_QWORD *)a3 + 67) = *(_QWORD *)(v10 + 728);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x3004u )
      *((_QWORD *)a3 + 72) = *(_QWORD *)(v10 + 760);
    if ( *(_DWORD *)(v10 + 28) >= 0x3005u )
    {
      *((_QWORD *)a3 + 69) = *(_QWORD *)(v10 + 704);
      *((_QWORD *)a3 + 70) = *(_QWORD *)(v10 + 776);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x3000u )
      *((_QWORD *)a3 + 68) = *(_QWORD *)(v10 + 1680);
    if ( *(_DWORD *)(v10 + 28) >= 0x4000u )
    {
      *((_QWORD *)a3 + 75) = *(_QWORD *)(v10 + 808);
      *((_QWORD *)a3 + 76) = *(_QWORD *)(v10 + 816);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x300Bu )
      *((_QWORD *)a3 + 73) = *(_QWORD *)(v10 + 784);
    if ( *(_DWORD *)(v10 + 28) >= 0x4001u )
      *((_QWORD *)a3 + 77) = *(_QWORD *)(v10 + 824);
    if ( *(_DWORD *)(v10 + 28) >= 0x4000u )
      *((_QWORD *)a3 + 74) = *(_QWORD *)(v10 + 800);
    if ( *(_DWORD *)(v10 + 28) >= 0x4002u )
    {
      *((_QWORD *)a3 + 78) = *(_QWORD *)(v10 + 832);
      *((_QWORD *)a3 + 79) = *(_QWORD *)(v10 + 840);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x5001u )
    {
      *((_QWORD *)a3 + 80) = *(_QWORD *)(v10 + 848);
      *((_QWORD *)a3 + 81) = *(_QWORD *)(v10 + 856);
      *((_QWORD *)a3 + 82) = *(_QWORD *)(v10 + 864);
      *((_QWORD *)a3 + 83) = *(_QWORD *)(v10 + 872);
      *((_QWORD *)a3 + 84) = *(_QWORD *)(v10 + 880);
      *((_QWORD *)a3 + 85) = *(_QWORD *)(v10 + 888);
      *((_QWORD *)a3 + 86) = *(_QWORD *)(v10 + 904);
      *((_QWORD *)a3 + 87) = *(_QWORD *)(v10 + 912);
      *((_QWORD *)a3 + 88) = *(_QWORD *)(v10 + 896);
      *((_QWORD *)a3 + 89) = *(_QWORD *)(v10 + 920);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x5006u )
      *((_QWORD *)a3 + 71) = *(_QWORD *)(v10 + 944);
    if ( *(_DWORD *)(v10 + 28) >= 0x5008u )
    {
      *((_QWORD *)a3 + 90) = *(_QWORD *)(v10 + 952);
      *((_QWORD *)a3 + 91) = *(_QWORD *)(v10 + 960);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x6000u )
    {
      *((_QWORD *)a3 + 92) = *(_QWORD *)(v10 + 968);
      *((_QWORD *)a3 + 93) = *(_QWORD *)(v10 + 976);
      *((_QWORD *)a3 + 94) = *(_QWORD *)(v10 + 984);
      *((_QWORD *)a3 + 95) = v8 + 5024;
      *((_QWORD *)a3 + 97) = v8 + 5152;
      *((_QWORD *)a3 + 96) = v8 + 5288;
      *((_QWORD *)a3 + 98) = v8 + 5344;
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x6002u )
    {
      *((_QWORD *)a3 + 99) = *(_QWORD *)(v10 + 1000);
      *((_QWORD *)a3 + 100) = *(_QWORD *)(v10 + 1008);
      *((_QWORD *)a3 + 101) = *(_QWORD *)(v10 + 992);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x7000u )
    {
      *((_QWORD *)a3 + 102) = *(_QWORD *)(v10 + 1032);
      *((_QWORD *)a3 + 103) = *(_QWORD *)(v10 + 1040);
      *((_QWORD *)a3 + 104) = *(_QWORD *)(v10 + 1048);
      *((_QWORD *)a3 + 105) = *(_QWORD *)(v10 + 1064);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x7002u )
    {
      *((_QWORD *)a3 + 107) = *(_QWORD *)(v10 + 1072);
      *((_QWORD *)a3 + 108) = *(_QWORD *)(v10 + 1080);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x7003u )
    {
      *((_QWORD *)a3 + 109) = *(_QWORD *)(v10 + 1088);
      *((_QWORD *)a3 + 110) = *(_QWORD *)(v10 + 1096);
      *((_QWORD *)a3 + 111) = *(_QWORD *)(v10 + 1104);
      *((_QWORD *)a3 + 112) = *(_QWORD *)(v10 + 1112);
      *((_QWORD *)a3 + 113) = *(_QWORD *)(v10 + 1120);
      *((_QWORD *)a3 + 114) = *(_QWORD *)(v10 + 1128);
      *((_QWORD *)a3 + 115) = *(_QWORD *)(v10 + 1136);
      *((_QWORD *)a3 + 116) = *(_QWORD *)(v10 + 1144);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x7004u )
    {
      *((_QWORD *)a3 + 117) = *(_QWORD *)(v10 + 1152);
      *((_QWORD *)a3 + 118) = *(_QWORD *)(v10 + 1160);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x8001u )
    {
      *((_QWORD *)a3 + 119) = *(_QWORD *)(v10 + 1176);
      *((_QWORD *)a3 + 120) = *(_QWORD *)(v10 + 1184);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x9000u )
    {
      *((_QWORD *)a3 + 121) = *(_QWORD *)(v10 + 1192);
      *((_QWORD *)a3 + 122) = *(_QWORD *)(v10 + 1200);
      *((_QWORD *)a3 + 123) = *(_QWORD *)(v10 + 1208);
      *((_QWORD *)a3 + 124) = *(_QWORD *)(v10 + 1216);
      *((_QWORD *)a3 + 125) = *(_QWORD *)(v10 + 1224);
      *((_QWORD *)a3 + 126) = *(_QWORD *)(v10 + 1232);
      *((_QWORD *)a3 + 127) = *(_QWORD *)(v10 + 1240);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x9003u )
    {
      *((_QWORD *)a3 + 128) = *(_QWORD *)(v10 + 1248);
      *((_QWORD *)a3 + 129) = *(_QWORD *)(v10 + 1256);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x9005u )
    {
      *((_QWORD *)a3 + 130) = *(_QWORD *)(v10 + 1264);
      *((_QWORD *)a3 + 131) = *(_QWORD *)(v10 + 1272);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x9006u )
      *((_QWORD *)a3 + 106) = *(_QWORD *)(v10 + 1280);
    if ( *(_DWORD *)(v10 + 28) >= 0xA001u )
      *((_QWORD *)a3 + 132) = *(_QWORD *)(v10 + 1288);
    if ( *(_DWORD *)(v10 + 28) >= 0xA002u )
      *((_QWORD *)a3 + 133) = *(_QWORD *)(v10 + 1296);
    if ( *(_DWORD *)(v10 + 28) >= 0xA005u )
      *((_QWORD *)a3 + 134) = *(_QWORD *)(v10 + 1304);
    if ( *(_DWORD *)(v10 + 28) >= 0xA009u )
      *((_QWORD *)a3 + 135) = *(_QWORD *)(v10 + 1320);
    if ( *(_DWORD *)(v10 + 28) >= 0xB002u )
    {
      *((_QWORD *)a3 + 136) = *(_QWORD *)(v10 + 1328);
      *((_QWORD *)a3 + 137) = *(_QWORD *)(v10 + 1336);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0xB003u )
      *((_QWORD *)a3 + 138) = *(_QWORD *)(v10 + 1344);
    if ( *(_DWORD *)(v10 + 28) >= 0xC001u )
      *((_QWORD *)a3 + 139) = *(_QWORD *)(v10 + 1360);
    if ( *(_DWORD *)(v10 + 28) >= 0xC002u )
      *((_QWORD *)a3 + 144) = v8 + 5600;
    if ( *(_DWORD *)(v10 + 28) >= 0xC004u )
    {
      *((_QWORD *)a3 + 146) = v8 + 5656;
      if ( *(_DWORD *)(v10 + 28) >= 0xC004u )
        *((_QWORD *)a3 + 145) = v8 + 5728;
    }
    if ( *(_DWORD *)(v10 + 28) >= 0xE003u )
    {
      *((_QWORD *)a3 + 140) = *(_QWORD *)(v10 + 1368);
      *((_QWORD *)a3 + 141) = *(_QWORD *)(v10 + 1376);
      *((_QWORD *)a3 + 142) = *(_QWORD *)(v10 + 1384);
      *((_QWORD *)a3 + 143) = *(_QWORD *)(v10 + 1392);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0xF001u )
    {
      *((_QWORD *)a3 + 147) = *(_QWORD *)(v10 + 1400);
      *((_QWORD *)a3 + 148) = *(_QWORD *)(v10 + 1408);
      *((_QWORD *)a3 + 149) = *(_QWORD *)(v10 + 1416);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0xF003u )
      *((_QWORD *)a3 + 150) = *(_QWORD *)(v10 + 1424);
    if ( *(_DWORD *)(v10 + 28) >= 0x10003u )
    {
      *((_QWORD *)a3 + 155) = *(_QWORD *)(v10 + 1464);
      *((_QWORD *)a3 + 156) = *(_QWORD *)(v10 + 1472);
      *((_QWORD *)a3 + 157) = *(_QWORD *)(v10 + 1480);
      *((_QWORD *)a3 + 158) = *(_QWORD *)(v10 + 1488);
      *((_QWORD *)a3 + 159) = *(_QWORD *)(v10 + 1496);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x11001u )
    {
      *((_QWORD *)a3 + 160) = *(_QWORD *)(v10 + 1512);
      *((_QWORD *)a3 + 161) = *(_QWORD *)(v10 + 1520);
      *((_QWORD *)a3 + 162) = *(_QWORD *)(v10 + 1528);
      *((_QWORD *)a3 + 163) = *(_QWORD *)(v10 + 1536);
      *((_QWORD *)a3 + 164) = *(_QWORD *)(v10 + 1544);
      *((_QWORD *)a3 + 165) = *(_QWORD *)(v10 + 1552);
      *((_QWORD *)a3 + 166) = *(_QWORD *)(v10 + 1560);
      *((_QWORD *)a3 + 167) = *(_QWORD *)(v10 + 1568);
      *((_QWORD *)a3 + 168) = *(_QWORD *)(v10 + 1576);
      *((_QWORD *)a3 + 169) = *(_QWORD *)(v10 + 1584);
      *((_QWORD *)a3 + 170) = *(_QWORD *)(v10 + 1592);
      *((_QWORD *)a3 + 171) = *(_QWORD *)(v10 + 1600);
      *((_QWORD *)a3 + 172) = *(_QWORD *)(v10 + 1608);
      *((_QWORD *)a3 + 173) = *(_QWORD *)(v10 + 1616);
      *((_QWORD *)a3 + 151) = *(_QWORD *)(v10 + 1432);
      *((_QWORD *)a3 + 174) = *(_QWORD *)(v10 + 1624);
      *((_QWORD *)a3 + 175) = *(_QWORD *)(v10 + 1632);
      *((_QWORD *)a3 + 152) = *(_QWORD *)(v10 + 1440);
      *((_QWORD *)a3 + 153) = *(_QWORD *)(v10 + 1448);
      *((_QWORD *)a3 + 154) = *(_QWORD *)(v10 + 1456);
      *((_QWORD *)a3 + 176) = *(_QWORD *)(v10 + 1640);
      *((_QWORD *)a3 + 177) = *(_QWORD *)(v10 + 1648);
    }
    if ( *(_DWORD *)(v10 + 28) >= 0x11003u )
      *((_QWORD *)a3 + 178) = *(_QWORD *)(v10 + 1656);
    if ( *(_DWORD *)(v10 + 28) >= 0x11006u )
      *((_QWORD *)a3 + 180) = *(_QWORD *)(v10 + 1664);
    if ( *(_DWORD *)(v10 + 28) >= 0x11007u )
      *((_QWORD *)a3 + 181) = *(_QWORD *)(v10 + 1672);
    LODWORD(Handle) = 0;
    DpiIsFeatureEnabled(a1, 4LL, 0LL, &Handle);
    if ( (BYTE2(Handle) & 4) != 0 )
    {
      v33 = (unsigned __int16)Handle;
      if ( (_WORD)Handle == 1 )
      {
        *((_QWORD *)a3 + 182) = 0LL;
        *((_QWORD *)a3 + 183) = 0LL;
      }
      else if ( (unsigned __int16)Handle >= 2u )
      {
        v44 = 0LL;
        v35 = DpiQueryFeatureDriverInterface(a1, 4, (unsigned __int16)Handle, 16, &v44);
        v7 = v35;
        if ( v35 < 0 )
        {
          WdLogSingleEntry3(2LL, 4LL, v33, v35);
          WdLogGlobalForLineNumber = 858;
          goto LABEL_121;
        }
        v7 = 0;
        *((struct _UNICODE_STRING *)a3 + 91) = v44;
      }
    }
    if ( !a2[41] )
    {
      LODWORD(Handle) = 0;
      DpiIsFeatureEnabled(a1, 33LL, 0LL, &Handle);
      if ( (BYTE2(Handle) & 4) != 0 )
      {
        v34 = (int)Handle;
        if ( (_WORD)Handle )
        {
          Handle = 0LL;
          if ( (int)DpiQueryFeatureDriverInterface(a1, 33, v34, 8, &Handle) >= 0 )
          {
            KeyHandle = 0LL;
            if ( (int)DpiQueryFeatureDriverInterface(a1, 33, 1, 8, &KeyHandle) >= 0 )
              *((_QWORD *)a3 + 179) = KeyHandle;
          }
        }
      }
      LODWORD(Handle) = 0;
      if ( (int)DpiIsFeatureEnabled(a1, 39LL, 0LL, &Handle) >= 0 && (BYTE2(Handle) & 1) != 0 )
      {
        if ( (_WORD)Handle )
        {
          v44 = 0LL;
          if ( (int)DpiQueryFeatureDriverInterface(a1, 39, 1, 16, &v44) >= 0 )
            *((struct _UNICODE_STRING *)a3 + 92) = v44;
        }
      }
      Feature_NotifyResidency2__private_ReportDeviceUsage();
      LODWORD(Handle) = 0;
      if ( (int)DpiIsFeatureEnabled(a1, 43LL, 0LL, &Handle) >= 0 && (BYTE2(Handle) & 1) != 0 )
      {
        if ( (_WORD)Handle )
        {
          KeyHandle = 0LL;
          if ( (int)DpiQueryFeatureDriverInterface(a1, 43, 1, 8, &KeyHandle) >= 0 )
            *((_QWORD *)a3 + 186) = KeyHandle;
        }
      }
    }
  }
  *a2 = 0;
  if ( *(_BYTE *)(v8 + 2717) )
  {
    *((_DWORD *)a2 + 2) = 7471218;
    *((_QWORD *)a2 + 2) = L"d3d10warp.dll";
    *((_QWORD *)a2 + 4) = L"d3d10warp.dll";
    *((_QWORD *)a2 + 25) = L"d3d10warp.dll";
    *((_QWORD *)a2 + 27) = L"d3d10warp.dll";
    *((_DWORD *)a2 + 6) = 7471218;
    *((_DWORD *)a2 + 48) = 1966110;
    *((_DWORD *)a2 + 52) = 1966110;
LABEL_173:
    *((_QWORD *)a2 + 22) = *(_QWORD *)(v8 + 4960);
    *((_QWORD *)a2 + 23) = v8 + 2848;
    *((_DWORD *)a2 + 28) = *(_DWORD *)(v8 + 2708);
    *((_DWORD *)a2 + 29) = *(_DWORD *)(v8 + 3616);
    *((_DWORD *)a2 + 30) = *(_DWORD *)(v8 + 2704) - *(_DWORD *)(v8 + 3616);
    *((_QWORD *)a2 + 32) = *(_QWORD *)(v8 + 4968);
    *((_QWORD *)a2 + 33) = *(_QWORD *)(v8 + 4976);
    *((_DWORD *)a2 + 68) = *(_DWORD *)(v8 + 4984);
    *((_DWORD *)a2 + 78) = *(unsigned __int16 *)(v8 + 4810);
    v38 = v46;
    *v46 = *(_OWORD *)(v8 + 1000);
    v38[1] = *(_OWORD *)(v8 + 1016);
    v38[2] = *(_OWORD *)(v8 + 1032);
    v38[3] = *(_OWORD *)(v8 + 1048);
    v38[4] = *(_OWORD *)(v8 + 1064);
    v38[5] = *(_OWORD *)(v8 + 1080);
    v38[6] = *(_OWORD *)(v8 + 1096);
    return (unsigned int)v7;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 40) + 133LL) || *(_BYTE *)(v8 + 481) )
    goto LABEL_173;
  *a2 = 1;
  DestinationString = 0LL;
  v7 = DpiOpenPnpRegistryKey(a1, 2LL, 131097LL, &v41);
  if ( v7 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverName");
    v7 = 0;
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1041;
      if ( !*(_BYTE *)(v8 + 2722) )
        a2[40] = 1;
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1067;
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWSL");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1121;
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverWsaImage");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWsa64");
      if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 1158;
      }
      RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWsa32");
      if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 1176;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1139;
    }
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    v44 = 0LL;
    RtlInitUnicodeString(&v44, L"DX9");
    ObjectAttributes.RootDirectory = v41;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v44;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"DriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(KeyHandle, &DestinationString) < 0 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 1208;
      }
      RtlInitUnicodeString(&DestinationString, L"DriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(KeyHandle, &DestinationString) < 0 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 1221;
      }
      ZwClose(KeyHandle);
    }
    RtlInitUnicodeString(&DestinationString, L"DisplayUserModeDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1275;
    }
    RtlInitUnicodeString(&DestinationString, L"DisplayUserModeDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1293;
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1347;
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1365;
    }
    RtlInitUnicodeString(&DestinationString, L"ContentProtectionDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1382;
    }
    RtlInitUnicodeString(&DestinationString, L"MiracastCompanionDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1399;
    }
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 1409;
    RtlInitUnicodeString(&DestinationString, L"OpenGLDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1421;
    }
    RtlInitUnicodeString(&DestinationString, L"OpenGLDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v41, &DestinationString) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1434;
    }
    if ( *((_WORD *)a2 + 64) && **((_WORD **)a2 + 17) == 35 )
    {
      Handle = 0LL;
      DxgkFreeUnicodeString((__int64)(a2 + 128));
      DxgkFreeUnicodeString((__int64)(a2 + 152));
      RtlInitUnicodeString(&v44, L"OpenGL");
      ObjectAttributes.RootDirectory = v41;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v44;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"DriverName");
        if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 1475;
        }
        RtlInitUnicodeString(&DestinationString, L"DriverNameWow");
        if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 1488;
        }
      }
    }
    else
    {
      v9 = 0;
      Handle = 0LL;
    }
    if ( *((_QWORD *)a2 + 17) )
    {
      v47[5] = 0LL;
      LODWORD(v47[1]) = 288;
      LODWORD(v47[4]) = 0x4000000;
      v47[2] = L"OpenGLVersion";
      LODWORD(v47[6]) = 0;
      v47[3] = a2 + 144;
      LODWORD(v47[8]) = 288;
      v47[9] = L"OpenGLFlags";
      v47[10] = a2 + 148;
      v47[16] = L"OpenGLVersionWow";
      v47[17] = a2 + 168;
      v47[23] = L"OpenGLFlagsWow";
      v47[24] = a2 + 172;
      LODWORD(v47[11]) = 0x4000000;
      v47[12] = 0LL;
      LODWORD(v47[13]) = 0;
      LODWORD(v47[15]) = 288;
      LODWORD(v47[18]) = 0x4000000;
      v47[19] = 0LL;
      LODWORD(v47[20]) = 0;
      LODWORD(v47[22]) = 288;
      LODWORD(v47[25]) = 0x4000000;
      v47[26] = 0LL;
      LODWORD(v47[27]) = 0;
      if ( v9 )
      {
        v36 = Handle;
        v37 = 0x40000000LL;
      }
      else
      {
        v36 = *(HANDLE *)(v8 + 536);
        v37 = 0LL;
      }
      if ( (int)RtlQueryRegistryValuesEx(v37, v36, v47, 0LL, 0LL) < 0 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 1543;
      }
    }
    ZwClose(Handle);
    ZwClose(v41);
    goto LABEL_173;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 1016;
LABEL_121:
  DpiFreeAdapterInfo(a2);
  memset(a2, 0, 0x160uLL);
  if ( a3 )
    memset(a3, 0, 0x5D8uLL);
  return (unsigned int)v7;
}
