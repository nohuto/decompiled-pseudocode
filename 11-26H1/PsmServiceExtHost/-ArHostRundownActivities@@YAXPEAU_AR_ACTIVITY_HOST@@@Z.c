/*
 * XREFs of ?ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180075068
 * Callers:
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074E44 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014C6C (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003F124 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180063AC4 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 */

void __fastcall ArHostRundownActivities(struct _AR_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  ArHostWaitForAndSetChangeInProgress(a1);
  v2 = *((_QWORD *)a1 + 75);
  if ( v2
    && (int)ArActClose(*((struct _AR_ACTIVITY **)a1 + 75)) < 0
    && (unsigned int)dword_1800E12B0 > 4
    && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
  {
    v7 = *(_QWORD *)(v2 + 8);
    v6 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v3,
      byte_1800CB98C,
      v4,
      v5,
      (__int64)&v6,
      (__int64)&v7);
  }
  ArHostClearChangeInProgress(a1);
}
