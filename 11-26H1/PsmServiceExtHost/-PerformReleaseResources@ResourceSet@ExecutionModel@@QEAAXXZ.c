/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18002C994
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18002C870 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18000338C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18002CC20 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002CE94 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this)
{
  __int64 v2; // r9
  __int64 v3; // r8
  _OWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  __int64 v20; // [rsp+90h] [rbp+27h]

  memset_0(&UserData, 0, 0x50uLL);
  if ( (*((_BYTE *)this + 1284) & 1) != 0 )
  {
    if ( dword_1800E1278 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)&UserData);
      if ( (unsigned int)dword_1800E1278 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 1LL) )
        {
          v12 = v17;
          *(_QWORD *)&EventDescriptor.Id = v20;
          v13 = *((_QWORD *)this + 215);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v9,
            (__int64)&unk_1800D32C1,
            v10,
            v11,
            (__int64)&v13,
            (__int64)&EventDescriptor,
            (__int64)&v12);
        }
      }
    }
  }
  RmpResourceSetReleaseResources(*((struct _RM_RESOURCE_SET **)this + 164));
  *((_QWORD *)this + 164) = 0LL;
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v2 = *((_QWORD *)this + 165);
  v3 = 3LL * *((int *)this + 332);
  v4 = (_OWORD *)((char *)this + 1296);
  v5 = *((_QWORD *)this + 162);
  if ( *(ExecutionModel::ResourceSet **)(v5 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1296)
    || (v6 = (_QWORD *)*((_QWORD *)this + 163), (_OWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  --*(_DWORD *)(v2 + 8 * v3 + 1136);
  v7 = *(_QWORD *)this;
  *((_DWORD *)this + 332) = 2;
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(v7 + 16))(this);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL))(this);
  v8 = *((_QWORD *)this + 214);
  if ( v8 && this != (ExecutionModel::ResourceSet *)-1712LL )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 214) = 0LL;
  }
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 9) != 0 && (qword_1800E1290 & 9) == qword_1800E1290 )
  {
    v13 = *((_QWORD *)this + 215);
    v19 = 8LL;
    v18 = &v13;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v16 = &unk_1800D318D;
    UserData.Reserved = 2;
    v17 = 0x10000002BLL;
    LODWORD(v12) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  *((_BYTE *)this + 12) = 0;
}
