/*
 * XREFs of ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000D5C8
 * Callers:
 *     RmgrSrv_RmAccessCheck @ 0x18000D7B0 (RmgrSrv_RmAccessCheck.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18002DFA4 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180063550 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x1800818EC (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028E2C (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033478 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18004A1A8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180064268 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
        struct _RM_SERVICE_GLOBALS **a1,
        int a2,
        DWORD a3,
        char a4)
{
  char *v7; // rdi
  int v9; // esi
  struct ExecutionModel::ResourceManager *v10; // rcx
  unsigned int v11; // ebx
  HANDLE v12; // r14
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v19; // [rsp+4Ch] [rbp-B4h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h]
  int v22; // [rsp+60h] [rbp-A0h]
  __int16 v23; // [rsp+64h] [rbp-9Ch]
  _BYTE v24[560]; // [rsp+70h] [rbp-90h] BYREF

  v7 = 0LL;
  P = 0LL;
  v9 = 0;
  memset_0(v24, 0, 0x228uLL);
  if ( (unsigned int)(a2 - 3) > 0x2E )
    goto LABEL_11;
  if ( (*((int (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*a1 + 5))(a1, a3, v24) >= 0 )
  {
    RmpActivityHostFindByPsmId(a1[16], (struct _RM_PSM_HOST_INFO *)v24, (struct _RM_ACTIVITY_HOST **)&P);
    v7 = (char *)P;
    if ( P )
    {
      if ( !*((_BYTE *)P + 648) )
      {
        v20 = a2;
        v21 = 1LL;
        v22 = 101;
        v23 = 256;
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          v10,
          (a4 != 0) + 2,
          1u,
          (struct ExecutionModel::_ResourceInfo *)&v20,
          (struct _RM_ACTIVITY_HOST *)P);
        if ( v22 != 101 )
        {
          v11 = 0;
          goto LABEL_12;
        }
        goto LABEL_11;
      }
    }
  }
  P = 0LL;
  v12 = OpenProcess(0x100000u, 0, a3);
  v11 = 1;
  if ( v12 )
  {
    tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&P);
    P = v12;
    if ( WaitForSingleObject(v12, 0) == 258 )
      v9 = 1;
  }
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&P);
  if ( !v9 )
LABEL_11:
    v11 = -2147024891;
LABEL_12:
  if ( v7 )
    RmpObjectRelease(v7);
  if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 9LL) )
  {
    v18 = a2;
    v19 = a3;
    LODWORD(P) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (unsigned int)&unk_1800D114F,
      v14,
      v15,
      (__int64)&P,
      (__int64)&v19,
      (__int64)&v18);
  }
  return v11;
}
