/*
 * XREFs of ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028FB8
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180027FB8 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D45C (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800131A4 (-HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18005BC74 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampHostCheckNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // esi
  __int64 v3; // r14
  int v4; // r15d
  char *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+90h] [rbp+38h] BYREF
  int v17; // [rsp+98h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+48h] BYREF
  char *v19; // [rsp+A8h] [rbp+50h] BYREF

  v17 = 0;
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CD412);
  v2 = 0;
  v16 = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  v3 = 32LL;
  if ( (*((_QWORD *)a1 + 83) & 0x800000000LL) != 0 )
  {
    v4 = 1;
    v5 = (char *)a1 + 696;
  }
  else
  {
    v4 = 0;
    HampHostStartProcessPresenceChange(a1);
    if ( (*((_QWORD *)a1 + 83) & 0x2000000000000LL) != 0 )
    {
      HampHostReleaseLockExclusive(a1);
      v6 = 80LL;
      v7 = 648LL;
      if ( a1 )
        v6 = (__int64)a1 + 24;
      v8 = 48LL;
      v9 = 32LL;
      if ( a1 )
        v7 = (__int64)a1 + 592;
      v10 = 612LL;
      v11 = *(_BYTE *)v7;
      v12 = 544LL;
      if ( a1 )
      {
        v9 = (__int64)a1 - 24;
        v10 = (__int64)a1 + 556;
        v12 = (__int64)a1 + 488;
        v8 = (__int64)a1 - 8;
      }
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)v8 + 40LL)
                                                                                           + 72LL))(
        v12,
        *(unsigned int *)v10,
        v6,
        *(unsigned int *)(v6 + 536),
        *(_QWORD *)v9,
        v11 != 0 ? 4 : 0,
        0LL,
        &v17);
      if ( v17 )
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
      else
      {
        HampHostNotifyZeroProcess((__int64)a1, 0, 0, 0, &v16);
        v2 = v16;
      }
    }
    v5 = (char *)a1 + 696;
    *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
    RtlWakeAllConditionVariable((char *)a1 + 696);
    HampHostCheckSetCacheTimer(a1);
  }
  HampHostReleaseLockExclusive(a1);
  if ( v4 )
    RtlWakeAllConditionVariable(v5);
  if ( v2 )
    RmHamHostDereference(a1);
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
  {
    LOBYTE(v16) = RmHamHostGetJobType(a1);
    if ( a1 )
      v3 = (__int64)a1 - 24;
    v18 = *(_QWORD *)v3;
    v19 = (char *)a1 + 24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v13,
      (unsigned int)&unk_1800CD369,
      v14,
      v15,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v16);
  }
}
