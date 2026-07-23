/*
 * XREFs of SmHwAcceleratorMgrAcquireAccelerators @ 0x140820CA8
 * Callers:
 *     SmHwAcceleratorMgrPartitionRegister @ 0x1408214A8 (SmHwAcceleratorMgrPartitionRegister.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SmHwAcceleratorCreate @ 0x140820A74 (SmHwAcceleratorCreate.c)
 *     SmHwAcceleratorMgrReleaseAccelerators @ 0x1408216D0 (SmHwAcceleratorMgrReleaseAccelerators.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall SmHwAcceleratorMgrAcquireAccelerators(__int64 a1)
{
  struct _PRIVILEGE_SET *v2; // rdi
  int v3; // r14d
  _DWORD *v4; // r13
  struct _PRIVILEGE_SET *v5; // r12
  unsigned int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // rax
  _BYTE *v12; // rcx
  __int64 v13; // rbx
  __int64 i; // r14
  ULONG *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 j; // rdi
  __int64 v21; // rcx
  ULONG v23; // [rsp+28h] [rbp-E0h]
  char v24[16]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h]
  __int128 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-A0h]
  __int128 v29; // [rsp+78h] [rbp-90h] BYREF
  __int128 v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+98h] [rbp-70h] BYREF
  int v32; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v33; // [rsp+A0h] [rbp-68h]
  unsigned int v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+ACh] [rbp-5Ch]
  char v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+108h] [rbp+0h] BYREF
  __int64 v38; // [rsp+110h] [rbp+8h]
  GUID *v39; // [rsp+118h] [rbp+10h]
  int v40; // [rsp+120h] [rbp+18h]
  int v41; // [rsp+124h] [rbp+1Ch]
  _BYTE *v42; // [rsp+128h] [rbp+20h]
  void (__fastcall *v43)(__int64, struct _KTHREAD *, __int64, struct _KLOCK_ENTRIES *); // [rsp+130h] [rbp+28h]
  __int64 v44; // [rsp+138h] [rbp+30h]
  int v45; // [rsp+140h] [rbp+38h]
  struct _PRIVILEGE_SET *v46; // [rsp+148h] [rbp+40h]
  int v47; // [rsp+150h] [rbp+48h]
  __int64 v48; // [rsp+158h] [rbp+50h]
  _BYTE v49[2]; // [rsp+168h] [rbp+60h] BYREF
  char v50; // [rsp+16Ah] [rbp+62h] BYREF
  int v51; // [rsp+16Ch] [rbp+64h]
  int v52; // [rsp+184h] [rbp+7Ch]
  _OWORD v53[3]; // [rsp+198h] [rbp+90h] BYREF
  int v54[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  int v55; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v56; // [rsp+1D8h] [rbp+D0h]
  __int64 v57; // [rsp+1E0h] [rbp+D8h]
  int v58; // [rsp+1E8h] [rbp+E0h]
  __int64 v59; // [rsp+1F0h] [rbp+E8h]
  int v60; // [rsp+1F8h] [rbp+F0h]
  __int64 v61; // [rsp+200h] [rbp+F8h]
  int v62; // [rsp+208h] [rbp+100h]
  const wchar_t *v63; // [rsp+210h] [rbp+108h]
  __int64 v64; // [rsp+218h] [rbp+110h]
  int v65; // [rsp+220h] [rbp+118h]
  __int64 v66; // [rsp+228h] [rbp+120h]
  int v67; // [rsp+230h] [rbp+128h]
  __int64 v68; // [rsp+238h] [rbp+130h]
  int v69; // [rsp+240h] [rbp+138h]
  __int128 v70; // [rsp+248h] [rbp+140h]
  int v71; // [rsp+258h] [rbp+150h]
  __int64 v72; // [rsp+260h] [rbp+158h]
  int v73; // [rsp+268h] [rbp+160h]

  v25 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset_0(&v37, 0, 0x58uLL);
  v27 = 0LL;
  v32 = 0;
  v28 = 0LL;
  *(_OWORD *)v24 = 0LL;
  memset_0(&v31, 0, 0x64uLL);
  *(_QWORD *)v54 = 0LL;
  v59 = 0LL;
  v58 = 0x4000000;
  v2 = 0LL;
  v55 = 288;
  v62 = 288;
  v56 = L"MaxAcceleratorsPerNuma";
  v3 = *(_DWORD *)(a1 + 1312);
  v65 = 0x4000000;
  v4 = (_DWORD *)(a1 + 1308);
  v57 = a1 + 1308;
  v60 = 0;
  v61 = 0LL;
  v63 = L"DescriptorsPerRequest";
  memset(v53, 0, sizeof(v53));
  v64 = a1 + 1312;
  v5 = 0LL;
  v66 = 0LL;
  v67 = 0;
  v68 = 0LL;
  v69 = 0;
  v70 = 0LL;
  v71 = 0;
  v72 = 0LL;
  v73 = 0;
  v26 = 0LL;
  RtlpQueryRegistryValues(
    0,
    (int)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
    (int)v54,
    0,
    v23,
    1);
  v6 = *(_DWORD *)(a1 + 1312);
  if ( !v6 || v6 > 2 )
    *(_DWORD *)(a1 + 1312) = v3;
  if ( !*v4 )
  {
    v7 = -1073741756;
LABEL_39:
    SmHwAcceleratorMgrReleaseAccelerators(a1);
    goto LABEL_40;
  }
  LODWORD(v29) = 2097153;
  *((_QWORD *)&v29 + 1) = SM_ACCELERATOR_COMPRESSION;
  *((_QWORD *)&v30 + 1) = PnpDriverObject;
  LODWORD(v30) = 0;
  v7 = AccelInitializeOffloadWorkspace(&v29, a1 + 1320);
  if ( v7 < 0 )
    goto LABEL_39;
  while ( 1 )
  {
    if ( HIDWORD(v25) )
    {
      v2 = (struct _PRIVILEGE_SET *)SmAllocEx(HIDWORD(v25), 0x4C496D73u, -1);
      if ( !v2 )
        goto LABEL_13;
    }
    v8 = AccelEnumAccelerators(&GUID_ACCELERATOR_TYPE_COMPRESSION, v2, (char *)&v25 + 4, &v25);
    v7 = v8;
    if ( v8 >= 0 )
      break;
    if ( v8 != -1073741789 )
      goto LABEL_39;
    if ( v2 )
    {
      CmSiFreeMemory(v2);
      v2 = 0LL;
    }
  }
  v9 = (unsigned int)v25;
  if ( !(_DWORD)v25 )
  {
    v7 = -1073741275;
    goto LABEL_39;
  }
  v10 = 2LL;
  v11 = &v50;
  v12 = v49;
  do
  {
    *(_OWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    v12 += 24;
    *(_DWORD *)(v11 - 2) = 1572865;
    v11 += 24;
    --v10;
  }
  while ( v10 );
  v51 = 1;
  v13 = 16 * v9;
  v52 = 3;
  if ( (unsigned __int64)(16 * v9) > 0xFFFFFFFF )
  {
    v7 = -1073741675;
    goto LABEL_39;
  }
  v5 = (struct _PRIVILEGE_SET *)SmAllocEx(v13, 0x68526D73u, -1);
  if ( !v5 )
  {
LABEL_13:
    v7 = -1073741670;
    goto LABEL_39;
  }
  v38 = *(_QWORD *)(a1 + 1320);
  v39 = &GUID_ACCELERATOR_TYPE_COMPRESSION;
  v43 = SmHwAcceleratorMgrAccelCallback;
  v40 = v25;
  v42 = v49;
  v47 = HIDWORD(v25);
  v37 = 5767169;
  v44 = a1;
  v45 = 65537;
  v48 = 0LL;
  v41 = 2;
  v46 = v2;
  LODWORD(v27) = 2097153;
  DWORD2(v28) = v13;
  *(_QWORD *)&v28 = v5;
  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v53);
  v7 = AccelAcquireResourcesSync(&v37, &v27);
  KiUnstackDetachProcess((__int64)v53, 0);
  if ( v7 < 0 )
    goto LABEL_39;
  for ( i = 0LL; (unsigned int)i < DWORD2(v27); i = (unsigned int)(i + 2) )
  {
    v15 = &v5->PrivilegeCount + 2 * i;
    *(_OWORD *)v24 = 0x100001uLL;
    *(_QWORD *)&v24[8] = *(_QWORD *)v15;
    memset_0(&v32, 0, 0x64uLL);
    v31 = 6815745;
    v7 = AccelQueryResourceInformation(v24, &v31);
    if ( v7 < 0 )
      goto LABEL_39;
    if ( v35 == 2 )
    {
      *(_OWORD *)v24 = 0x200100001uLL;
      *(_QWORD *)&v24[8] = *(_QWORD *)v15;
      memset_0(&v32, 0, 0x64uLL);
      v31 = 6815745;
      v7 = AccelQueryResourceInformation(v24, &v31);
      if ( v7 < 0 )
        goto LABEL_39;
      if ( (v33 & 0x100) != 0 )
      {
        *(_OWORD *)v24 = 0x500100001uLL;
        *(_QWORD *)&v24[8] = *(_QWORD *)v15;
        memset_0(&v32, 0, 0x64uLL);
        v31 = 6815745;
        v7 = AccelQueryResourceInformation(v24, &v31);
        if ( v7 < 0 )
          goto LABEL_39;
        if ( (v36 & 1) != 0 )
        {
          *(_OWORD *)v24 = 0x100100001uLL;
          *(_QWORD *)&v24[8] = *(_QWORD *)v15;
          memset_0(&v32, 0, 0x64uLL);
          v31 = 6815745;
          v7 = AccelQueryResourceInformation(v24, &v31);
          if ( v7 < 0 )
            goto LABEL_39;
          if ( v34 < (unsigned __int16)KeNumberNodes && *(_DWORD *)(a1 + 4LL * v34 + 1048) < *v4 )
          {
            v7 = SmHwAcceleratorCreate(a1, (__int64 *)v5 + i, v34);
            if ( v7 < 0 )
              goto LABEL_39;
            v16 = v26;
            *(_OWORD *)v15 = 0LL;
            v17 = a1 + 16LL * *(unsigned int *)(v16 + 44) + 24;
            v18 = *(_QWORD **)(v17 + 8);
            if ( *v18 != v17 )
              __fastfail(3u);
            *(_QWORD *)v16 = v17;
            *(_QWORD *)(v16 + 8) = v18;
            *v18 = v16;
            *(_QWORD *)(v17 + 8) = v16;
            v19 = *(unsigned int *)(v16 + 44);
            v26 = 0LL;
            ++*(_DWORD *)(a1 + 4 * v19 + 1048);
            ++*(_DWORD *)(a1 + 1304);
          }
        }
      }
    }
  }
  v7 = 0;
LABEL_40:
  if ( v2 )
    CmSiFreeMemory(v2);
  if ( v5 )
  {
    for ( j = 0LL; (unsigned int)j < DWORD2(v27); j = (unsigned int)(j + 1) )
    {
      v21 = *((_QWORD *)&v5->PrivilegeCount + j);
      if ( v21 )
        AccelCloseResource(v21);
    }
    CmSiFreeMemory(v5);
  }
  return (unsigned int)v7;
}
