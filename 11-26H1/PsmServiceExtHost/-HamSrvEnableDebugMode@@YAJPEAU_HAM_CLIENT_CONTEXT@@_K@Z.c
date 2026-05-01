/*
 * XREFs of ?HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18007A24C
 * Callers:
 *     HamRpcSrvDebugModeEnable @ 0x18007C880 (HamRpcSrvDebugModeEnable.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180015080 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003F124 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F27C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F30C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007E334 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvEnableDebugMode(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v4; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v11; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v13[144]; // [rsp+40h] [rbp-B8h] BYREF

  memset_0(v13, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CE12D);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  v4 = HampClientPkgFindByPackageHandle(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    v7 = *((_QWORD *)v4 + 7);
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v7);
    if ( (*((_BYTE *)v5 + 64) & 4) != 0 )
    {
      v6 = -1073741431;
    }
    else
    {
      if ( (*((_BYTE *)v5 + 64) & 2) == 0 && (*(_BYTE *)(v7 + 340) & 4) == 0 )
      {
        *(_DWORD *)(*((_QWORD *)v5 + 7) + 340LL) |= 4u;
        *((_DWORD *)v5 + 16) |= 2u;
        HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v7);
        HampPkgNotifyDebugModeChanged((struct _HAM_PACKAGE *)v7);
        v6 = 0;
        goto LABEL_13;
      }
      v6 = -1073700861;
    }
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v7);
LABEL_13:
    CemRcObjectDereference(v5);
    goto LABEL_14;
  }
  v6 = -1073741275;
LABEL_14:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v12 = a2;
    v11 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E12B0,
      byte_1800CEF55,
      v8,
      v9,
      (__int64)&v11,
      (__int64)&v12);
  }
  return v6;
}
