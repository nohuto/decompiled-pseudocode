/*
 * XREFs of ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18007DAE0
 * Callers:
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x18007DC10 (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 *     ?HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x18007DD9C (-HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 * Callees:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x18001A7AC (-HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPEND.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18005C714 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007E15C (-HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEP.c)
 *     ?HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18007EB94 (-HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HO.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupRemoveDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        char a3)
{
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // eax
  struct _HAM_DEPENDENCY_GROUP *v7; // rbx
  unsigned int v8; // edi
  struct _HAM_DEPENDENCY_LINK *DepLink; // rax
  __int64 v10; // rdx
  _DWORD *DependencyByType; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _HAM_DEPENDENCY_GROUP *v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF

  v16 = 0LL;
  v4 = 32LL;
  v5 = 32LL;
  if ( a1 )
    v5 = (__int64)a1 - 24;
  v18[0] = *(_QWORD *)v5;
  if ( a2 )
    v4 = (__int64)a2 - 24;
  v18[1] = *(_QWORD *)v4;
  v6 = HampDepGroupVerifyHostDispositionAndEnterWorker(a1, a2, &v16);
  v7 = v16;
  v8 = v6;
  if ( v6 >= 0 )
  {
    DepLink = HampDepGroupFindDepLink(v16, (struct _HAM_DEPENDENCY_LINK_ID *)v18);
    if ( DepLink
      && (LOBYTE(v10) = a3, (DependencyByType = (_DWORD *)HampDepLinkGetDependencyByType(DepLink, v10)) != 0LL) )
    {
      HampDepGroupAcquireLockExclusive(v7);
      DependencyByType[9] |= 1u;
      HampDepGroupReleaseLockExclusive(v7);
      if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
      {
        v16 = *(struct _HAM_DEPENDENCY_GROUP **)v7;
        v17 = *(_QWORD *)(*(_QWORD *)DependencyByType + 40LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v12,
          byte_1800D0277,
          v13,
          v14,
          (__int64)&v17,
          (__int64)&v16);
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741072;
    }
  }
  if ( v7 )
  {
    HampDepGroupRunStateChangeWorker(v7);
    HampDepGroupDereference(v7);
  }
  return v8;
}
