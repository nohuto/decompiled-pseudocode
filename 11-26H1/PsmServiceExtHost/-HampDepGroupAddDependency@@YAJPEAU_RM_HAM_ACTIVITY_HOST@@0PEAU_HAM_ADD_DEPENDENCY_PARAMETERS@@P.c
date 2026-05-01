/*
 * XREFs of ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A2EC
 * Callers:
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180066F48 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18006AAB8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18007D2A8 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x18007D42C (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007D628 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800024CC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015B68 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019ACC (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 *     ?HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18001A698 (-HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_.c)
 *     ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x18001A7AC (-HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPEND.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001AD9C (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001B354 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_DONATION_DEPENDENCY@@@Z @ 0x180067F3C (-HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_.c)
 *     ?HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18007EB94 (-HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HO.c)
 *     ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18007EE6C (-HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18007EF48 (-HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 *     ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x18007EFC4 (-HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z.c)
 *     ?HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x18007F0E8 (-HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 *     ?HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_TERMINATE_REASON@@W4_HAM_TERMINATE_TYPE@@PEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x18007F1CC (-HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupAddDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_ADD_DEPENDENCY_PARAMETERS *a3,
        struct _HAM_HOST_DEPENDENCY **a4,
        struct _HAM_DEPENDENCY_GROUP **a5)
{
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _HAM_DEPENDENCY_GROUP *v12; // rsi
  struct _HAM_DEPENDENCY_GROUP *DepLink; // rax
  __int64 v14; // rdx
  struct _HAM_DEPENDENCY_GROUP *v15; // r14
  __int64 DependencyByType; // rax
  unsigned __int64 v17; // rcx
  char *Heap; // rdi
  int State; // eax
  _QWORD *v20; // rax
  char *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  char v28[8]; // [rsp+50h] [rbp-41h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v29; // [rsp+58h] [rbp-39h] BYREF
  __int64 v30; // [rsp+60h] [rbp-31h] BYREF
  __int64 v31; // [rsp+68h] [rbp-29h] BYREF
  __int64 v32; // [rsp+70h] [rbp-21h] BYREF
  struct _HAM_HOST_DEPENDENCY **v33; // [rsp+78h] [rbp-19h]
  struct _HAM_DEPENDENCY_GROUP **v34; // [rsp+80h] [rbp-11h]
  __int128 v35; // [rsp+88h] [rbp-9h] BYREF

  v34 = a5;
  v33 = a4;
  v29 = 0LL;
  v35 = 0LL;
  if ( a1 == a2 )
    return (unsigned int)-1073741776;
  v8 = HampDepGroupEnsureHostDisposition(a1, a2, &v29);
  if ( v8 >= 0 )
  {
    v9 = 32LL;
    v10 = 32LL;
    if ( a2 )
      v10 = (__int64)a2 - 24;
    if ( a1 )
      v9 = (__int64)a1 - 24;
    v11 = *(_QWORD *)v9;
    v12 = v29;
    *((_QWORD *)&v35 + 1) = *(_QWORD *)v10;
    *(_QWORD *)&v35 = v11;
    DepLink = HampDepGroupFindDepLink(v29, (struct _HAM_DEPENDENCY_LINK_ID *)&v35);
    v29 = DepLink;
    v15 = DepLink;
    if ( DepLink )
    {
      if ( *(_BYTE *)a3 > 3u )
      {
        DependencyByType = 0LL;
      }
      else
      {
        LOBYTE(v14) = *(_BYTE *)a3;
        DependencyByType = HampDepLinkGetDependencyByType(DepLink, v14);
      }
      if ( DependencyByType )
      {
        if ( (*(_BYTE *)(DependencyByType + 36) & 1) == 0 )
        {
          v8 = -1073741270;
          goto LABEL_60;
        }
        HampDepGroupRunStateChangeWorkerIteration(v12);
      }
    }
    else
    {
      v8 = HampDepGroupCreateLink(v12, (struct _HAM_DEPENDENCY_LINK_ID *)&v35, &v29);
      if ( v8 < 0 )
        goto LABEL_60;
      v15 = v29;
    }
    if ( *(_BYTE *)a3 )
    {
      switch ( *(_BYTE *)a3 )
      {
        case 1:
          v17 = 80LL;
          break;
        case 2:
          v17 = 48LL;
          break;
        case 3:
          v17 = 88LL;
          break;
        case 4:
          v17 = 112LL;
          break;
        default:
          v8 = -1073741583;
          goto LABEL_60;
      }
    }
    else
    {
      v17 = 96LL;
    }
    Heap = (char *)HampAllocateHeap(v17);
    if ( !Heap )
    {
      v8 = -1073741801;
      goto LABEL_60;
    }
    Heap[40] = *(_BYTE *)a3;
    if ( *(_BYTE *)a3 )
    {
      if ( *(_BYTE *)a3 != 1 )
      {
        switch ( *(_BYTE *)a3 )
        {
          case 2:
            *(_OWORD *)Heap = 0LL;
            *((_OWORD *)Heap + 1) = 0LL;
            *((_OWORD *)Heap + 2) = 0LL;
            Heap[40] = 2;
            *((_QWORD *)Heap + 1) = v15;
            break;
          case 3:
            HampTerminateDepInitialize(
              v15,
              a1,
              *((_QWORD *)a3 + 51),
              a2,
              *((_QWORD *)a3 + 52),
              *((_DWORD *)a3 + 106),
              *((_DWORD *)a3 + 107),
              Heap);
            break;
          case 4:
            HampDonationDepInitialize(v15, a1, *((_QWORD *)a3 + 51), a2, (struct _HAM_DONATION_DEPENDENCY *)Heap);
            break;
        }
        goto LABEL_42;
      }
      HampHostDynamicDepInitialize(v15, a1, a2, (struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
      State = HampHostDynamicDepAllocateState((struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
    }
    else
    {
      HampHostProcessDepInitialize(v15, a1, a2, (struct _HAM_HOST_PROCESS_DEPENDENCY *)Heap);
      State = HampHostProcessDepAllocateState(
                (struct _HAM_HOST_PROCESS_DEPENDENCY *)Heap,
                *((_DWORD *)a3 + 106),
                *((_DWORD *)a3 + 107));
    }
    v8 = State;
    if ( State < 0 )
    {
LABEL_58:
      HampHostDepDestroy((struct _HAM_HOST_DEPENDENCY *)Heap);
      goto LABEL_60;
    }
LABEL_42:
    v8 = HampDepGroupCheckCreateDependencyActivity(a3, a2, Heap[40] == 4, (struct _HAM_HOST_DEPENDENCY *)Heap);
    if ( v8 >= 0 )
    {
      HampDepGroupAcquireLockExclusive(v12);
      v20 = Heap + 16;
      if ( (unsigned __int8)Heap[40] > 3u )
        v21 = (char *)v15 + 80;
      else
        v21 = (char *)v15 + 64;
      v22 = *(_QWORD *)v21;
      if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
        __fastfail(3u);
      *v20 = v22;
      *((_QWORD *)Heap + 3) = v21;
      *(_QWORD *)(v22 + 8) = v20;
      *(_QWORD *)v21 = v20;
      HampDepGroupReleaseLockExclusive(v12);
      if ( *(_QWORD *)Heap )
        v26 = *(_QWORD *)(*(_QWORD *)Heap + 40LL);
      else
        v26 = -1LL;
      if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
      {
        v28[0] = *(_BYTE *)a3;
        v29 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)&v35 + 1);
        v30 = v35;
        v31 = *(_QWORD *)v12;
        v32 = v26;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v23,
          (__int64)&unk_1800D0054,
          v24,
          v25,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)v28);
      }
      if ( v33 )
        *v33 = (struct _HAM_HOST_DEPENDENCY *)Heap;
      *v34 = v12;
      v12 = 0LL;
      v8 = 0;
      goto LABEL_60;
    }
    goto LABEL_58;
  }
  v12 = v29;
LABEL_60:
  if ( v12 )
  {
    HampDepGroupRunStateChangeWorker(v12);
    HampDepGroupDereference(v12);
  }
  return (unsigned int)v8;
}
