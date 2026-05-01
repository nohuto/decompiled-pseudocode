/*
 * XREFs of ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0
 * Callers:
 *     HamRpcSrvCreateActivity @ 0x1800638F0 (HamRpcSrvCreateActivity.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180001EA4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180010D20 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x1800191F0 (-HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029658 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x1800299BC (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180029A08 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029A48 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002A6FC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18002B1F0 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ??0HAM_ACTIVITY_RM_CONTEXT@@QEAA@PEAU_HAM_ACTIVITY@@@Z @ 0x18002BE3C (--0HAM_ACTIVITY_RM_CONTEXT@@QEAA@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002F224 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18002FB04 (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x180039830 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180039924 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     RmpResourceSetPropertiesRemoveAdditiveResources @ 0x180069D20 (RmpResourceSetPropertiesRemoveAdditiveResources.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18006AAB8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006C0B4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180070958 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall __noreturn HamSrvCreateActivity(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        void *a9,
        unsigned __int64 *a10)
{
  DWORD v12; // ebx
  bool v13; // cf
  union _RM_SID *v14; // r15
  DWORD v15; // edi
  _QWORD *Value; // rbx
  int v17; // edi
  __int64 *v18; // rax
  __int64 v19; // rdx
  unsigned __int16 *v21; // rbx
  unsigned __int64 v22; // rsi
  unsigned int v23; // eax
  _WORD *v24; // rax
  __int64 v25; // rdx
  __int16 v26; // cx
  _WORD *v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // r8d
  __int16 v30; // cx
  char v31; // si
  struct _HOST_ACTIVITY_MANAGER *v32; // rdi
  int Host; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v34; // rax
  char *Heap; // rax
  unsigned __int64 v36; // rsi
  _QWORD *v37; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v38; // rax
  __int64 v39; // rdx
  __int128 v40; // xmm0
  struct _HAM_CLIENT_CONTEXT *v41; // r14
  struct _HOST_ACTIVITY_MANAGER *v42; // rdx
  HAM_ACTIVITY_RM_CONTEXT *v43; // rax
  HAM_ACTIVITY_RM_CONTEXT *v44; // rax
  void *v45; // rax
  int HostByProcessHandle; // eax
  __int64 v47; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v48; // rsi
  unsigned __int64 v49; // r8
  struct _RM_HAM_ACTIVITY_HOST *v50; // rax
  struct _RM_HAM_ACTIVITY_HOST *v51; // r10
  unsigned __int64 v52; // r11
  int v53; // eax
  DWORD v54; // edi
  int v55; // ebx
  __int64 v56; // r8
  __int64 v57; // r9
  struct _RM_HAM_ACTIVITY_HOST *v58; // rcx
  unsigned int v59; // edx
  char v60; // [rsp+60h] [rbp-A0h]
  struct _RM_HAM_ACTIVITY_HOST *v62; // [rsp+78h] [rbp-88h]
  struct _RM_HAM_ACTIVITY_HOST *v63; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v65; // [rsp+90h] [rbp-70h] BYREF
  struct _HAM_ACTIVITY *v66; // [rsp+98h] [rbp-68h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v67; // [rsp+A0h] [rbp-60h]
  const wchar_t *v68; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int16 *v69; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v70; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v71; // [rsp+C0h] [rbp-40h]
  _OWORD TlsValue[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v73; // [rsp+150h] [rbp+50h]
  _BYTE v74[464]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE DestinationSid[68]; // [rsp+330h] [rbp+230h] BYREF
  unsigned int v76; // [rsp+374h] [rbp+274h]
  unsigned int v77; // [rsp+378h] [rbp+278h]
  __int64 v78; // [rsp+380h] [rbp+280h]

  v69 = a2;
  v71 = a10;
  memset_0(v74, 0, 0x228uLL);
  v12 = HampLockTrackerId;
  v73 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v12, TlsValue);
  }
  HampSrvTraceActivityCreateStart();
  v13 = *(_DWORD *)a8 < 0x8000000u;
  v14 = 0LL;
  v64 = 0LL;
  v66 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v60 = 0;
  v67 = 0LL;
  v70 = -1LL;
  if ( !v13
    || wcsnlen((const wchar_t *)a8 + 6, 0x40uLL) == 64
    || wcsnlen((const wchar_t *)a8 + 70, 0x40uLL) == 64
    || *((int *)a8 + 67) > 5 )
  {
    *((_WORD *)a8 + 69) = 0;
    Host = -1073741578;
    *((_WORD *)a8 + 133) = 0;
    goto LABEL_110;
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v15) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x200uLL;
    ++Value[10];
  }
  RtlAcquireSRWLockShared((char *)a1 + 40);
  v17 = *((_DWORD *)a1 + 50);
  if ( HampLockTrackerId != -1 )
  {
    v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v19 = *v18;
    if ( (*v18 & 0x200) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v18[10]-- == 1 )
      *v18 = v19 & 0xFFFFFFFFFFFFFDFFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 40);
  if ( v17 != 2 )
  {
    Host = -1073741661;
LABEL_110:
    v22 = a7;
    goto LABEL_81;
  }
  v21 = v69;
  LODWORD(v65) = 0;
  if ( !(unsigned __int8)PsmIsValidKey(v69) )
  {
    v55 = -1073741585;
LABEL_97:
    v22 = a7;
    goto LABEL_80;
  }
  if ( a4 < 0xC || !RtlValidSid(a3) || RtlLengthSid(a3) != a4 )
  {
    v55 = -1073741584;
    goto LABEL_97;
  }
  if ( !a6 || ((a6 - 1) & a6) != 0 )
  {
    v55 = -1073741581;
    goto LABEL_97;
  }
  v22 = a7;
  _BitScanForward(&v23, a6);
  if ( v23 >= 4 )
  {
    v55 = -1073741581;
  }
  else
  {
    if ( a7 != -1 )
    {
      v24 = v74;
      v25 = 232LL;
      do
      {
        if ( v25 == -2147483414 )
          break;
        v26 = *(_WORD *)((char *)v24 + (char *)v21 - v74);
        if ( !v26 )
          break;
        *v24++ = v26;
        --v25;
      }
      while ( v25 );
      v27 = v24 - 1;
      if ( v25 )
        v27 = v24;
      *v27 = 0;
      RtlCopySid(0x44u, DestinationSid, a3);
      v76 = a5;
      v77 = a6;
      v78 = a7;
      goto LABEL_31;
    }
    v55 = -1073741580;
  }
LABEL_80:
  Host = v55 + 1;
  if ( Host < 0 )
  {
LABEL_81:
    v45 = a9;
LABEL_82:
    v41 = a1;
    goto LABEL_83;
  }
LABEL_31:
  v14 = (union _RM_SID *)DestinationSid;
  if ( !HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v74, a8) )
  {
    Host = -1073741578;
    goto LABEL_81;
  }
  v28 = *(_DWORD *)a8;
  if ( (*(_DWORD *)a8 & 0x80000) != 0 )
  {
    v45 = a9;
    if ( !a9 )
    {
      Host = -1073741776;
      goto LABEL_82;
    }
  }
  v29 = (v28 >> 22) & 1;
  if ( (v28 & 0x2000000) != 0 )
    v29 |= 2u;
  v30 = *((_WORD *)a8 + 156);
  v31 = (v28 & 0x2000000) != 0;
  if ( (v30 & 0xEu) >= 4 || (v30 & 0x40) != 0 )
    v29 |= 4u;
  v32 = (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                        - 48LL * *((unsigned __int8 *)a1 + 164)
                                        - 16);
  if ( (v28 & 0x200000) == 0 )
  {
    Host = HampHostFindOrCreate(v32, (__int64)v74, v29, v31, &v63);
    v34 = v63;
LABEL_39:
    v62 = v34;
    goto LABEL_40;
  }
  v65 = 0LL;
  Host = RmHamFindHost((__int64)v32, v78, v31, &v65);
  if ( Host >= 0 )
  {
    v34 = v65;
    goto LABEL_39;
  }
  v34 = 0LL;
LABEL_40:
  if ( Host < 0 )
    goto LABEL_67;
  if ( HampPkgIsServicingEnabled(*(struct _HAM_PACKAGE **)(*((_QWORD *)v34 + 99) + 88LL))
    && (unsigned int)dword_1800E12B0 > 4
    && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 0x400000000008LL) )
  {
    v63 = (struct _RM_HAM_ACTIVITY_HOST *)0x1000000;
    v65 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v62 - 3);
    v68 = (const wchar_t *)((char *)v62 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v62,
      (__int64)&unk_1800CF780,
      v56,
      v57,
      &v68,
      (__int64)&v65,
      (__int64)&v63);
  }
  if ( !a9 )
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x238uLL);
    v36 = (unsigned __int64)Heap;
    if ( !Heap )
    {
      v41 = a1;
      Host = -1073741801;
      goto LABEL_106;
    }
    memset_0(Heap + 40, 0, 0x210uLL);
    *(_QWORD *)v36 = 0LL;
    *(_QWORD *)(v36 + 8) = 0LL;
    *(_QWORD *)(v36 + 24) = 1LL;
    *(_QWORD *)(v36 + 16) = -1LL;
    *(_QWORD *)(v36 + 32) = (char *)v32 + 440;
    *(_QWORD *)(v36 + 40) = HamObjectIdGenerate(5);
    v37 = (_QWORD *)(v36 + 112);
    v38 = a8;
    *(_WORD *)(v36 + 562) = 1536;
    v39 = 3LL;
    do
    {
      v37 += 16;
      v40 = *(_OWORD *)v38;
      v38 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v38 + 128);
      *((_OWORD *)v37 - 8) = v40;
      *((_OWORD *)v37 - 7) = *((_OWORD *)v38 - 7);
      *((_OWORD *)v37 - 6) = *((_OWORD *)v38 - 6);
      *((_OWORD *)v37 - 5) = *((_OWORD *)v38 - 5);
      *((_OWORD *)v37 - 4) = *((_OWORD *)v38 - 4);
      *((_OWORD *)v37 - 3) = *((_OWORD *)v38 - 3);
      *((_OWORD *)v37 - 2) = *((_OWORD *)v38 - 2);
      *((_OWORD *)v37 - 1) = *((_OWORD *)v38 - 1);
      --v39;
    }
    while ( v39 );
    *v37 = *(_QWORD *)v38;
    RmpAcquireGlobalLock();
    *(_QWORD *)(v36 + 80) = RmHamHostReference(v62);
    RmpReleaseGlobalLock();
    *(_QWORD *)(v36 + 512) = 0LL;
    if ( (*(_DWORD *)a8 & 0x40000) != 0 )
    {
      HampHostAcquireLockSharedEx(*(struct _RM_HAM_ACTIVITY_HOST **)(v36 + 80), 0);
      v58 = *(struct _RM_HAM_ACTIVITY_HOST **)(v36 + 80);
      *(_QWORD *)(v36 + 520) = *((_QWORD *)v62 + 101);
      HampHostReleaseLockSharedEx(v58, v59);
    }
    else
    {
      *(_QWORD *)(v36 + 520) = 0LL;
    }
    v41 = a1;
    v42 = (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(v36 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 440);
    *(_QWORD *)(v36 + 64) = a1;
    Host = HampRmPopulateDefaultProperties((struct _HAM_ACTIVITY_PROPERTIES *)(v36 + 112), v42, 0);
    if ( Host < 0 )
      goto LABEL_52;
    v43 = (HAM_ACTIVITY_RM_CONTEXT *)operator new(0x20uLL);
    if ( !v43 || (v44 = HAM_ACTIVITY_RM_CONTEXT::HAM_ACTIVITY_RM_CONTEXT(v43, (struct _HAM_ACTIVITY *)v36)) == 0LL )
    {
      Host = -1073741801;
      goto LABEL_52;
    }
    *(_QWORD *)(v36 + 88) = v44;
    Host = HampActInsert((struct _HAM_ACTIVITY *)v36);
    if ( Host < 0 )
    {
LABEL_52:
      CemRcObjectDereference((_QWORD *)v36);
LABEL_106:
      v36 = v64;
      goto LABEL_54;
    }
LABEL_53:
    Host = 0;
    v70 = *(_QWORD *)(v36 + 40);
    *v71 = v70;
    goto LABEL_54;
  }
  v64 = 0LL;
  v63 = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle((__int64)v32, a9, v31, &v63);
  v48 = v63;
  Host = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    Host = HampHostQueryHostGenerationForProcess(v63, a9, &v64);
    if ( Host >= 0 )
    {
      v49 = v64;
      v50 = v48;
      v67 = v48;
      goto LABEL_72;
    }
  }
  if ( v48 )
    RmHamHostDereference(v48);
  v49 = 0LL;
  if ( Host == -1073741275 )
  {
    Host = -1058275323;
    goto LABEL_67;
  }
  v50 = 0LL;
  v67 = 0LL;
  if ( Host >= 0 )
  {
LABEL_72:
    if ( v62 == v50 )
    {
      RmpResourceSetPropertiesRemoveAdditiveResources((char *)a8 + 280, v47, v49);
      v41 = a1;
      v60 = 1;
      v53 = HampActCreate(a1, v32, v51, a8, v52, v52, &v66);
    }
    else
    {
      v41 = a1;
      v53 = HampDepGroupAddDonationDependency(a1, v50, v49, v62, a8, &v66);
    }
    v36 = (unsigned __int64)v66;
    Host = v53;
    if ( v53 < 0 )
    {
LABEL_54:
      if ( v36 )
        CemRcObjectDereference((_QWORD *)v36);
      goto LABEL_56;
    }
    goto LABEL_53;
  }
LABEL_67:
  v41 = a1;
LABEL_56:
  if ( v62 )
    RmHamHostDereference(v62);
  if ( v67 )
    RmHamHostDereference(v67);
  v22 = a7;
  v45 = a9;
LABEL_83:
  v54 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v54, 0LL);
    v45 = a9;
  }
  if ( v45 )
    LODWORD(v45) = GetProcessId(v45);
  HampSrvTraceActivityCreateStop(Host, v70, v41, v69, a6, v14, v22, a8, 0, (unsigned int)v45, v60);
}
