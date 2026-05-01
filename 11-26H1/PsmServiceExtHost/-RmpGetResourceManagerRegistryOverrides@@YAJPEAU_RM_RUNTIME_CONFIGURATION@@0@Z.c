/*
 * XREFs of ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180080968
 * Callers:
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180080BD4 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 * Callees:
 *     ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18005E2A8 (-HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x18008BBB0 (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 __fastcall RmpGetResourceManagerRegistryOverrides(
        struct _RM_RUNTIME_CONFIGURATION *a1,
        struct _RM_RUNTIME_CONFIGURATION *a2)
{
  __int128 v2; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  LSTATUS v12; // ebx
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  _OWORD *v23; // rdi
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned int v28; // [rsp+20h] [rbp-89h] BYREF
  HKEY hKey; // [rsp+28h] [rbp-81h] BYREF
  HKEY v30; // [rsp+30h] [rbp-79h] BYREF
  __int128 v31; // [rsp+40h] [rbp-69h]
  __int128 v32; // [rsp+50h] [rbp-59h]
  __int128 v33; // [rsp+60h] [rbp-49h]
  __int128 v34; // [rsp+70h] [rbp-39h]
  __int128 v35; // [rsp+80h] [rbp-29h]
  __int128 v36; // [rsp+90h] [rbp-19h]
  __int128 v37; // [rsp+A0h] [rbp-9h]
  __int128 v38; // [rsp+B0h] [rbp+7h]
  __int128 v39; // [rsp+C0h] [rbp+17h] BYREF
  __int128 v40; // [rsp+D0h] [rbp+27h]
  __int128 v41; // [rsp+E0h] [rbp+37h]
  unsigned int v42; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v43; // [rsp+120h] [rbp+77h] BYREF
  int v44; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = *((_OWORD *)a1 + 1);
  v31 = *(_OWORD *)a1;
  v4 = *((_OWORD *)a1 + 2);
  v44 = 0;
  v32 = v2;
  v43 = 0;
  v5 = *((_OWORD *)a1 + 3);
  v28 = 0;
  v33 = v4;
  v42 = 0;
  v6 = *((_OWORD *)a1 + 4);
  hKey = 0LL;
  v34 = v5;
  v30 = 0LL;
  v7 = *((_OWORD *)a1 + 5);
  v35 = v6;
  v8 = *((_OWORD *)a1 + 6);
  v36 = v7;
  v9 = *((_OWORD *)a1 + 8);
  v37 = v8;
  v38 = *((_OWORD *)a1 + 7);
  v10 = *((_OWORD *)a1 + 9);
  v39 = v9;
  v11 = *((_OWORD *)a1 + 10);
  v40 = v10;
  v41 = v11;
  v12 = HampSystemOpenKey(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", 0x20019u, &hKey);
  if ( v12 < 0 )
    goto LABEL_21;
  if ( (int)HampSystemQueryDWordValue(hKey, L"MemoryFlags", &v42) >= 0 )
  {
    v13 = v31;
    if ( (v42 & 0xFFFFFFF0) == 0 )
      v13 = v42;
    LODWORD(v31) = v13;
  }
  v14 = HampSystemQueryDWordValue(hKey, L"CustomizationFlags", &v43);
  v15 = DWORD1(v31);
  if ( v14 >= 0 )
  {
    if ( (v43 & 0xFFFFFE00) == 0 )
      v15 = v43;
    DWORD1(v31) = v15;
  }
  RtlGetDeviceFamilyInfoEnum(0LL, &v44, 0LL);
  if ( v44 == 3 )
  {
    v15 |= 0x40u;
  }
  else
  {
    if ( v44 != 10 && v44 != 16 )
      goto LABEL_16;
    v15 |= 0x80u;
  }
  DWORD1(v31) = v15;
LABEL_16:
  if ( HampSystemOpenKey(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\ResourceManager",
         0x20019u,
         &v30) >= 0
    && (int)HampSystemQueryDWordValue(v30, L"SimulateCommitSavings", &v28) >= 0
    && v28 <= 1 )
  {
    DWORD1(v31) = v15 & 0xFFFFFFFD | (2 * (v28 & 1));
  }
  HampSystemQueryDWordValue(hKey, L"UserPresenceIoDeduction", (unsigned int *)&v39);
  v16 = v32;
  *(_OWORD *)a2 = v31;
  v17 = v33;
  *((_OWORD *)a2 + 1) = v16;
  v18 = v34;
  *((_OWORD *)a2 + 2) = v17;
  v19 = v35;
  *((_OWORD *)a2 + 3) = v18;
  v20 = v36;
  *((_OWORD *)a2 + 4) = v19;
  v21 = v37;
  *((_OWORD *)a2 + 5) = v20;
  v22 = v38;
  *((_OWORD *)a2 + 6) = v21;
  v23 = (_OWORD *)((char *)a2 + 128);
  v24 = v39;
  v12 = 0;
  *(v23 - 1) = v22;
  v25 = v40;
  *v23 = v24;
  v26 = v41;
  v23[1] = v25;
  v23[2] = v26;
LABEL_21:
  if ( hKey )
    RegCloseKey(hKey);
  if ( v30 )
    RegCloseKey(v30);
  return (unsigned int)v12;
}
