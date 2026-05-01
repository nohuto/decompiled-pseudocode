/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18002DFA4
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x18002DD60 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000D5C8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18002B6A0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18002CC20 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?_EmplaceImpl@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@2@PEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18002D9AC (-_EmplaceImpl@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x18002E448 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002F160 (-RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033478 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x180042CD4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemp.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F48C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        __int64 a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        unsigned int a4,
        DWORD a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        unsigned __int8 *a11,
        __int64 *a12)
{
  struct ExecutionModel::_ResourceInfo *v12; // rdi
  ExecutionModel::ResourceManager *v13; // rsi
  unsigned int v14; // r13d
  unsigned int v15; // r12d
  int v16; // ecx
  __int64 v17; // r8
  int v18; // r9d
  unsigned __int8 v19; // bl
  struct ExecutionModel::ExternalResourceSet *v20; // r15
  char v21; // r14
  unsigned int i; // edx
  struct ExecutionModel::ResourceManager *v23; // rcx
  unsigned __int8 v24; // r12
  unsigned int j; // esi
  struct _RM_SERVICE_GLOBALS **v26; // rsi
  char *v27; // r14
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // rdx
  struct ExecutionModel::ExternalResourceSet *v31; // rsi
  int v32; // edi
  __int64 *v33; // r14
  struct _RM_SERVICE_GLOBALS **v34; // rsi
  __int64 *v35; // rdi
  __int64 v37; // r13
  int v38; // eax
  struct ExecutionModel::_ResourceInfo *v39; // r9
  unsigned int v40; // r8d
  struct ExecutionModel::ExternalResourceSet *v41; // [rsp+48h] [rbp-B8h]
  unsigned int v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+74h] [rbp-8Ch] BYREF
  struct _RM_SERVICE_GLOBALS **v44; // [rsp+78h] [rbp-88h] BYREF
  struct ExecutionModel::_ResourceInfo *v45; // [rsp+80h] [rbp-80h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v46; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int8 *v47; // [rsp+90h] [rbp-70h] BYREF
  struct ExecutionModel::ExternalResourceSet *v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v49; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v50[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v51[144]; // [rsp+C0h] [rbp-40h] BYREF

  v12 = a3;
  v13 = g_pResourceManager;
  v14 = a2;
  v45 = a3;
  v15 = a4;
  v42 = a2;
  v47 = a11;
  v49 = a12;
  v44 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v43 = a4;
  memset_0(v51, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v51);
  v19 = 0;
  v46 = 0LL;
  v20 = 0LL;
  if ( v14 >= 0x32 || !v14 || !v12 || !a12 || !a7 )
  {
    v32 = -2147024809;
    goto LABEL_26;
  }
  v21 = 1;
  for ( i = 0; i < v14; ++i )
  {
    v38 = *((_DWORD *)v12 + 6 * i);
    if ( v38 != 22 && (unsigned int)(v38 - 23) > 3 )
    {
      v21 = 0;
      break;
    }
  }
  RmHamFindHostByPid(*((_QWORD *)v13 + 16) + 2360LL, a5, v17, &v46);
  RmpAcquireGlobalLock();
  v24 = 0;
  for ( j = 0; ; ++j )
  {
    if ( j >= v14 )
    {
      v26 = v44;
      goto LABEL_11;
    }
    v37 = 3LL * j;
    v32 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v44, *((_DWORD *)v12 + 6 * j), a5, 0);
    if ( v32 < 0 )
      break;
    v12 = v45;
    v14 = v42;
  }
  if ( (a8 & 1) == 0 )
    goto LABEL_23;
  v26 = v44;
  if ( v21 )
  {
    v32 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v44, *((_DWORD *)v45 + 2 * v37), a5, 1);
    if ( v32 < 0 )
      goto LABEL_23;
  }
  v12 = v45;
  v24 = 1;
LABEL_11:
  if ( v46 )
    v27 = (char *)v46 - 56;
  else
    v27 = 0LL;
  v28 = (__int64)v26[3];
  v48 = 0LL;
  if ( v27 )
    ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
      v23,
      2u,
      v42,
      v12,
      (struct _RM_ACTIVITY_HOST *)v27);
  v29 = ExecutionModel::ExternalResourceSet::ResourceSetFactory(&v48);
  v31 = v48;
  v32 = v29;
  if ( v29 < 0 )
    goto LABEL_16;
  v39 = v45;
  v40 = v42;
  v41 = v48;
  *((_QWORD *)v48 + 8) = v28;
  *((_DWORD *)v31 + 4) = *(_DWORD *)(v28 + 16);
  *((_QWORD *)v31 + 3) = *(_QWORD *)(v28 + 24);
  *((_QWORD *)v31 + 159) = *(_QWORD *)(v28 + 1272);
  v32 = ExecutionModel::BaseResourceSet::AcquireResources(v28, v30, v40, v39, v43, a5, a9, v47, v24, v41);
  if ( v32 < 0 )
  {
LABEL_16:
    if ( v31 )
    {
      ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(v31);
      (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    if ( v32 < 0 )
      goto LABEL_23;
  }
  else
  {
    if ( v27 && _InterlockedIncrement64((volatile signed __int64 *)v27 + 2) <= 1 )
      __fastfail(0xEu);
    v20 = v31;
    *((_QWORD *)v31 + 162) = a6;
    *((_QWORD *)v31 + 163) = a7;
    *((_DWORD *)v31 + 338) = a8 & 4 | a10 & 0xFB | *((_DWORD *)v31 + 338) & 0xFFFFFFFA;
    *((_QWORD *)v31 + 167) = v27;
  }
  v33 = v49;
  v34 = v44;
  *v49 = (__int64)v20;
  v35 = (__int64 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v35 )
  {
    v35[3] = *v33;
    v35[4] = (__int64)v20;
    if ( v20 )
      (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v20 + 8LL))(v20);
  }
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EmplaceImpl(
    (__int64)(v34 + 11),
    (__int64)v50,
    v35);
  (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v20 + 16LL))(v20);
  v32 = 0;
LABEL_23:
  RmpReleaseGlobalLock();
  if ( v46 )
    RmHamHostDereference(v46);
  v15 = v43;
  v14 = v42;
LABEL_26:
  if ( v47 )
    v19 = *v47;
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 9) != 0 && (qword_1800E1290 & 9) == qword_1800E1290 )
  {
    v43 = v19;
    v42 = a10;
    LODWORD(v49) = a9;
    LODWORD(v47) = a8;
    LODWORD(v48) = a5;
    LODWORD(v46) = v15;
    LODWORD(v44) = v14;
    v50[0] = v20;
    LODWORD(v45) = v32;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v16,
      (unsigned int)&unk_1800D13E4,
      v17,
      v18,
      (__int64)&v45,
      (__int64)v50,
      (__int64)&v44,
      (__int64)&v46,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v49,
      (__int64)&v42,
      (__int64)&v43);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v32;
}
