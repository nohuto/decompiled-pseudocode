/*
 * XREFs of ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029A48 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z @ 0x1800341D4 (-HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z @ 0x180036008 (-HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z @ 0x180036818 (-HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z.c)
 *     ?HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z @ 0x180036BD0 (-HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180037E08 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180038C80 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180038D00 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180049814 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSystemAppCompatIsPackageBlocked@@YAKPEBGK@Z @ 0x180058464 (-HampSystemAppCompatIsPackageBlocked@@YAKPEBGK@Z.c)
 *     ?HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z @ 0x18005F71C (-HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z.c)
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x18006E260 (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_APPLICATION_INFO *a2,
        unsigned int a3,
        struct _HAM_APPLICATION **a4)
{
  struct _HAM_SESSION *v6; // r14
  struct _HAM_RC_TREE_NODE *v7; // r15
  struct _HAM_APPLICATION *v8; // rsi
  __int64 v9; // rbx
  void *v10; // r12
  _WORD *v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax
  struct _HAM_SESSION *v14; // rax
  int v15; // eax
  struct _HAM_RC_TREE_NODE *v16; // rdi
  int State; // ebx
  unsigned __int64 v18; // rbx
  int v19; // r12d
  int v20; // eax
  unsigned __int64 v21; // rax
  struct _HAM_RC_TREE_NODE *v22; // r13
  struct _HAM_RC_TREE_NODE *v23; // rdi
  unsigned __int64 v24; // rbx
  int v25; // r14d
  int v26; // eax
  unsigned __int64 v27; // rax
  struct _HAM_PACKAGE *v28; // rdi
  struct _RM_PSM_KEY *v30; // rbx
  struct _HAM_RC_TREE_NODE *Child; // rax
  struct _HAM_APPLICATION **v32; // rcx
  struct _HAM_PACKAGE *v33; // rax
  struct _HAM_PACKAGE *v34; // rbx
  struct _HAM_USER *Heap; // rax
  struct _HAM_RC_TREE_NODE *v36; // rbx
  struct _HAM_APPLICATION *v37; // rax
  struct _HAM_APPLICATION *v38; // rdi
  struct _HAM_RC_TREE_NODE *v39; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+38h] [rbp-C8h] BYREF
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-B8h]
  struct _HAM_APPLICATION **v43; // [rsp+50h] [rbp-B0h]
  struct _HAM_RC_TREE_NODE *v44; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_SESSION *v45; // [rsp+60h] [rbp-A0h] BYREF
  struct _HAM_RC_TREE_NODE *v46; // [rsp+68h] [rbp-98h] BYREF
  struct _RM_PSM_KEY *v47; // [rsp+70h] [rbp-90h]
  _BYTE v48[132]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE DestinationSid[68]; // [rsp+104h] [rbp+4h] BYREF
  int v50; // [rsp+148h] [rbp+48h]
  _OWORD packageFamilyName[8]; // [rsp+150h] [rbp+50h] BYREF
  __int16 v52; // [rsp+1D0h] [rbp+D0h]
  _OWORD v53[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int16 v54; // [rsp+260h] [rbp+160h]
  WCHAR packageFullName[232]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v42 = a3;
  v47 = a2;
  v6 = 0LL;
  v43 = a4;
  v7 = 0LL;
  v8 = 0LL;
  memset_0(v53, 0, 0x82uLL);
  memset_0(packageFullName, 0, 0x1CEuLL);
  v41 = 462;
  v9 = 65LL;
  if ( (int)PsmGetPackageFullNameFromKey(a2, packageFullName, &v41) >= 0 )
  {
    memset_0(packageFamilyName, 0, 0x82uLL);
    packageFamilyNameLength = 65;
    if ( !PackageFamilyNameFromFullName(packageFullName, &packageFamilyNameLength, (PWSTR)packageFamilyName) )
    {
      v53[0] = packageFamilyName[0];
      v53[1] = packageFamilyName[1];
      v53[2] = packageFamilyName[2];
      v53[3] = packageFamilyName[3];
      v53[4] = packageFamilyName[4];
      v53[5] = packageFamilyName[5];
      v53[6] = packageFamilyName[6];
      v53[7] = packageFamilyName[7];
      v54 = v52;
    }
  }
  v10 = (void *)*((unsigned int *)a2 + 133);
  memset_0(v48, 0, 0xCCuLL);
  v11 = v48;
  do
  {
    if ( v9 == -2147483581 )
      break;
    v12 = v11[176];
    if ( !v12 )
      break;
    *v11++ = v12;
    --v9;
  }
  while ( v9 );
  v13 = v11 - 1;
  if ( v9 )
    v13 = v11;
  *v13 = 0;
  RtlCopySid(0x44u, DestinationSid, (char *)a2 + 464);
  v50 = (int)v10;
  v45 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v14 = HampSessionFindInManager(a1, (unsigned int)v10);
  if ( v14 )
  {
    v6 = v14;
    goto LABEL_17;
  }
  v15 = HampSessionCreate(a1, (unsigned int)v10, &v44);
  v16 = v44;
  State = v15;
  if ( v15 >= 0 )
  {
    HamRcNodeFindOrInsertChild(
      (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352),
      v10,
      (__int64 (__fastcall *)(void *, unsigned __int64))HampSessionCompareById,
      v44,
      &v45);
    v6 = v45;
    if ( v45 == v16 )
    {
      v6 = v16;
      goto LABEL_17;
    }
    State = 0;
  }
  if ( v16 )
    CemRcObjectDereference(v16);
  if ( State < 0 )
    goto LABEL_94;
LABEL_17:
  RtlAcquireSRWLockShared((char *)v6 + 56);
  v18 = *((_QWORD *)v6 + 5);
  v19 = *((_BYTE *)v6 + 48) & 1;
  if ( (*((_BYTE *)v6 + 48) & 1) == 0 )
    goto LABEL_25;
  if ( !v18 )
    goto LABEL_92;
  v18 ^= (unsigned __int64)v6 + 40;
LABEL_25:
  while ( v18 )
  {
    v20 = HampUserCompareByIdentity(DestinationSid, (void *)v18);
    if ( v20 < 0 )
    {
      v21 = *(_QWORD *)v18;
    }
    else
    {
      if ( v20 <= 0 )
        break;
      v21 = *(_QWORD *)(v18 + 8);
    }
    if ( v19 && v21 )
      v18 ^= v21;
    else
      v18 = v21;
  }
  if ( v18 )
  {
    if ( *(_QWORD *)(v18 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24)) <= 1 )
        __fastfail(0xEu);
      goto LABEL_29;
    }
LABEL_92:
    v18 = 0LL;
  }
LABEL_29:
  RtlReleaseSRWLockShared((char *)v6 + 56);
  if ( v18 )
  {
    v22 = (struct _HAM_RC_TREE_NODE *)v18;
    State = 0;
LABEL_31:
    v23 = 0LL;
    goto LABEL_32;
  }
  Heap = (struct _HAM_USER *)HampAllocateHeap(0xC8uLL);
  v36 = Heap;
  if ( !Heap )
  {
    State = -1073741801;
LABEL_94:
    v22 = 0LL;
    goto LABEL_31;
  }
  HampUserInitialize(v6, (union _RM_SID *)DestinationSid, Heap);
  v23 = v36;
  HamRcNodeFindOrInsertChild(
    v6,
    DestinationSid,
    (__int64 (__fastcall *)(void *, unsigned __int64))HampUserCompareByIdentity,
    v36,
    &v46);
  v22 = v46;
  if ( v46 == v36 )
  {
    v22 = v36;
    v23 = 0LL;
  }
  State = 0;
LABEL_32:
  if ( v6 )
    CemRcObjectDereference(v6);
  if ( v23 )
    CemRcObjectDereference(v23);
  if ( State < 0 )
    goto LABEL_96;
  RtlAcquireSRWLockShared((char *)v22 + 56);
  v24 = *((_QWORD *)v22 + 5);
  v25 = *((_BYTE *)v22 + 48) & 1;
  if ( (*((_BYTE *)v22 + 48) & 1) == 0 )
    goto LABEL_48;
  if ( !v24 )
    goto LABEL_70;
  v24 ^= (unsigned __int64)v22 + 40;
LABEL_48:
  while ( v24 )
  {
    v26 = HampPkgCompareByIdentity(v48, (void *)v24);
    if ( v26 < 0 )
    {
      v27 = *(_QWORD *)v24;
    }
    else
    {
      if ( v26 <= 0 )
        break;
      v27 = *(_QWORD *)(v24 + 8);
    }
    if ( v25 && v27 )
      v24 ^= v27;
    else
      v24 = v27;
  }
  if ( v24 )
  {
    if ( *(_QWORD *)(v24 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24)) <= 1 )
        __fastfail(0xEu);
      goto LABEL_52;
    }
LABEL_70:
    v24 = 0LL;
  }
LABEL_52:
  RtlReleaseSRWLockShared((char *)v22 + 56);
  if ( v24 )
  {
    v7 = (struct _HAM_RC_TREE_NODE *)v24;
    State = 0;
    v28 = 0LL;
    goto LABEL_54;
  }
  v33 = (struct _HAM_PACKAGE *)HampAllocateHeap(0x160uLL);
  v34 = v33;
  if ( !v33 )
  {
    State = -1073741801;
LABEL_96:
    v28 = 0LL;
    goto LABEL_54;
  }
  HampPkgInitialize(v22, (struct _HAM_PACKAGE_INFO *)v48, v33);
  v28 = v34;
  v39 = 0LL;
  HamRcNodeFindOrInsertChild(
    v22,
    (char *)v34 + 96,
    (__int64 (__fastcall *)(void *, unsigned __int64))HampPkgCompareByIdentity,
    v34,
    &v39);
  v7 = v39;
  if ( v39 )
  {
    if ( v34 == v39 )
    {
      v7 = v34;
      v28 = 0LL;
    }
  }
  else
  {
    v7 = 0LL;
  }
  State = 0;
LABEL_54:
  if ( v22 )
    CemRcObjectDereference(v22);
  if ( v28 )
    CemRcObjectDereference(v28);
  if ( State >= 0 )
  {
    v30 = v47;
    Child = HamRcNodeFindChild(v7, v47, (__int64 (__fastcall *)(void *, __int64))HampAppCompareByIdentity);
    if ( Child )
    {
      v32 = v43;
      State = 0;
    }
    else
    {
      packageFamilyNameLength = 256;
      PsmGetPackageFullNameFromKey(v30, v53, &packageFamilyNameLength);
      if ( HampSystemAppCompatIsPackageBlocked((PCWSTR)v53, v42) )
      {
        State = -1058275320;
        goto LABEL_59;
      }
      v37 = (struct _HAM_APPLICATION *)HampAllocateHeap(0x270uLL);
      v38 = v37;
      if ( !v37 )
      {
        State = -1073741801;
        goto LABEL_59;
      }
      HampAppInitialize(v7, v30, v37);
      State = HampAppAllocateState(v38);
      if ( State < 0 )
      {
        CemRcObjectDereference(v38);
        goto LABEL_59;
      }
      v39 = 0LL;
      v8 = v38;
      HamRcNodeFindOrInsertChild(
        v7,
        (char *)v38 + 96,
        (__int64 (__fastcall *)(void *, unsigned __int64))HampAppCompareByIdentity,
        v38,
        &v39);
      Child = v39;
      v32 = v43;
      State = 0;
      if ( v39 == v38 )
      {
        *v43 = v38;
        v8 = 0LL;
        goto LABEL_59;
      }
    }
    *v32 = Child;
  }
LABEL_59:
  if ( v7 )
    CemRcObjectDereference(v7);
  if ( v8 )
    CemRcObjectDereference(v8);
  return (unsigned int)State;
}
