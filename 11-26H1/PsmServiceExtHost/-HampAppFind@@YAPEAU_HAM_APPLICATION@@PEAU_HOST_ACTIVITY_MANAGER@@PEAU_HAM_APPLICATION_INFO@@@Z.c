/*
 * XREFs of ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180036468
 * Callers:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180015200 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800403DC (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x1800570D4 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180057280 (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 * Callees:
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x180036364 (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180037EF0 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

struct _HAM_APPLICATION *__fastcall HampAppFind(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_APPLICATION_INFO *a2)
{
  struct _HAM_APPLICATION *App; // rbx
  __int64 v5; // rdi
  int v6; // r14d
  _WORD *v7; // rdx
  __int16 v8; // ax
  _WORD *v9; // rax
  struct _HAM_PACKAGE *v10; // rax
  struct _HAM_PACKAGE *v11; // rdi
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 packageFamilyNameLength[3]; // [rsp+24h] [rbp-DCh] BYREF
  _OWORD v15[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v16; // [rsp+B0h] [rbp-50h]
  _BYTE v17[132]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE DestinationSid[68]; // [rsp+144h] [rbp+44h] BYREF
  int v19; // [rsp+188h] [rbp+88h]
  _OWORD packageFamilyName[8]; // [rsp+190h] [rbp+90h] BYREF
  __int16 v21; // [rsp+210h] [rbp+110h]
  WCHAR packageFullName[232]; // [rsp+220h] [rbp+120h] BYREF

  memset_0(v15, 0, 0x82uLL);
  memset_0(packageFullName, 0, 0x1CEuLL);
  v13 = 462;
  App = 0LL;
  v5 = 65LL;
  if ( (int)PsmGetPackageFullNameFromKey(a2, packageFullName, &v13) >= 0 )
  {
    memset_0(packageFamilyName, 0, 0x82uLL);
    packageFamilyNameLength[0] = 65;
    if ( !PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, (PWSTR)packageFamilyName) )
    {
      v15[0] = packageFamilyName[0];
      v15[1] = packageFamilyName[1];
      v15[2] = packageFamilyName[2];
      v15[3] = packageFamilyName[3];
      v15[4] = packageFamilyName[4];
      v15[5] = packageFamilyName[5];
      v15[6] = packageFamilyName[6];
      v15[7] = packageFamilyName[7];
      v16 = v21;
    }
  }
  v6 = *((_DWORD *)a2 + 133);
  memset_0(v17, 0, 0xCCuLL);
  v7 = v17;
  do
  {
    if ( v5 == -2147483581 )
      break;
    v8 = *(_WORD *)((char *)v7 + (char *)v15 - v17);
    if ( !v8 )
      break;
    *v7++ = v8;
    --v5;
  }
  while ( v5 );
  v9 = v7 - 1;
  if ( v5 )
    v9 = v7;
  *v9 = 0;
  RtlCopySid(0x44u, DestinationSid, (char *)a2 + 464);
  v19 = v6;
  v10 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v17);
  v11 = v10;
  if ( v10 )
  {
    App = HampPkgFindApp(v10, a2);
    CemRcObjectDereference(v11);
  }
  return App;
}
