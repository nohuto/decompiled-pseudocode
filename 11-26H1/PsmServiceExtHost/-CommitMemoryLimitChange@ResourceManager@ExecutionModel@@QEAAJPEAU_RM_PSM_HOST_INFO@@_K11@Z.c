/*
 * XREFs of ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180008424
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18001AD24 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180028630 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18005C470 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x180064908 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CommitMemoryLimitChange(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v12; // ebx
  _QWORD *v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // [rsp+50h] [rbp-41h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-39h] BYREF
  __int64 v22; // [rsp+60h] [rbp-31h] BYREF
  __int64 v23; // [rsp+68h] [rbp-29h] BYREF
  __int64 v24; // [rsp+70h] [rbp-21h] BYREF
  __int128 v25; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-9h]

  v25 = 0LL;
  v26 = 0LL;
  if ( *((_QWORD *)this + 23) )
  {
    v9 = utl::hash<_RM_PSM_HOST_INFO>::operator()();
    v10 = *((_QWORD *)this + 23);
    v11 = *(_QWORD **)(v10 + 16 * (v9 & ((8LL << *((_BYTE *)this + 200)) - 1)));
    if ( v11 )
    {
      v14 = **(_QWORD ***)(v10 + 16 * (v9 & ((8LL << *((_BYTE *)this + 200)) - 1)) + 8);
      while ( v11 != v14 )
      {
        if ( v11[2] >= v9 )
        {
          if ( v11[2] > v9 )
            break;
          if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v10, a2, v11 + 3) )
          {
            if ( v11 == (_QWORD *)((char *)this + 168) )
              break;
            v15 = v11[73];
            v26 = a5;
            *(_QWORD *)&v25 = a3;
            *((_QWORD *)&v25 + 1) = a4;
            v16 = RtlPublishWnfStateData(v15, 0LL, &v25, 24LL, 0LL);
            v12 = v16;
            if ( (unsigned int)dword_1800E12B0 > 5 )
            {
              v19 = *((_QWORD *)a2 + 68);
              v20 = v16;
              v21 = a5;
              v22 = a4;
              v23 = a3;
              v24 = v19;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                v19,
                (unsigned int)&unk_1800D12A4,
                v17,
                v18,
                (__int64)&v20,
                (__int64)&v24,
                (__int64)&v23,
                (__int64)&v22,
                (__int64)&v21);
            }
            if ( v12 >= 0 )
              break;
            return (unsigned int)v12;
          }
        }
        v11 = (_QWORD *)*v11;
      }
    }
  }
  return 0;
}
